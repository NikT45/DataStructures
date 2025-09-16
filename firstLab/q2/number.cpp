#include "Number.h"
#include <iostream>

/*
• input() >> done
• output() << done 
• add() +  done
• isEqualTo() == done 
• isNotEqualTo() !=  done
• isGreaterThanorEqualTo() >=  done
• isLessThanorEqualTo() <=  done
• isZero()  done
• increment() ++ done
• decrement() –- done
• multiply() *  done
• divide() /  done
*/ 

Number::Number(){
    digit =0;
}

Number::Number(int num){
    digit = num;
}

void Number::setNum(int num){
    digit = num;
}

int Number::getNum(){
    return (digit);
}

bool Number::isZero(){
    return(digit == 0);
}


Number Number::operator+ (const Number& otherNum){
    digit = digit + otherNum.digit;
    return *this;
}

Number Number::operator- (const Number& otherNum){
    digit = digit - otherNum.digit;
    return *this;
}

Number Number::operator* (const Number& otherNum){
    digit = digit * otherNum.digit;
    return *this;
}

Number Number::operator/ (const Number& otherNum){
    digit = digit / otherNum.digit;
    return *this;
}

bool Number::operator== (const Number& otherNum){
    return(digit == otherNum.digit);
}

bool Number::operator!= (const Number& otherNum){
    return(digit != otherNum.digit);
}

bool Number::operator>= (const Number& otherNum){
    return(digit >= otherNum.digit);
}

bool Number::operator<= (const Number& otherNum){
    return(digit <= otherNum.digit);
}

Number Number::operator++ (){
    digit++;
    return *this;
}

Number Number::operator-- (){
    digit--;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Number& num){
    out << num.digit;
    return out;
}

std::istream& operator>>(std::istream& in, Number& num){
    in >> num.digit;
    return in;
}
