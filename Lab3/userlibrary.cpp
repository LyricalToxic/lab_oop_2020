#include "userlibrary.h"
#include "human.h"
#include <string>
#include<iostream>
using namespace std;
UserLibrary::UserLibrary()
{

}

UserLibrary::UserLibrary(int ticket_number, string date, string **books, int count_books, int mounthly_fee, string status){
    this->ticket_number = ticket_number;
    this->date = date;
    this->count_books = count_books;
    this->mounthly_fee = mounthly_fee;
    this->status = status;
    this->books = new string*[this->count_books];
    for(int i=0; i<count_books; i++){
        this->books[i] = new string[2];
        this->books[i][0] = books[i][0];
        this->books[i][1] = books[i][1];
    }
}

UserLibrary::~UserLibrary(){

    if (this->books == nullptr){
        delete [] books;
    } else {
        for(int i=0; i<this->count_books; i++){
            delete [] books[i];
        }
        delete []books;
    }
}

void UserLibrary::GetAllUserLibrary(){
    cout <<"Ticket number: "<< this->ticket_number <<endl;
    cout <<"Date: "<< this->date <<endl;
    for(int i=0; i<this->count_books; i++){
        cout <<"Books: "<< this->books[i][0]<<" Discription: " <<  this->books[i][1]<<endl;
    }
    cout <<"Count books: "<< this->count_books <<endl;
    cout <<"Mounthly fee: "<< this->mounthly_fee <<endl;
    cout <<"Status: "<< this->status <<endl;
}


void UserLibrary::SetAllUserLibrary(int ticket_number, string date, string **books, int count_books, int mounthly_fee, string status){
    this->ticket_number = ticket_number;
    this->date = date;
    this->count_books = count_books;
    this->mounthly_fee = mounthly_fee;
    this->status = status;
    if (this->books != nullptr)
        books = nullptr;
        this->books = new string*[this->count_books];
    for(int i=0; i<count_books; i++){
        this->books[i] = new string[2];
        this->books[i][0] = books[i][0];
        this->books[i][1] = books[i][1];
    }
}

void UserLibrary::SetTicketNumber(int ticket_number){
    this->ticket_number = ticket_number;
}
void UserLibrary::GetTicketNumber(){
    cout <<"Ticket number: "<< this->ticket_number <<endl;
}

void UserLibrary::SetDate(string date){
    this->date = date;
}
void UserLibrary::GetDate(){
    cout <<"Date: "<< this->date <<endl;
}

void UserLibrary::SetBooks(string **books, int count_books){
    this->count_books = count_books;
    if (this->books != nullptr)
        books = nullptr;
        this->books = new string*[this->count_books];
    for(int i=0; i<this->count_books; i++){
        this->books[i] = new string[2];
        this->books[i][0] = books[i][0];
        this->books[i][1] = books[i][1];
    }
}
void UserLibrary::GetBooks(){
    for(int i=0; i<this->count_books; i++){
        cout <<"Books: "<< this->books[i][0]<<" Discription: " <<  this->books[i][1]<<endl;
    }
}
void UserLibrary::SetMounthlyFee(int mounthly_fee){
    this->mounthly_fee = mounthly_fee;
}
void UserLibrary::GetMounthlyFee(){
    cout <<"Mounthly fee: "<< this->mounthly_fee <<endl;
}

void UserLibrary::SetStatus(string status){
    this->status = status;
}
void UserLibrary::GetStatus(){
    cout <<"Status: "<< this->status <<endl;
}

float UserLibrary::Discount(){
    float any_formula = 0;
    if (this->count_books){
        any_formula = (this->count_books /  50.0)  - 0.01;
    }
    return any_formula;
}

int UserLibrary::AnnualFee(){
    return this->mounthly_fee*12;
}

void UserLibrary::SetInformationBooks(string *information, int size){
    int _size =size;
    if (size>this->count_books){
        _size = this->count_books;
    }
    for(int i=0; i<_size; i++){
        this->books[i][1] = information[i];
    }
}

string UserLibrary::SetInformationBooks(string information, int number_book){
    if (number_book-1 <= this->count_books){
    this->books[number_book-1][1] = information;
    } else {
        return "Number book out of range";
    }
}

