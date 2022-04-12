#include<iostream>
using namespace std;
            /*Heap is used for Dynamically allocation of Memory
                and it has no fixed Memory umlike Stack*/
int main()
{
    int a=10;  //Stored in Stack

    int *p = new int();  //Allocated in Heap

    *p = 20;

    delete (p);        //Deallocate memory from Heap

    p = new int [4]; 

    delete [] p;        // delete Array

    p=NULL;     //removing pointer

    return 0;   //Here main Function is Terminated
}
