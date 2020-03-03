#include <iostream>
#include "userlibrary.h"
#include <string>
#include "book.h"
using namespace std;

int main()
{
    UserLibrary Antony;
//    Antony.SetAllHuman();
    Antony.SetAllUserLibrary();
//    Antony.GetAllHuman();
    Antony.GetAllUserLibrary();
    Antony.SetInformationBooks();
    Antony.GetBooks();
    Antony.SetInformationBooks();
    Antony.GetBooks();
    cout<<"Discount:"<< Antony.Discount() *100<<"%"<< endl;
    cout<<"Annual fee:"<< Antony.AnnualFee()<<endl;
    return 0;
}
