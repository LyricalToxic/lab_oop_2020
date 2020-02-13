#include "array.h"

Array::Array(int size)
{
    arr = new unsigned int[size];
}
void Array::Init(){
    arr = new unsigned int[size];
}
void Array::Set_size(int array_size){
    size = array_size;
}

Array::~Array(){
    delete[] arr;
}
