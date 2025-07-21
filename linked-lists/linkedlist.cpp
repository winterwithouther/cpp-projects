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


