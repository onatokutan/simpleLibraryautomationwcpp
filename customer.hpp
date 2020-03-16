#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include "book.hpp"

class Customer{
private:
    string customerName;
    Book *customerBooks;
public:
Customer(); //constructor

//sets
void setcustomerName(string customerName);
void setcustomerBooks(Book* bookP);

//gets
string getcustomerName();
Book* getcustomerBook();

};

#endif
