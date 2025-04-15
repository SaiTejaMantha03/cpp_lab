/*Write a program to implement binary search tree using traverse the tree using any traversal
schema */
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
// Node structure for the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
// Binary Search Tree class
class BST {
private:
    Node* root;
    void insert(Node*& node, int value);
    void inorder(Node* node);
    void preorder(Node* node);
    void postorder(Node* node);
    void levelOrder(Node* node);
    void deleteTree(Node* node);
public:
    BST() : root(nullptr) {}
    ~BST() { deleteTree(root); }
    void insert(int value) { insert(root, value); }
    void inorder() { inorder(root); cout << endl; }
    void preorder() { preorder(root); cout << endl; }
    void postorder() { postorder(root); cout << endl; }
    void levelOrder() { levelOrder(root); cout << endl; }
};
// Insert a value into the binary search tree
void BST::insert(Node*& node, int value) {
    if (node == nullptr) {
        node = new Node(value);
    } else if (value < node->data) {
        insert(node->left, value);
    } else {
        insert(node->right, value);
    }
}
// Inorder traversal of the binary search tree
void BST::inorder(Node* node) {
    if (node != nullptr) {
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
}
// Preorder traversal of the binary search tree
void BST::preorder(Node* node) {
    if (node != nullptr) {
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
}
// Postorder traversal of the binary search tree
void BST::postorder(Node* node) {
    if (node != nullptr) {
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
}
// Level order traversal of the binary search tree
void BST::levelOrder(Node* node) {
    if (node == nullptr) return;
    queue<Node*> q;
    q.push(node);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if (current->left != nullptr) q.push(current->left);
        if (current->right != nullptr) q.push(current->right);
    }
}
// Delete the binary search tree
void BST::deleteTree(Node* node) {
    if (node != nullptr) {
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
}
// Main function to demonstrate the binary search tree operations       
int main() {
    BST bst;
    int choice, value;
    do {
        cout << "1. Insert\n2. Inorder Traversal\n3. Preorder Traversal\n4. Postorder Traversal\n5. Level Order Traversal\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                bst.insert(value);
                break;
            case 2:
                cout << "Inorder Traversal: ";
                bst.inorder();
                break;
            case 3:
                cout << "Preorder Traversal: ";
                bst.preorder();
                break;
            case 4:
                cout << "Postorder Traversal: ";
                bst.postorder();
                break;
            case 5:
                cout << "Level Order Traversal: ";
                bst.levelOrder();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
    return 0;
}

