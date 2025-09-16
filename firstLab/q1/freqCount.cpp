#include <iostream>
#include <cstdlib> 
#include <unordered_map>

void printArray(char& array, int size){
    for (int i = 0; i < sizeof(array); i++){
        for (int col = 0; col < size; col++){

            std::cout << i << ' ' << col ;
        }


    }
}

int main (){

    char mainArr [3][4];
    
    //key is the char and value is freq
    std::unordered_map<char,int> hashmap;


    //filling array with random lowercase chars 
    srand(2);// setting seed? idk if this is needed or not 
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            //26 letter in alphabet 
            int delta = rand() % 26;
            mainArr[row][col] = 'a' + delta;
            std::cout << mainArr[row][col] << std::endl;
 
        } 
    }

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            char c  = mainArr[row][col];
            hashmap[c] += 1;
 
        } 
    }

    for (int i = 0; i < hashmap.size(); i++){
        std::cout << hashmap[i];
    }


}

