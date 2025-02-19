/*
PROBLEM STATEMENT: You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the 
ListNodes of the first two lists.
Return the head of the merged linked list.

Example:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;

    if(temp1==NULL) return list2;
    if(temp2==NULL) return list1;

    ListNode* head = NULL;
    ListNode* temp = head;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->val <= temp2->val)
        {
            ListNode* newNode = new ListNode(temp1->val);
            if(head==NULL)
            {
                head=newNode;
                temp = head;
            }
            else{
              temp->next = newNode;
              temp = newNode;
            }
            temp1 = temp1->next; 
        }

        else if(temp2->val < temp1->val)
        {
            ListNode* newNode = new ListNode(temp2->val);
            if(head==NULL)
            {
                head=newNode;
                temp = head;
            }
            else 
            {
                temp->next = newNode;
                temp = newNode;
            }
            temp2 = temp2->next;
        }       
    }

    while(temp1!=NULL)
    {
        ListNode* newNode = new ListNode(temp1->val);
        if(head==NULL)
        {
            head=newNode;
            temp = head;
        }
        else 
        {
            temp->next = newNode;
            temp = newNode;
        }
        temp1 = temp1->next; 
    }

    while(temp2!=NULL)
    {
        ListNode* newNode = new ListNode(temp2->val);
        if(head==NULL)
        {
            head=newNode;
            temp = head;
        }
        else 
        {
            temp->next = newNode;
            temp = newNode;
        }
        temp2 = temp2->next; 
    }
   return head; 
}

int main() {
  
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* result = mergeTwoLists(list1, list2);
    
    ListNode* temp = result;
    while (temp != NULL) {
        printf("%d  ", temp->val);
        temp = temp->next;
    }
    return 0;
}
