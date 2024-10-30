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
	std::cout << "ID: ";
	is >> customer.id;
	is.ignore();
	std::cout << "Name: ";
	std::cout << customer.getName() << std::endl;
	std::cout << "Surname: ";
	std::cout << customer.getSurname() << std::endl;
	std::cout << "Patronymic: ";
	std::cout << customer.getPatronymic() << std::endl;
	std::cout << "Address: ";
	std::cout << customer.getAddress() << std::endl;
	std::cout << "Creditnumber: ";
	std::cout << customer.getCreditNumber() << std::endl;
	std::cout << "Balance: ";
	is >> customer.balance;
	is.ignore();

	return is;
}