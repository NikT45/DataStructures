struct NodeType; 

class UnsortedType{

    public: 
        UnsortedType(); 

        ~UnsortedType();

        void MakeEmpty();

        int GetLength() const;

        void putItem(int item);

        void deleteItem(int item);

        void printLIst(NodeType* head)
    
        bool searchItem(int item);



};
