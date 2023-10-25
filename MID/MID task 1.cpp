#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(NULL) {}
};

void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }
    
    Node* slow = head;
    Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHalf = reverseList(slow->next);

    Node* firstHalf = head;
    while (secondHalf != NULL) {
        if (firstHalf->data != secondHalf->data) {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

Node* createSinglyLinkedListFromArray(int arr[], int n) {
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        insert(head, arr[i]);
    }
    return head;
}

int main() { 
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = createSinglyLinkedListFromArray(arr, n);

    std::cout << "Linked List: ";
    printList(head);

    if (isPalindrome(head)) {
        std::cout << "The linked list is a palindrome.\n";
    } else {
        std::cout << "The linked list is not a palindrome.\n";
    }

    return 0;
}

