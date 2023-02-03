#include <iostream>

using namespace std;

struct Worker {
    char    FullName[64];
    int     Age;
    float   Salary;

};

// kiritsh operatorinin qayta ishlash!
istream& operator >> (istream &input, Worker &worker) {
    cout << "Enter fullname\t: ";
    input >> worker.FullName;

    cout << "Enter age\t: ";
    input >> worker.Age;

    cout << "Enter salary\t: ";
    input >> worker.Salary;

    return input;
}


// chiqarish operatorini qayta ishlash
ostream& operator << (ostream &out, Worker &worker) {
    out << "\nfullname: " << worker.FullName << endl;
    out << "age\t: " << worker.Age << endl;
    out << "salary\t: " << worker.Salary << endl;

    return out;
}

int main () {

    Worker worker;
    FILE *file;
    int n = 0;

    file = fopen("workers.txt", "a+");

    cout << "royxatni ko'rish uchun 0 ni kiriting!\n";
    cout << "kititiladigan ishchilar sonini kiriting!\n";
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            cout << "ishchi ma'lumotlarini kiriting:\n";
            cin >> worker;

            fwrite(&worker, sizeof(Worker), 1, file);
        }
    }

    rewind(file);

    cout << "ishchilar ro'yxati:\n";
    n = 0;
    while (fread(&worker, sizeof(Worker), 1, file)) {
        n++;
        cout << n << " \n" << worker;
    }

    rewind(file);
    cout << "21 yoshdan kichik dasturchilar ro'yxati: \n";
    n = 0;

    while (fread(&worker, sizeof(Worker), 1, file)) {
        
        if (worker.Age <= 21) {
            n++;
            cout << n << " \n" << worker;
        }
        
    }

    fclose(file);

    return 0;
}