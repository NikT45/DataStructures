#ifndef DYNAMARRAY_H
#define DYNAMARRAY_H

#include "ItemType.h"

class Dynamarray {
    public: 
        Dynamarray(); 

        Dynamarray(int size); 

        ~Dynamarray();

        bool isFull() const;

        int getSize();
        
        int getCapacity();

        void putItem(const ItemType& item);

        ItemType operator[](int index);
        const ItemType& operator[](int index) const;

        void shrinkToFit();

    private:
        ItemType* data = nullptr; 
        int capacity = 0;
        int length = 0; 
        
};
#endif
