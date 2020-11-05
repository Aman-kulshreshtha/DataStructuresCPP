#include <iostream>



class Array {

    private :
        int *A;
        int size;
        int length;
    public:

        Array()
        {
            A = new int[20];             // just a random default size
            size = 20;
            length = 0;
        }

        Array(int size)
        {
            this->size = size ;
            A = new int[size]; 
            length = 0 ;


        }

        ~Array()
        {

            delete A;
       
        }

        void set(int data,int position);
        int get(int index);
       void display();








};




int main()
{

    return 0;
}