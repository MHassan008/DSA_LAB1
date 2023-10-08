#include <iostream>

// Define the Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(0) {} // Use 0 instead of nullptr or NULL
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(0) {} // Use 0 instead of nullptr or NULL

    // Function to add a new node at the end of the linked list
    void addNode(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to print the linked list along with addresses
    void printListWithAddresses() {
        Node* current = head;
        while (current) {
            std::cout << "Node address: " << current << " | Data: " << current->data << " | Next Node address: " << current->next << std::endl;
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create a linked list and add elements
    LinkedList myList;
    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(20);
    myList.addNode(30);

    // Print the linked list with addresses
    myList.printListWithAddresses();

    return 0;
}

