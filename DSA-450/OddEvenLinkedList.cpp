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

ListNode* OddEven(ListNode* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    ListNode* curr = head -> next;
    ListNode* prev = head;
    ListNode* Ehead = curr;

    while(curr != NULL && curr -> next != NULL){

        prev ->next = curr -> next;
        prev = prev -> next;
        curr -> next = prev -> next;
        curr = prev -> next;
    }
    prev -> next =  Ehead;

return head;
}
void print(ListNode* head){
    ListNode* temp = head;
    while( temp != NULL){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
}

int main(){
    ListNode* head = new ListNode(1);
    ListNode* tail = head;
    insertAtTail(tail,3);
    insertAtTail(tail,5);
    insertAtTail(tail,2);
    insertAtTail(tail,4);
    
    print(head);

    OddEven(head);
    cout<<endl;

    print(head);
}