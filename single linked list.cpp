#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at the beginning
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at the end
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at any position (1-based indexing)
void insertAtPosition(Node* &head, int value, int position) {
    if (position <= 0) {
        cout << "Invalid Position!" << endl;
        return;
    }

    // Insert at first position
    if (position == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* temp = head;

    // Move to (position-1)th node
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete a node by value
void deleteNode(Node* &head, int value) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    // Delete first node
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;

    while (current->next != NULL && current->next->data != value) {
        current = current->next;
    }

    if (current->next == NULL) {
        cout << "Value not found!" << endl;
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}

// Display the linked list
void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    // Insert at end
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 40);

    cout << "After inserting at end: ";
    display(head);

    // Insert at beginning
    insertAtBeginning(head, 5);

    cout << "After inserting 5 at beginning: ";
    display(head);

    // Insert at position
    insertAtPosition(head, 30, 4);

    cout << "After inserting 30 at position 4: ";
    display(head);

    // Delete node
    deleteNode(head, 20);

    cout << "After deleting 20: ";
    display(head);

    return 0;
}
