#include<iostream>

using namespace std;
class Node{
    public:
    int value;
    Node* next = nullptr; //Pointing to next node
    Node* prev = nullptr; //Pointing to previous node
    Node(int val) : value(val) {} // Constructor to initialize node with a value
};
void printListFor(Node* head){
    Node* current = head; // Start from the head of the list
    while(current != nullptr){
        cout << current->value << "--->"; // Print the value of the current node
        current = current->next; // Move to the next node
    }
    cout << "nullptr" << endl; // Indicate the end of the list
}
void printListBack(Node* tail){
    Node* current = tail; // Start from the tail of the list
    while(current != nullptr){
        cout << current->value << "--->"; // Print the value of the current node in reverse order
        current = current->prev; // Move to the previous node
    }
    cout << "nullptr" << endl; // Indicate the end of the list
}
void insertNode(Node *&head, Node *&tail, Node *priorNode, Node *newNode){

}
int main(){
    Node A(8), B(5), C(3), D(6);
    A.next = &B; B.prev = &A; // Linking A to B
    B.next = &C; C.prev = &B; // Linking B to C
    C.next = &D; D.prev = &C; // Linking C to D
    D.next = nullptr; // D is the last node, so it points to nullptr
    A.prev = nullptr; // A is the first node, so it points to nullptr
    Node* head = &A; // Head points to the first node
   printListFor(head); // Print the list from head to tail
    Node* tail = &D; // Tail points to the last node
    printListBack(tail); // Print the list from tail to head
    int n;
    cout << "Enter a number to insert: ";
    cin >> n; // Read a number from user input
    Node* newNode = new Node(n); // Create a new node with value
    
}