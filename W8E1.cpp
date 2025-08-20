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
    if (priorNode == nullptr) { // If priorNode is null, insert at the head
        newNode->next = head; // New node points to the current head
        if (head != nullptr) {
            head->prev = newNode; // Current head's previous points to new node
        }
        head = newNode; // Update head to new node
        if (tail == nullptr) { // If tail is also null, update it to new node
            tail = newNode;
        }
    } else { // Insert after the priorNode
        newNode->next = priorNode->next; // New node points to the next of priorNode
        newNode->prev = priorNode; // New node's previous points to priorNode
        priorNode->next = newNode; // Prior node's next points to new node
        if (newNode->next != nullptr) { // If there is a next node, update its previous pointer
            newNode->next->prev = newNode;
        } else { // If no next node, update tail to new node
            tail = newNode;
        }
    }
}
void delNode(Node *&head, Node *&tail, Node *delNote){
    if (delNote == nullptr) return; // If the node to delete is null, do nothing
    if (delNote->prev != nullptr) { // If there is a previous node
        delNote->prev->next = delNote->next; // Update previous node's next pointer
    } else { // If no previous node, update head
        head = delNote->next;
    }
    if (delNote->next != nullptr) { // If there is a next node
        delNote->next->prev = delNote->prev; // Update next node's previous pointer
    } else { // If no next node, update tail
        tail = delNote->prev;
    }
    delete delNote; // Free the memory of the deleted node
}
int main(){
    Node A(8), B(5), C(3), D(6);
    A.next = &B; B.prev = &A; // Linking A to B
    B.next = &C; C.prev = &B; // Linking B to C
    C.next = &D; D.prev = &C; // Linking C to D
    D.next = nullptr; // D is the last node, so it points to nullptr
    A.prev = nullptr; // A is the first node, so it points to nullptr
    Node* head = &A; // Head points to the first node
    Node* tail = &D; // Tail points to the last node
    
    /* 
    int n;
    cout << "Enter a number to insert: ";
    cin >> n; // Read a number from user input
    */
    Node* newNode = new Node(100); // Create a new node with value
    insertNode(head, tail,  nullptr, newNode); 
    insertNode(head, tail, &C, new Node(200)); // Insert a new node with value 200 after C
    //delNode(head, tail, &B);
   
    printListFor(head); // Print the list from head to tail
    printListBack(tail); // Print the list from tail to head
    
    
    
}