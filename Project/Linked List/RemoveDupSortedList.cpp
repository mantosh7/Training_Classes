/*
PROBELM STATEMENT: Given the head of a sorted linked list, delete all duplicates such 
that each element appears only once. Return the linked list sorted as well.

Example:
Input: head = [1,1,2]
Output: [1,2]
*/

#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
      int val;
      ListNode* next;
  
      ListNode(int key) {
        val = key;
        next = NULL;
      }
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp = head;
    if(head==NULL) return NULL;
    while(temp->next!=NULL)
    {
        if(temp->next->val==temp->val)
        {
            temp->next = temp->next->next;
        }
        else temp = temp->next;
    }
    return head;
}

void printList(ListNode *node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
  
    // Create a sorted linked list
    // 11->11->11->13->13->20
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);

    cout << "Linked list before duplicate removal:" << endl;
    printList(head);

    head = deleteDuplicates(head);

    cout << "Linked list after duplicate removal:" << endl;
    printList(head);

    return 0;
}
