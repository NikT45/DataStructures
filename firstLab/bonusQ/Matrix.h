#include <iostream>

template <typename Type>

class Matrix {
    public:
        Matrix(int row, int col){
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    data[i][j] = Type{};
                }
            }   
        }


        Matrix(const Matrix<Type>& other){
            for (int i = 0; other.getRows(); i++){
                for (int j = 0; other.getCols(); j++){
                    data[i][j] = other.data[i][j];
                }
            }
        }
        void fillMatrix(){
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    std::cout << "Element [" << i << "]   [" << j << "]: " << std::endl;
                    std::cin >> data[i][j];
                }
            }
        }


        void printMatrix(){
            for (int i = 0; i < rows; i++){
                for (int j = 0; j < cols; j++){
                    std::cout << i << ' ' << j << ' '<<  data[i][j] << std::endl;
                }
            }
        }

        Matrix<Type> operator+(Matrix<Type>& other){
            //not really sure what to do if user tries to add two matrices of diff size
            //idk the syntax of throwing an error so i will just cout one
            if (other.rows != rows || other.cols != cols){
                std::cout << "Invalid, matrices are of different size" << std::endl;
            }else{
                //result matrix 
                Matrix<Type> result(rows, cols); 
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        result.data[i][j] = other.data[i][j] + data[i][j];
                    }
                }    
            }
            
        }

        Matrix<Type>& operator=(const Matrix<Type>& other){
            
            for (int i = 0; i < rows; i++) {
                delete[] data[i]; 
            }    

            delete[] data;

            rows = other.rows; 
            cols = other.cols;
            for (int i = 0; i < rows; i++) {
                data[i] = new Type[cols]; 
                for (int j = 0; j < cols; j++){
                    data[i][j] = other.data[i][j];
                }
            }
   
        }

        int getRows(){
            return rows;
        }

        int getCols(){
            return cols; 
        }

    private:

        Type** data;
        
        int rows;

        int cols;

};

