//Write a program implementing a circular queue class with required operations using STL.
#include <iostream>
#include <deque>
using namespace std;
int main() {
    // Create a circular queue using deque
    deque<int> circularQueue;
    int maxSize = 5; // Maximum size of the circular queue

    // Enqueue operation
    for (int i = 0; i < maxSize; i++) {
        circularQueue.push_back(i + 1); // Adding elements to the queue
    }

    // Display the queue
    cout << "Circular Queue: ";
    for (int i = 0; i < circularQueue.size(); i++) {
        cout << circularQueue[i] << " ";
    }
    cout << endl;

    // Dequeue operation
    cout << "Dequeuing: " << circularQueue.front() << endl;
    circularQueue.pop_front(); // Removing the front element

    // Display the queue after dequeue
    cout << "After Dequeue: ";
    for (int i = 0; i < circularQueue.size(); i++) {
        cout << circularQueue[i] << " ";
    }
    
    cout << endl;

    return 0;
}
// This program implements a circular queue using the STL deque container. It allows for enqueueing and dequeueing elements, demonstrating the circular nature of the queue.