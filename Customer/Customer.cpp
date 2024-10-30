#include "Customer.h"
#include <iostream>
#include <string>




Customer::Customer()
{
}

Customer::Customer(int id, std::string surname, std::string name, std::string patronymic, std::string address, std::string creditnumber, double balance)
{
	this->id = id;
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
	this->address = address;
	this->creditnumber = creditnumber;
	this->balance = balance;
}

Customer::Customer(const Customer& other)
{
}

int Customer::getId() const
{
	return id;
}

void Customer::setId(int id)
{
	this->id = id;
}

std::string Customer::getSurname() const
{
	return surname;
}

void Customer::setSurname(const std::string& surname)


{
	this->surname = surname;
}

std::string Customer::getName() const
{
	return name;
}

void Customer::setName(const std::string& name)
{
	this->name = name;
}

std::string Customer::getPatronymic() const
{
	return patronymic;

}

void Customer::setPatronymic(const std::string& patronymic)
{
	this->patronymic = patronymic;
}

std::string Customer::getAddress() const
{
	return address;
}

void Customer::setAddress(const std::string& address)
{
	this->address = address;

}

std::string Customer::getCreditNumber() const
{
	return creditnumber;
}

void Customer::setCreditNumber(const std::string& creditnumber)
{
	this->creditnumber = creditnumber;
}

double Customer::getBalance() const
{
	return balance;
}

void Customer::setBalance(double balance)
{
	this->balance = balance;
}

std::istream& operator>>(std::istream& is, Customer& customer)
{
	int id, medcard;
	std::string name, surname, patronymic, address, creditnumber;

	std::cout << "ID: ";
	is >> id;
	is.ignore();
	customer.setId(id);

	std::cout << "Name: ";
	std::getline(is, name);
	customer.setName(name);

	std::cout << "Surname: ";
	std::getline(is, surname);
	customer.setSurname(surname);

	std::cout << "Patronymic: ";
	std::getline(is, patronymic);
	customer.setPatronymic(patronymic);

	std::cout << "Address: ";
	std::getline(is, address);
	customer.setAddress(address);

	std::cout << "Creditnumber: ";
	std::getline(is, creditnumber);
	customer.setCreditNumber(creditnumber);

	return is;
}

std::ostream& operator<<(std::ostream& os, Customer& customer)
{
	os << "ID: " << customer.getId() << "\n";
	os << "Name: " << customer.getName() << "\n";
	os << "Surname: " << customer.getSurname() << "\n";
	os << "Patronymic: " << customer.getPatronymic() << "\n";
	os << "Address: " << customer.getAddress() << "\n";
	os << "Creditnumber: " << customer.getCreditNumber() << "\n";
	

	return os;
}
