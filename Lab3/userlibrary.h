#ifndef USERLIBRARY_H
#define USERLIBRARY_H
#include "human.h"
#include <string>
using namespace std;

class UserLibrary : public Human
{
    int ticket_number=-1;
    string date="00.00.2020";
    string **books = nullptr;
    int count_books=0;
    int mounthly_fee;
    string status="";

public:
    UserLibrary();
    UserLibrary(int ticket_number, string date, string **books, int count_books, int mounthly_fee, string status);
    ~UserLibrary();
    void SetAllUserLibrary(int ticket_number, string date, string **books, int count_books, int mounthly_fee, string status);
    void SetTicketNumber(int ticket_number);
    void SetDate(string date);
    void SetBooks(string **books, int count_books);
    void SetMounthlyFee(int mounthly_fee);
    void SetStatus(string status);
    void GetAllUserLibrary();
    void GetTicketNumber();
    void GetDate();
    void GetBooks();
    void GetMounthlyFee();
    void GetStatus();
    float Discount();
    int AnnualFee();
    void SetInformationBooks(string *information, int size);
    string SetInformationBooks(string information, int number_book=0);

};

#endif // USERLIBRARY_H
