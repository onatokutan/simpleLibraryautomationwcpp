#include "customer.hpp"

int main()
{
    system("cls");
    string tmp;
    //customer counter variables.
    int maxCustomer = 0;
    int customerCounter = 0;
    //book counter variables.
    int maxBook = 0;
    int bookCounter = 0;
    cout << "How many customers do you want to create? Write a number." << endl;
    cin >> maxCustomer;                                                      // This is the maximum customers numbers can system has.
    Customer **newCustomer = new Customer *[maxCustomer];                    //dynamic object array.
    cout << "How many books do you want to create? Write a number." << endl; //Same as customer.
    cin >> maxBook;                                                          //Same as customer.
    Book **newBook = new Book *[maxBook];                                    //Same as customer.
    system("cls");
    while (1)
    {
        cout << "1-Customer Operations\n2-Book Operations\n";
        cin >> tmp;
        //General Menu Section starts here.
        if (tmp == "1")
        {
            system("cls");
            while (tmp != "Back" || tmp != "back")
            {
                cout << "1-Add Customer\n2-Show customer list\n'Back' - Go back to previous menu" << endl;
                cin >> tmp;
                system("cls");
                //Customer Menu Section starts here.
                if (tmp == "1")
                {
                    cout << "Customer Name : ";
                    cin >> tmp;
                    newCustomer[customerCounter] = new Customer();
                    newCustomer[customerCounter]->setcustomerName(tmp);
                    system("cls");
                    tmp = " ";
                    customerCounter++;
                }
                if (tmp == "2")
                {
                    for (int i = 0; i < customerCounter; i++)
                        cout << newCustomer[i]->getcustomerName() << endl;
                }
                else
                {
                    system("cls");
                    cout << "There isn't that option. Sorry, please try again and write it carefully." << endl;
                }
            }
            //Customer Menu Section ends here.
        }
        if (tmp == "2")
        {
            system("cls");
            while (tmp != "Back" || tmp != "back")
            {
                cout << "1-Add a book\n2-Show book list\n'Back' - Go back to previous menu" << endl;
                cin >> tmp;
                if (tmp == "1")
                {
                    int tmpval; //stoi crashed many times. so i will look into it later.
                    system("cls");
                    newBook[bookCounter] = new Book();
                    cout << "What is the title of the book?" << endl;
                    cin >> tmp;
                    newBook[bookCounter]->setbookName(tmp);
                    cout << "What is the value of the book?" << endl;
                    cin>>tmpval;
                    newBook[bookCounter]->setbookPrice(tmpval);
                    //cin >> tmp;
                    //newBook[bookCounter]->setbookPrice(stoi(tmp));//stoi crashes rarely.
                    newBook[bookCounter]->setbookStatus(1);
                    system("cls");
                    cout << "The '" << newBook[bookCounter]->getbookName() << "' has been added to the system succesfully." << endl;
                    bookCounter++;
                }
                if (tmp == "2")
                {
                    for (int i = 0; i < bookCounter; i++)
                    {
                        cout << newBook[i]->getbookName() << "\t" << newBook[bookCounter]->getbookPrice() << " $";
                        newBook[i]->getbookStatus() ? cout << "In stock" << endl : cout << "Out of Stock" << endl;
                    }
                }
                else
                {
                    system("cls");
                    cout << "There isn't that option. Sorry, please try again and write it carefully." << endl;
                }
            }
        }
        //General Menu Section ends here.
    }
    return 1;
}