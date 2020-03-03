#ifndef USERLIBRARY_H
#define USERLIBRARY_H
#include "human.h"
#include "book.h"
#include <string>
using namespace std;

class UserLibrary : public Human
{
    int ticket_number;
    string date;
    Book *books;
    int count_books;
    int mounthly_fee;
    string status;

public:
    UserLibrary();
    ~UserLibrary();
    void SetAllUserLibrary();
    void SetTicketNumber();
    void SetDate();
    void SetBooks();
    void SetMounthlyFee();
    void SetStatus();
    void GetAllUserLibrary();
    void GetTicketNumber();
    void GetDate();
    void GetBooks();
    void GetMounthlyFee();
    void GetStatus();
    float Discount();
    int AnnualFee();
    void SetInformationBooks();

};

#endif // USERLIBRARY_H
