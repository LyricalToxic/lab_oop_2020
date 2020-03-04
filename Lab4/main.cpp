#include <iostream>
#include <string.h>
#include "line.h"
using namespace std;

int main()
{
    Line a,b,d,e;
    char* c = new char[4];
    c[0]=3;
    c[1]='a';
    c[2]='b';
    c[3]='c';
    b=c;
    d=b;
    e=b+d;
    cout<<(b>=e)<<endl;
    cout<<(b==d)<<endl;
//    cout<<(b!=d)<<endl;
    return 0;
}
