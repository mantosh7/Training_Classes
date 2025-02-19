/*
PROBLEM STATEMENT: Given the head of a singly linked list, reverse the list, and return the 
reversed list.

Example:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/

// Iterative C++ program to reverse a linked list

#include <iostream>
using namespace std;

class ListNode {
  public:
    int data;
    ListNode *next;

    ListNode(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// Given the head of a list, reverse the list and 
// return the head of reversed list
ListNode *reverseList(ListNode *head) {

    // Initialize three pointers: curr, prev and next
    ListNode *curr = head, *prev = nullptr, *next;

    // Traverse all the ListNodes of Linked List
    while (curr != nullptr) {

        // Store next
        next = curr->next;

        // Reverse current ListNode's next pointer
        curr->next = prev;

        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }

    // Return the head of reversed linked list
    return prev;
}

void printList(ListNode *ListNode) {
    while (ListNode != nullptr) {
        cout << " " << ListNode->data;
        ListNode = ListNode->next;
    }
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Given Linked list:";
    printList(head);

    head = reverseList(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}
