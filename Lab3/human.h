#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;
class Human
{
    string first_name;
    string soname;
    string last_name;
    int birthday;
    string sex;
public:
    Human();
    void SetAllHuman();
    void SetFirtName();
    void SetLastName();
    void SetSoname();
    void SetBirthday();
    void SetSex();

    void GetAllHuman();
    void GetFirtName();
    void GetLastName();
    void GetSoname();
    void GetBirthday();
    void GetSex();
};

#endif // HUMAN_H
