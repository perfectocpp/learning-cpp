#include <iostream> 
#include <pqxx/pqxx>
#include <string>

using namespace std;

class databaseConnection {
    public:
        pqxx::connection* conn;

        void SetConnection(){
            try {
                conn = new pqxx::connection(
                "username=main "
                "host=db.corral.tacc.utexas.edu "
                "password=1001 "
                "dbname=postgres");
            } catch (const std::exception &e) {
                std::cerr << "ERROR:\n\n ---------------\n\n " << e.what() << std::endl;
            }
        }

        void Disconnect(){
            conn->disconnect();
        }

        pqxx::result query(std::string strSQL){
            //SetConnection();
            pqxx::work trans(*conn,"trans");

            pqxx::result res=trans.exec(strSQL);

            trans.commit();
            return res;
        }
};

int main() {
    cout << "hello!";
    databaseConnection* pdatabase;
    pdatabase->SetConnection();
    cout << "ulandi\n" ;
    return 0;
}