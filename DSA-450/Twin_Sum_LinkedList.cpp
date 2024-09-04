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
int length(ListNode* head){
    ListNode* temp = head;
    int l = 0;
    while( temp != NULL){
        l+=1;
        temp = temp -> next;
    }
return l;
}

int pairsum(ListNode* head){
    ListNode* temp = head;
    int maxsum = INT_MIN;
    int n = length(head);
     for(int i = 0; i < (n/2) ; i++){
        int j = i;
        int t1 = 0;
        while(temp -> next != NULL && j > 0){
            temp = temp -> next;
            j--;
        }
            t1 = temp ->val;
        int k = n - 1 -i;
        temp = head;
        int t2 = 0;
        while(temp -> next != NULL && k > 0){
            temp = temp -> next;
            k--;
        }
            t2 = temp -> val;
        maxsum = max( maxsum, t1 + t2 );
        // cout<<maxsum<<" ";
     }
    return maxsum;
}
void print(ListNode* head){
    ListNode* temp = head;
    while( temp != NULL){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
}

int main(){
    ListNode* head = new ListNode(5);
    ListNode* tail = head;
    insertAtTail(tail,4);
    insertAtTail(tail,4);
    insertAtTail(tail,4);
    insertAtTail(tail,4);

    
    // print(head);
    cout<<endl;
    cout<<pairsum(head);
 

    // print(head);
}