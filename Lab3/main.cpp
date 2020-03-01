#include <iostream>
#include "userlibrary.h"
#include <string>
using namespace std;

int main()
{
    UserLibrary Antony;
    Antony.SetAllHuman("Antony", "Red", "Pa", 1991, "Male");
    int count_books = 4;
    string **books = new string*[4];
    string *inf = new string[4];
    inf[0]="NoB1";
    inf[1]="NoB2";
    inf[2]="NoB3";
    inf[3]="NoB44";
    for(int i=0; i< count_books; i++){
        books[i] = new string[2];
        books[i][0] = "A" + to_string(i);
        books[i][1] = "B" + to_string(i);
    }

    Antony.SetAllUserLibrary(10, "01-03-2020", books, count_books, 30, "Read");
    Antony.GetAllHuman();
    Antony.GetAllUserLibrary();
    Antony.SetInformationBooks(inf, 3);
    Antony.GetBooks();
    Antony.SetInformationBooks(inf[3], 4);
    Antony.GetBooks();
    cout<<"Discount:"<< Antony.Discount() *100<<"%"<< endl;
    cout<<"Annual fee:"<< Antony.AnnualFee()<<endl;
    return 0;
}
