# Doubly Linked List

## What is a Doubly Linked List?

A **doubly linked list** is a data structure composed of nodes, where each node contains:

- A data value.
- A pointer to the next node (forward link).
- A pointer to the previous node (backward link).

Unlike a singly linked list, each node in a doubly linked list has two references, enabling traversal in both directions (forward and backward).

### Diagram:
[Prev] <-> [Data] <-> [Next]

## Advantages
- Fast access to elements in both directions.
- Easier deletion of elements without needing to traverse the list.

## Disadvantages
- Uses more memory (each node stores two pointers).
- More complex memory management (due to two pointers).

---

## How to Use a Doubly Linked List?

### 1. Creating a List
You can create an empty list by initializing the head pointer (`head`) to `NULL`.

### 2. Adding an Element
To add an element to a doubly linked list, create a new node, link it to the previous and next nodes, and adjust the pointers of the adjacent nodes.

### 3. Deleting an Element
To delete an element, you need to reassign the pointers of the neighboring nodes to "unlink" the node being removed.

### 4. Traversing the List
You can traverse the list in two ways:
- **Forward (head to tail)** using the `next` pointer.
- **Backward (tail to head)** using the `prev` pointer.

---

## Example Code in C (Basic Structure)

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function to create a new node
Node* create_node(int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

int main() {
    Node* head = create_node(10);
    // Add nodes, traverse the list, etc.
    return 0;
}
 


# conclusion

Doubly linked lists are powerful, offering flexibility and efficiency for complex data manipulation. However, they require careful memory management. Understanding pointers and node handling is crucial for implementing them.