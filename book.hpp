#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>

using namespace std;

class Book{
private:
    string bookName;
    int bookPrice;
    bool bookStatus;

public:
    Book(); //constructor of the class

    //sets
    void setbookName(string bookName);
    void setbookPrice(int bookPrice);
    void setbookStatus(bool bookStatus);
    
    //gets
    string getbookName();
    int getbookPrice();
    bool getbookStatus();
};

#endif