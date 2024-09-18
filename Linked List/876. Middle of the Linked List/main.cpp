#include <bits/stdc++.h>
using namespace  std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    // Node constructor initializes the node with data and a nullptr link.
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    int cnt = 0;
    ListNode* temp = head;
    while (temp!=nullptr) {
        cnt++;
        temp=temp->next;
    }
    temp=head;
    cnt/=2;
    for (int i = 1; i <= cnt; i++) {
        temp=temp->next;
    }
    return temp;
}

int main() {
    // List1
    ListNode* n1 = new ListNode(1);  // Allocate memory for n1
    ListNode* n2 = new ListNode(2);  // Allocate memory for n2
    ListNode* n3 = new ListNode(3);  // Allocate memory for n3
    ListNode* n4 = new ListNode(4);  // Allocate memory for n4

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;

    ListNode* head1 = n1;  // Assign n1 to head1

    // List2
    ListNode* n5 = new ListNode(3);  // Allocate memory for n5
    ListNode* n6 = new ListNode(6);  // Allocate memory for n6
    ListNode* n7 = new ListNode(7);  // Allocate memory for n7
    ListNode* n8 = new ListNode(2);  // Allocate memory for n8

    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = nullptr;

    ListNode* head2 = n5;  // Assign n5 to head2

    cout << "middle val of list1 : "  << middleNode(head1)->val << "\n";
    // Print the linked lists
    while (head1->next) {
        cout << head1->val << " ";
        head1 = head1->next;
    }
    cout << head1->val << " ";
    cout << "\n";

    cout << "middle val of list2 : "  << middleNode(head2)->val<< "\n";
    while (head2->next) {
        cout << head2->val << " ";
        head2 = head2->next;
    }
    cout << head2->val << " ";

    // Clean up memory (important!)
    delete n1;
    delete n2;
    delete n3;
    delete n4;
    delete n5;
    delete n6;
    delete n7;
    delete n8;

    return 0;
}
