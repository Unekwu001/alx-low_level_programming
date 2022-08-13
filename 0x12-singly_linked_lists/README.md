A linked list is a linear data structure that includes a series of connected nodes. Here, each node stores the data and the address of the next node. For example,
You have to start somewhere, so we give the address of the first node a special name called HEAD. Also, the last node in the linked list can be identified because its next portion points to NULL.

Linked lists can be of multiple types: singly, doubly, and circular linked list. In this article, we will focus on the singly linked list. To learn about other types, visit Types of Linked List.
Representation of Linked List
Let's see how each node of the linked list is represented. Each node consists:

A data item
An address of another node
We wrap both the data item and the next node reference in a struct as:

struct node
{
  int data;
  struct node *next;
};
Understanding the structure of a linked list node is the key to having a grasp on it.

Each struct node has a data item and a pointer to another struct node. Let us create a simple Linked List with three items to understand how this works.


