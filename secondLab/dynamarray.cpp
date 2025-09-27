#include "dynamarray.h"

Dynamarray::Dynamarray(){
    //default size is 8 
    capacity = 8;
    length = 0;
    data = new ItemType[8];
}

Dynamarray::Dynamarray(int size){
    //using size instead
    capacity = size;
    length = 0;
    data = new ItemType[size];
}

Dynamarray::~Dynamarray(){
    delete[] data;
}

bool Dynamarray::isFull() const{
    return (capacity == length);
}


int Dynamarray::getSize(){
    return length;
}

int Dynamarray::getCapacity(){
    return capacity;
}

void Dynamarray::putItem(const ItemType& item){
    if (!isFull()) {
        //this works because length is 1 indexed but underlyng array is 0 index
        //but then maybe my is full is wrong
        data[length] = item;
        length++;
    }
}
ItemType Dynamarray::operator[](int index){
    return data[index];
}

const ItemType& Dynamarray::operator[](int index) const{
    return data[index];
}

void Dynamarray::shrinkToFit(){
    if (length < capacity) {
        ItemType* newData = new ItemType[length];
        for (int i = 0; i < length; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = length;
    }
}
