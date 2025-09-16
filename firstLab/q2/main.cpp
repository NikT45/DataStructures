#include "number.h" 
#include <iostream>
int main(){
    Number num(0); 
    //prints 1 because true
    std::cout << num.isZero()<< std::endl;

    Number num2(2);
    num + num2;
    //should be 2 
    std::cout << num.getNum() << std::endl; 


    num2.setNum(10); 
    num - num2;
    //should be -8? 
    std::cout << num.getNum() << std::endl;

    num * num2;
    //should be -80
    std::cout << num.getNum() << std::endl;

    num / num2;
    //back to -8
    std::cout << num.getNum() << std::endl;

   //comparison tests 
    std::cout << "does " << num << " == " << num2 << ": " <<  (num == num2 ) << std::endl; 
    std::cout << "does " << num << " != " << num2 << ": " <<  (num != num2 ) << std::endl; 
    std::cout << "does " << num << " <= " << num2 << ": " <<  (num <= num2 ) << std::endl; 
    std::cout << "does " << num << " >= " << num2 << ": " <<  (num >= num2 ) << std::endl; 

    //increment decrement 
    std::cout << num << " increment to: " << ++num << std::endl;
    std::cout << num << " decrement to: " << --num << std::endl;

}
