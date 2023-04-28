#include <iostream>
#include "MyQueue.h"

using namespace std;

int main() {
    MyQueue<3, double> myQueue;
    try {
        cout << "Size: " << myQueue.size() << endl;
        cout << "isEmpty: " << myQueue.isEmpty() << endl;
        cout << endl;

        cout << "Size: " << myQueue.size() << endl;
        cout << "Push" << endl;
        myQueue.push(20.10);
        cout << endl;

        cout << "Size: " << myQueue.size() << endl;
        cout << "Top: " << myQueue.top() << endl;
        cout << endl;

        /*cout << "Size: " << myQueue.size() << endl;
        cout << myQueue.peek() << endl; //Queue is empty
        cout << endl;*/

        cout << "Size: " << myQueue.size() << endl;
        myQueue.push(2.2);
        cout << endl;

        cout << "Size: " << myQueue.size() << endl;
        cout << "isEmpty: " << myQueue.isEmpty() << endl;
        cout << endl;

        cout << "Size: " << myQueue.size() << endl;
        cout << "Top: " << myQueue.top() << endl;
        cout << endl;

        cout << "Size: " << myQueue.size() << endl;
        myQueue.push(2.3);
        myQueue.push(3.2);
        myQueue.push(5.1);
        //myQueue.push(6.0);    //queue overflow
        cout << "Size: " << myQueue.size() << endl;

    } catch (QueueException e){
        cout << e.getMessage();
    }
    return 0;
}
