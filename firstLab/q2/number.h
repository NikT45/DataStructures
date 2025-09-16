#include <iostream>

/*

   digit,  done
• input() >> done
• output() << done
• add() + done
• isEqualTo() == done 
• isNotEqualTo() != done 
• isGreaterThanorEqualTo() >= done 
• isLessThanorEqualTo() <= done
• isZero() done
• increment() ++ done 
• decrement() –- done 
• multiply() * done 
• divide() /  done
*/ 


class Number{
    public: 

        Number();

        Number(int num);
 
        bool isZero();

        friend std::ostream& operator<<(std::ostream& out, const Number& num);

        friend std::istream& operator>>(std::istream& in, Number& num);
        
        Number operator+ (const Number& otherNum);
        Number operator- (const Number& otherNum);
        Number operator/ (const Number& otherNum);
        Number operator* (const Number& otherNum);


        bool operator== (const Number& otherNum);
        bool operator!= (const Number& otherNum);
        bool operator>= (const Number& otherNum);
        bool operator<= (const Number& otherNum);

        Number operator++ ();
        Number operator-- ();


        void setNum(int num);
        int getNum();

    private: 
        int digit; 



};
