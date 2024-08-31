//Vivaan
//23070123151
//Pointer operations - call by reference 
#include<iostream>
using namespace std;

void swap(int *x, int *y)  // use of pointers
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap; 
}

int main()
{
    int a,b;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    swap(&a,&b);  // Passing addresses of a and b
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    return 0;
}