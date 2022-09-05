#include <iostream>
using namespace std;
class Name
{
protected:
	char surName[20], firstName[20];
public:
	Name()
	{
		surName[0] = 0;
		firstName[0] = 0;
	}
	void read();
	void print();
};
class Date
{
protected:
	int day, month, year;
public:
	Date()
	{
		day = month = year = 0;
	}
	void read();
	void print();
};
class Address
{
protected:
	char city[30];
	char street[30];
	int no;
	char zipCode[7];
public:
	Address()
	{
		city[0] = 0;
		street[0] = 0;
		no = 0;
		zipCode[0] = 0;
	}
	void read();
	void print();
};
class Person : public Name, public Date, public Address
{
public:
	void read();
	void print();
};
void Name::read()
{
	cout << "\nSurName:";
	cin >> surName;
	cout << "\nFirstName:";
	cin >> firstName;
}
void Name::print()
{
	cout << "\nName: " << surName << " " << firstName;
}
void Date::read()
{
	do
	{
		cout << "\nday:";
		cin >> day;
	} while (day < 1 || day>30);
	do
	{
		cout << "\nmonth:";
		cin >> month;
	} while (month < 1 || month>12);
	cout << "\nyear:";
	cin >> year;
}
void Date::print()
{
	cout << day << '.' << month << '.' << year;
}
void Address::read()
{
	cout << "\nCity:";
	cin >> city;
	cout << "\nStreet:";
	cin >> street;
	cout << "\nNumber:";
	cin >> no;
	cout << "\nZipCode:";
	cin >> zipCode;
}
void Address::print()
{
	cout << "\nCity: " << city;
	cout << "\nStreet: " << street << ", no: " << no;
	cout << "\nZipCode: " << zipCode;
}
void Person::read()
{
	cout << "\nIndividual data:";
	Name::read();
	cout << "\nBirthday:";
	Date::read();
	cout << "\nAddress:";
	Address::read();
}
void Person::print()
{
	cout << "\nIndividual data:";
	Name::print();
	cout << "\nBirthday:";
	Date::print();
	cout << "\nAddress:";
	Address::print();
	cout << endl;
}
void main()
{
	Person pers;
	pers.print();
	pers.read();
	pers.print();
	cin.ignore(100, '\n');
	cin.get();
}
