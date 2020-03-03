#include "userlibrary.h"
#include "human.h"
#include <string>
#include<iostream>
#include "book.h"
using namespace std;
UserLibrary::UserLibrary()
{
    ticket_number=-1;
    date="00.00.2020";
    books = nullptr;
    count_books=0;
    mounthly_fee=0;
    status="";
}


UserLibrary::~UserLibrary(){
    if (this->books == nullptr){
        delete [] books;
    }
}

void UserLibrary::GetAllUserLibrary(){
    cout <<"Ticket number: "<< this->ticket_number <<endl;
    cout <<"Date: "<< this->date <<endl;
    for(int i=0; i<this->count_books; i++){
        cout <<"Books: "<< this->books[i].GetBook()<<" Discription: " <<  this->books[i].GetDescroption()<<endl;
    }
    cout <<"Number of  books: "<< this->count_books <<endl;
    cout <<"Mounthly fee: "<< this->mounthly_fee <<endl;
    cout <<"Status: "<< this->status <<endl;
}


void UserLibrary::SetAllUserLibrary(){
    cout << "Enter "<<endl;
    cout <<" Ticket number: ";
    cin>>this->ticket_number;
    cout <<" Date: ";
    cin>>this->date;
    cout <<" Mounthly fee: ";
    cin>>this->mounthly_fee;
    cout <<" Status: ";
    cin>>this->status;
    cout<< " Number of books: ";
    cin>>this->count_books;
    if (this->books != nullptr)
        delete [] books;
    this->books = new Book[this->count_books];

    for(int i=0; i<count_books; i++){
        string _name;
        cout <<" Book name: ";
        cin>>_name;
               this->books[i].SetBook(_name);
        cout <<" Book descroption: ";
        cin>>_name;
       this->books[i].SetDescroption(_name);
    }
}

void UserLibrary::SetTicketNumber(){
    cout << "Enter "<<endl;
    cout <<" Ticket number: ";
     cin>> this->ticket_number;
}
void UserLibrary::GetTicketNumber(){
    cout <<"Ticket number: "<< this->ticket_number <<endl;
}

void UserLibrary::SetDate(){
    cout << "Enter "<<endl;
    cout <<" Date: ";
    cin>>this->date;
}
void UserLibrary::GetDate(){
    cout <<"Date: "<< this->date <<endl;
}

void UserLibrary::SetBooks(){
    cout << "Enter "<<endl;
    cout<< " Number of books: ";
    cin>>this->count_books;
    if (this->books != nullptr)
        delete [] books;
    this->books = new Book[this->count_books];
    for(int i=0; i<count_books; i++){
        string _name;
        cout <<" Book name: ";
        cin>>_name;
               this->books[i].SetBook(_name);
        cout <<" Book descroption: ";
        cin>>_name;
       this->books[i].SetDescroption(_name);
    }
}
void UserLibrary::GetBooks(){
    for(int i=0; i<this->count_books; i++){
        cout <<"Books: "<< this->books[i].GetBook()<<" Discription: " <<  this->books[i].GetBook()<<endl;
    }
}
void UserLibrary::SetMounthlyFee(){
    cout << "Enter "<<endl;
    cout <<" Mounthly fee: ";
    cin>>this->mounthly_fee;
}
void UserLibrary::GetMounthlyFee(){
    cout <<"Mounthly fee: "<< this->mounthly_fee <<endl;
}

void UserLibrary::SetStatus(){
    cout << "Enter "<<endl;
    cout <<" Status: ";
    cin>>this->status;
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

void UserLibrary::SetInformationBooks(){
    int _size;
    cout << "Enter "<<endl;
    cout << " Number of book descroptions: "<<endl;
    cin >> _size;
    string information;
    int num=0;
    for(int i=0; i<_size; i++){
        cout << "  Descroption number: "<<endl;
        cin >> num;
        if (num-1 > this->count_books){
            cout<< "Number must be less then "<< this->count_books<<endl;
        }
        cout << "  Descroption: "<<endl;
        cin >> information;
        this->books[num-1].SetDescroption(information);
    }
}


