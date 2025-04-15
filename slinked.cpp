//Write a program to perform all operations of a single linked list using forward list in STL
#include <iostream>
#include <forward_list>
using namespace std;
// Function to display the elements of the forward list
void displayList(const forward_list<int>& flist) {
    for (const int& element : flist) {
        cout << element << " ";
    }
    cout << endl;
}
// Function to perform operations on the forward list
void performOperations() {
    forward_list<int> flist; // Create a forward list

    // Insert elements at the front
    flist.push_front(10);
    flist.push_front(20);
    flist.push_front(30);
    cout << "List after inserting elements at the front: ";
    displayList(flist);

    // Insert an element after a specific position (after 20)
    auto it = find(flist.begin(), flist.end(), 20);
    if (it != flist.end()) {
        flist.insert_after(it, 25); // Insert 25 after 20
    }
    cout << "List after inserting 25 after 20: ";
    displayList(flist);

    // Remove an element (remove 20)
    it = find(flist.begin(), flist.end(), 20);
    if (it != flist.end()) {
        flist.remove(20); // Remove 20 from the list
    }
    cout << "List after removing 20: ";
    displayList(flist);

    // Sort the list
    flist.sort();
    cout << "List after sorting: ";
    displayList(flist);

    // Reverse the list
    flist.reverse();
    cout << "List after reversing: ";
    displayList(flist);
}
// Main function
int main() {
    cout << "Performing operations on a single linked list using forward list in STL:" << endl;
    performOperations(); // Call the function to perform operations
    return 0;
}
