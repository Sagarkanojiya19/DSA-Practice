#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertAtTail(ListNode *&tail, int d)
{
    ListNode *temp = new ListNode(d);
    tail->next = temp;
    tail = tail->next;
}
void  DelMiddle(ListNode* &head){

    ListNode* fast = head -> next;
    ListNode* slow = head;
    ListNode* prev = NULL;

    while(fast != nullptr){
        prev = slow;
        slow = slow -> next;
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
    }
    prev -> next = slow -> next ;
    slow -> next = NULL;

}
void print(ListNode* head){
    ListNode* temp = head;
    while( temp != NULL){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
}

int main(){
    ListNode* head = new ListNode(10);
    ListNode* tail = head;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    
    print(head);

    DelMiddle(head);
    cout<<endl;

    print(head);
}