//Vivaan Gupta
// 23070123151
//Pointer operations - call by value
#include<iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp; 

    cout << "Value of a is: " << x << endl;
    cout << "Value of b is: " << y << endl;
}

int main()
{
    int a,b;
    cout<< "Enter the value for a and b: "<<endl;
    cin >> a >> b;
    swap(a, b); 

    return 0;
}