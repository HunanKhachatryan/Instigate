#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    Array arr = Array(3);
    arr.insert(0,1);
    arr.insert(1,2);
    arr.append(4);
    cout<<arr[2]<<endl;
    arr.append(5);
    cout<<arr[3]<<endl;
    cout<<arr.pop()<<endl;
    cout<<arr.isEmpty()<<endl;
    return 0;
}

