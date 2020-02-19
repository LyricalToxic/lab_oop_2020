#include "array.h"
#include <iostream>
#include <math.h>
using namespace std;
Array::Array()
{

}
Array::Array(Array & other_array){
    this->size = other_array.size;
    this->array = new unsigned int[this->size];
    for(int i=0;i<this->size;i++){
        this->array[i] = other_array.array[i];
    }
}

Array::Array(Array * other_array){
    this->size = other_array->size;
    this->array = new unsigned int[this->size];
    for(int i=0;i<this->size;i++){
        this->array[i] = other_array->array[i];
    }
}
Array::~Array(){
    delete[] array;
}

void Array::Set(const unsigned int other_array[],int other_size){
    this->size = other_size;
    cout<<this->size<<endl;
    if (array != nullptr)
        delete [] array;
    array = new unsigned int[size];
    for(int i=0; i<this->size;i++){
        array[i]= other_array[i];

    }
}
void Array::Show(){
    for(int i=0; i<this->size;i++){
       cout << "#"<< " "<<i<<" = "<< array[i]<< " "<< endl;
    }
    cout<<this->size<<endl;

}

void Array::Input(){
    if (array != nullptr)
        delete [] array;
    cout << "Enter size of new array."<<endl;
    cin >> size;
    array = new unsigned int[size];
    for (int i=0;i<size;i++){
        cin >> array[i];
    }
    cout<<"-----"<<endl;
}

Array Array::Plus(Array &other_array){
    Array temp(this);
    int min_size = min(this->size, other_array.size);
    for (int i=0;i<min_size;i++){
        this->array[i]+=other_array.array[i];
    }
    cout << "Plus"<<endl;
    return temp;
}
Array Array::Minus(Array &other_array){
    Array temp(this);
    int min_size =  min(this->size, other_array.size);
    for (int i=0;i<min_size;i++){
        if   (this->array[i] > other_array.array[i])
            this->array[i]-=other_array.array[i];
        else
            this->array[i]=0;
    }
    cout << "Minus"<<endl;
    return temp;
}
Array Array::Concate(Array &other_array){

    Array temp(this);

    this->size = this->size+other_array.size;
    int  previous_size = this->size-other_array.size;
    for (int i=previous_size;i<size;i++){
            this->array[i]=other_array.array[i-previous_size];
    }
    cout << "Concate"<<endl;
    return temp;
}

void Array::Ascending_sort(){

    for (int i = 0; i < this->size - 1; i++)
        {
            int smallest_index = i;
            for (int j = i + 1; j < size; j++)
            {
                if (this->array[j] < this->array[smallest_index])
                    smallest_index = j;
            }
            swap(this->array[i], this->array[smallest_index]);
        }
    cout<<"Ascending_sort"<<endl;
}
void Array::Descending_sort(){
    for (int i = 0; i < this->size - 1; i++)
        {
            int smallest_index = i;
            for (int j = i + 1; j < size; j++)
            {
                if (this->array[j] > this->array[smallest_index])
                    smallest_index = j;
            }
            swap(this->array[i], this->array[smallest_index]);
        }
        cout<<"Descending_sort"<<endl;
}
