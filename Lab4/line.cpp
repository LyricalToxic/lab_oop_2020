#include "line.h"
using namespace std;
Line::Line()
{
    line = new char[1];
    line[0]=0;
}
Line::Line(int _size)
{
    line = new char[_size];
    line[0]=0;
}
Line::~Line(){
    delete[] line;
}

char* Line::operator=(char* line){
    this->line=line;
    return  this->line;
}
Line Line::operator=(Line line){
    int _size = line.getLine()[0];
    delete[] this->line;
    this->line = new char[_size];
    for(int i=0; i<_size+1; i++){
        this->line[i]=line.getLine()[i];
    }
    this->line[0]=_size;
    return  line;
}
Line operator+(Line lline, Line rline){
    int _size = lline.getLine()[0] + rline.getLine()[0];
    Line _line(_size);
    for(int i=1; i<lline.getLine()[0]+1; i++){
        _line.getLine()[i]=lline.getLine()[i];
    }
    for(int i=lline.getLine()[0]+1; i<lline.getLine()[0]+rline.getLine()[0]+1; i++){
        _line.getLine()[i]=rline.getLine()[i-lline.getLine()[0]];
    }
    _line.getLine()[0] = _size;
    return  _line;
}
bool operator<=(Line lline, Line rline){

    for(int i=1; i<lline.getLine()[0]+1; i++){
        if(!(lline.getLine()[i]<=rline.getLine()[i]))
            return false;

    }
    if (lline.getLine()[0]<=rline.getLine()[0]){
        return true;
    }   else{
        return false;
    }
}
bool operator>=(Line lline, Line rline){

    for(int i=1; i<lline.getLine()[0]+1; i++){
        if(!(lline.getLine()[i]>=rline.getLine()[i]))
            return false;
    }
    if (lline.getLine()[0]>=rline.getLine()[0]){
        return true;
    }   else{
        return false;
    }
}
bool operator!=(Line lline, Line rline){

    if (lline.getLine()[0]!=rline.getLine()[0]){
        return true;
    }   else{
        return false;
    }
    for(int i=1; i<lline.getLine()[0]+1; i++){
        if(!(lline.getLine()[i]!=rline.getLine()[i]))
            return false;
    }

}

bool operator==(Line lline, Line rline){

    if (lline.getLine()[0]>=rline.getLine()[0]){
        return true;
    }   else{
        return false;
    }
    for(int i=1; i<lline.getLine()[0]+1; i++){
        if(!(lline.getLine()[i]==rline.getLine()[i]))
            return false;
    }

}
char* Line::getLine(){
    return this->line;
}
