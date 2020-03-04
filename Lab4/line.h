#ifndef LINE_H
#define LINE_H
#include <iostream>
using namespace std;

class Line
{
    char* line;
public:
    Line();
    ~Line();
    Line(int _size);
    char* operator=(char* line);
    Line operator=(Line line);
    friend Line operator+(Line rline, Line lline);
    friend bool operator<=(Line rline, Line lline);
    friend bool operator>=(Line rline, Line lline);
    friend bool operator==(Line rline, Line lline);
    friend bool operator!=(Line rline, Line lline);
    char* getLine();
};

#endif // LINE_H
