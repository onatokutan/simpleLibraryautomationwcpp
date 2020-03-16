#include "book.hpp"

    Book::Book(){
        bookName = " ";
        bookPrice = 0;
        bookStatus = 0;             
    }
    void Book::setbookName(string bookName)
    {
        this->bookName=bookName;
    }
    string Book::getbookName()
    {
        return bookName;
    }
    void Book::setbookPrice(int bookPrice)
    {
        this->bookPrice=bookPrice;
    }
    int Book::getbookPrice()
    {
        return bookPrice;
    }
    void Book::setbookStatus(bool bookStatus)
    {
        this->bookStatus=bookStatus;
    }
    bool Book::getbookStatus()
    {
        return bookStatus;
    }
