#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class LinkedList {
    private:
        Node* head;

    public:
        LinkedList();
        void insertAtHead(int value);
        void printList();
        void insertAtTail(int value);
};

#endif