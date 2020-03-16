#include "customer.hpp"

Customer::Customer()//constructor
{
customerName = " ";
}

//sets
void Customer::setcustomerName(string customerName)
{
this->customerName = customerName;
}
void Customer::setcustomerBooks(Book* customerBooks)
{

}

//gets
string Customer::getcustomerName()
{
    return customerName;
}
Book* Customer::getcustomerBook()
{
    return customerBooks;
}
