#include "human.h"
#include <string>
#include<iostream>
using namespace std;


Human::Human(){
    this->first_name="";
    this->soname="";
    this->last_name="";
    this->birthday=0;
    this->sex="";
};

void Human::SetAllHuman(){
    cout << "Enter "<<endl;
    cout << " First name: ";
    cin >> this->first_name;
    cout << " Last name: ";
    cin >> this->last_name;
    cout << " Soname: ";
    cin >> this->soname;
    cout << " Bitrhday: ";
    cin >> this->birthday;
    cout << " Sex: ";
    cin >> this->sex;
}

void Human::GetAllHuman(){
    cout<<"First name: "<< this->first_name<<endl;
    cout<<"Last name: "<< this->last_name<<endl;
    cout<<"Soname: "<< this->soname<<endl;
    cout<<"Birthday: "<< this->birthday<<endl;
    cout<<"Sex: "<< this->sex<<endl;
}

void Human::SetFirtName(){
    cout << "Enter "<<endl;
    cout << " First name: ";
    cin >> this->first_name;
}
void Human::GetFirtName(){
    cout<<"First name: "<< this->first_name<<endl;
}

void Human::SetLastName(){
    cout << "Enter "<<endl;
    cout << " Last name: ";
    cin >> this->last_name;
}
void Human::GetLastName(){
    cout<<"Last name: "<< this->last_name<<endl;
}

void Human::SetSoname(){
    cout << "Enter "<<endl;
    cout << " Soname: ";
    cin >> this->soname;
}
void Human::GetSoname(){
    cout<<"Soname: "<< this->soname<<endl;
}

void Human::SetBirthday(){
    cout << "Enter "<<endl;
    cout << " Bitrhday: ";
    cin >> this->birthday;
}
void Human::GetBirthday(){
      cout<<"Birthday: "<< this->birthday<<endl;
}

void Human::SetSex(){
    cout << "Enter "<<endl;
    cout << " Sex: ";
    cin >> this->sex;
}
void Human::GetSex(){
      cout<<"Sex: "<< this->sex<<endl;
}
