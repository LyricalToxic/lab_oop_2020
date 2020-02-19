#ifndef ARRAY_H
#define ARRAY_H


class Array
{
    unsigned int *array = nullptr;
    int size = 0;
public:
    Array();
    Array(Array &other_array);
    Array(Array *other_array);
    ~Array();
    void Set(const unsigned int other_array[], int other_size);
    void Show();
    void Input();
    Array Plus(Array &other_array);
    Array Minus(Array &other_array);
    Array Concate(Array &other_array);
    void Ascending_sort();
    void Descending_sort();
};

#endif // ARRAY_H
