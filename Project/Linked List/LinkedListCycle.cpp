/*
PROBLEM STATEMENT: Given head, the head of a linked list, determine if the linked list has 
a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again 
by continuously following the next pointer. Internally, pos is used to denote the index of the 
node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
Return true if there is a cycle in the linked list. Otherwise, return false.

Example:
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node 
(0-indexed).
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

bool hasCycle(ListNode *head) {
    ListNode* temp = head;
    if(temp==NULL || temp->next==NULL) return false;
    unordered_map<ListNode*,int>mp;

    while(temp!=NULL)
    {
        if(mp.find(temp) != mp.end()) return true;
        else
        {
            mp[temp] = 1;
            temp = temp->next;
        }
    }

    return false;
    
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 3-> 4
    ListNode* head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(4);
  
    head->next->next->next = head->next;

    if (hasCycle(head))
        cout << "true";
    else
        cout << "false";

    return 0;
}


