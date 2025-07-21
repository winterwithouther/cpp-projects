#include "linkedlist.h"

int main() {
    LinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);

    list.printList(); // output: 30 -> 20 -> 10 -> NULL

    return 0;
}