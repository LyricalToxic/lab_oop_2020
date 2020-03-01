#include "human.h"
#include <string>
#include<iostream>
using namespace std;

Human::Human(string first_name, string soname, string last_name, int birthday, string sex)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->soname = soname;
    this->birthday = birthday;
    this->sex = sex;
}
Human::Human(){};

void Human::SetAllHuman(string first_name, string soname, string last_name, int birthday, string sex){
    this->first_name = first_name;
    this->last_name = last_name;
    this->soname = soname;
    this->birthday = birthday;
    this->sex = sex;
}

void Human::GetAllHuman(){
    cout<<"First name: "<< this->first_name<<endl;
    cout<<"Last name: "<< this->last_name<<endl;
    cout<<"Soname: "<< this->soname<<endl;
    cout<<"Birthday: "<< this->birthday<<endl;
    cout<<"Sex: "<< this->sex<<endl;
}

void Human::SetFirtName(string first_name){
    this->first_name = first_name;
}
void Human::GetFirtName(){
    cout<<"First name: "<< this->first_name<<endl;
}

void Human::SetLastName(string last_name){
    this->last_name = last_name;
}
void Human::GetLastName(){
    cout<<"Last name: "<< this->last_name<<endl;
}

void Human::SetSoname(string soname){
    this->soname = soname;
}
void Human::GetSoname(){
    cout<<"Soname: "<< this->soname<<endl;
}

void Human::SetBirthday(int birthday){
    this->birthday = birthday;
}
void Human::GetBirthday(){
      cout<<"Birthday: "<< this->birthday<<endl;
}

void Human::SetSex(string sex){
    this->sex = sex;
}
void Human::GetSex(){
      cout<<"Sex: "<< this->sex<<endl;
}
