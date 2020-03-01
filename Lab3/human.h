#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;
class Human
{
    string first_name="";
    string soname="";
    string last_name="";
    int birthday=0;
    string sex="";
public:
    Human();
    Human(string first_name, string soname, string last_name, int birthday, string sex);
    void SetAllHuman(string first_name, string soname, string last_name, int birthday, string sex);
    void SetFirtName(string first_name);
    void SetLastName(string last_name);
    void SetSoname(string soname);
    void SetBirthday(int birthday);
    void SetSex(string sex);

    void GetAllHuman();
    void GetFirtName();
    void GetLastName();
    void GetSoname();
    void GetBirthday();
    void GetSex();
};

#endif // HUMAN_H
