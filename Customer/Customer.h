#include <string>
#include <iostream>

class Customer {
public:
    int id;
    std::string surname;
    std::string name;
    std::string patronymic;
    std::string address;
    std::string creditnumber;
    double balance;


public:
    Customer();
    Customer(int id, std::string surname, std::string name, std::string patronymic, std::string address, std::string creditnumber, double balance);
    Customer(const Customer& other);


    int getId() const;
    void setId(int id);


    std::string getSurname() const;



    void setSurname(const  std::string& surname);



    std::string getName() const;



    void setName(const  std::string& name);



    std::string getPatronymic() const;



    void setPatronymic(const  std::string& patronymic);



    std::string getAddress() const;



    void setAddress(const  std::string& address);



    std::string getCreditNumber() const;



    void setCreditNumber(const  std::string& creditnumber);



    double getBalance() const;

    void setBalance(double balance);


    void printInfo() const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Прiзвище: " << surname << std::endl;
        std::cout << "Iм'я: " << name << std::endl;
        std::cout << "По батьковi: " << patronymic << std::endl;
        std::cout << "Адреса: " << address << std::endl;
        std::cout << "Номер кредитної картки: " << creditnumber << std::endl;
        std::cout << "Баланс рахунку: " << balance << std::endl;

    }

    friend std::istream&& operator <<(std::istream& is, Customer& Customer);




};