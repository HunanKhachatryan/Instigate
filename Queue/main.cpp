/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    
    cout<<"Hello World"<<endl;
    Queue queue = Queue(5);

    cout<<queue.isEmpty()<<endl;
    queue.push(1);
    cout<<queue.isEmpty()<<endl;
    queue.push(2);
    queue.empty();

    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.pop();
    
    cout<<queue.getFront();
    cout<<queue.getRear();
    
    return 0;
}
