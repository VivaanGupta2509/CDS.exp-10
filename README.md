# EXPERIMENT-10

## Aim -
To study and implement Pointer Operations (Call by value and Call by reference)

## Apparatus -
VS code

## Theory -

## Comparison Table between Call By Value and Call By Refernce   

| Feature           | Call By Value                                           | Call By Refernce                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| *Definition*    | A function receives a copy of the argument's value, not the original data.<br> Changes made within the function affect only the copy and do not alter the original data. | A function receives a reference (or address) to the original argument, allowing it to modify the actual data.<br> Changes made within the function directly affect the original variable. |
| *Data Passed*          | Copy of the argument's value.         | Address (pointer) to the data. |
| *Data Size Efficiencys*        | Less efficient for large data.                          | More efficient for large data. |
| *Safety*    | Safer, as original data remains unchanged.  |Riskier, as original data can be altered.|

## Call By Value -
when a function is called, a copy of the actual argument's value is passed to the function.<br> <br>The function works with this copy, rather than the original data.<br><br> Changes made to the parameter within the function do not affect the original argument outside the function.

### Advantages
*Safety:* Protects the original data from unintended changes.<br>
*Simplicity:* Easier to understand and debug, as the function operates on a copy.

### Disadvantages
*Overhead:* Copying large data structures can be inefficient in terms of both time and memory.<br>
*Limited Modification:* Functions cannot alter the original argument, which may be limiting for certain operations.

## Call By Refernce -
A function receives a reference (or address) to the actual argument rather than a copy of its value.<br><br> This means that the function can directly access and modify the original data stored at that address.<br><br> This method is commonly used in languages like C++.

### Advantages
*Performance:* Efficient for large or complex data types since it avoids the cost of copying data.<br>
*Direct Modifications:* Allows functions to change the argument directly, which is useful for operations like sorting, updating, or modifying objects.

### Disadvantages
*Side Effects:* The original data can be altered unexpectedly, which can lead to bugs or unintended behavior if not managed carefully.<br>
*Debugging Complexity:* Tracking changes to data through references can be more challenging, as changes affect the original data and not just the function's local copy.

## CODE - 
### A-
```
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
```
### B- 
```
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
```


