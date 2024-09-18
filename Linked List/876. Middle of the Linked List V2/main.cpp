#include <bits/stdc++.h>
using namespace std;

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
    while (temp != nullptr) {
        cnt++;
        temp = temp->next;
    }
    temp = head;
    cnt /= 2;
    for (int i = 1; i <= cnt; i++) {
        temp = temp->next;
    }
    return temp;
}

int main() {
    // List1
    cout << "Enter number of elements of List1: \n";
    int nList1;
    cin >> nList1;

    // Array to store integer values (optional)
    int arr1[nList1];

    // Array to store pointers to ListNode objects
    ListNode* listNodes1[nList1];

    for (int i = 0; i < nList1; ++i) {
        cout << "Enter " << i + 1 << "val: ";
        int x;
        cin >> x;

        // Store integer value (optional)
        arr1[i] = x;

        // Create and store ListNode pointer
        listNodes1[i] = new ListNode(x);
    }

    // Link list nodes
    for (int i = 0; i < nList1 - 1; ++i) {
        listNodes1[i]->next = listNodes1[i + 1];
    }
    listNodes1[nList1 - 1]->next = nullptr;

    ListNode* head1 = listNodes1[0];

    // List2
    cout << "Enter number of elements of List2: \n";
    int nList2;
    cin >> nList2;

    // Array to store integer values (optional)
    int arr2[nList2];

    // Array to store pointers to ListNode objects
    ListNode* listNodes2[nList2];

    for (int i = 0; i < nList2; ++i) {
        cout << "Enter " << i + 1 << "val: ";
        int x;
        cin >> x;

        // Store integer value (optional)
        arr2[i] = x;

        // Create and store ListNode pointer
        listNodes2[i] = new ListNode(x);
    }

    // Link list nodes
    for (int i = 0; i < nList2 - 1; ++i) {
        listNodes2[i]->next = listNodes2[i + 1];
    }
    listNodes2[nList2 - 1]->next = nullptr;

    ListNode* head2 = listNodes2[0];

    cout << "middle val of list1: " << middleNode(head1)->val << "\n";
    // Print the linked lists

    while (head1->next) {
        cout << head1->val << " ";
        head1 = head1->next;
    }

    cout << head1->val << " ";
    cout << "\n";

    cout << "middle val of list2: " << middleNode(head2)->val << "\n";

    while (head2->next) {
        cout << head2->val << " ";
        head2 = head2->next;
    }
    cout << head2->val << " ";

    // Clean up memory (important!)
    for (int i = 0; i < nList1; ++i) {
        delete listNodes1[i];
    }

    for (int i = 0; i < nList2; ++i) {
        delete listNodes2[i];
    }

    return 0;
}
