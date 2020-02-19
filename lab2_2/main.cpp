#include <iostream>
#include <array.h>
#include  <vector>
using namespace std;

int main()
{
    Array a ,b, c;
    unsigned int d[5] = {9, 10, 11 ,12 ,13};
    unsigned int *e = new unsigned int[6];

    a.Input();
    b.Input();
    a.Plus(b);
    a.Show();
    b.Show();
    b.Minus(a);
    a.Show();
    b.Show();
    a.Concate(b);
    a.Show();
    b.Show();
    a.Ascending_sort();
    a.Show();
    a.Descending_sort();
    a.Show();

    return 0;
}
