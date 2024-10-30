#include "Customer.h"
#include <string>

using namespace std;


int main() {
    setlocale(LC_CTYPE, "ukr");


    Customer customer(1, "Шевяков", "Антон", "Сергiйович", "вул. Зарiчна 27", "1234-5678-9101-1121", 5000.50);


    customer.printInfo();

    return 0;
}