#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book
{
    string name;
    string description;
public:
    Book();
    Book(string name);
    Book(string name, string description);
    void SetBook(string name);
    void SetDescroption(string descroption);
    string GetBook();
    string GetDescroption();

};

#endif // BOOKS_H
