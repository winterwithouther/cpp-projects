#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::insertAtHead(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void LinkedList::printList() {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";
}

/*
* function: insertAtTail
* @params: int value
* @return: void
* brief: a node should be inserted at the tail of the list, with the value
* passed as in for the node.data
*/
void LinkedList::insertAtTail(int value) {
    // if the list is empty, set node to head, otherwise traverse
    if (head == nullptr) {
        head = new Node(value);
    }

    Node* temp = head;
    while (temp != nullptr) {
        if (temp->next == nullptr) {
            temp->next = new Node(value);
            break;
        }
        temp = temp->next;
    }
}



