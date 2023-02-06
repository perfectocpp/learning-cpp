#include <iostream>
#include <libpq-fe.h>

int main()
{
    // Connect to the database
    PGconn *conn = PQconnectdb("host=localhost user=postgres password=1001 dbname=main");

    // Check the connection status
    if (PQstatus(conn) == CONNECTION_BAD)
    {
        std::cout << "Failed to connect to database: " << PQerrorMessage(conn) << std::endl;
        return 1;
    }

    // Execute a simple query
    PGresult *res = PQexec(conn, "SELECT * FROM test_table");
    if (PQresultStatus(res) != PGRES_TUPLES_OK)
    {
        std::cout << "Query failed: " << PQresultErrorMessage(res) << std::endl;
        return 1;
    }

    // Print the result
    for (int i = 0; i < PQntuples(res); i++)
    {
        for (int j = 0; j < PQnfields(res); j++)
        {
            std::cout << PQgetvalue(res, i, j) << " ";
        }
        std::cout << std::endl;
    }

    // Clean up
    PQclear(res);
    PQfinish(conn);

    return 0;
}
