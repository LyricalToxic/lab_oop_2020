#include "book.h"
#include <string>
using namespace std;
Book::Book()
{
    name="";
    description="";
}
Book::Book(string name){
    this->name = name;
}
Book::Book(string name, string descroption){
    this->name = name;
    this->description = descroption;
}
void Book::SetBook(string name){
    this->name = name;
}
void Book::SetDescroption(string descroption){
    this->description = descroption;
}
string Book::GetBook(){
    return this->name;
}
string Book::GetDescroption(){
    return this->description;
}
