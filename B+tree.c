// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// // Define the order of the B+ tree (e.g., maximum children for an internal node)
// #define MAX_CHILDREN 4
// #define MAX_KEYS (MAX_CHILDREN - 1)

// // Node structure
// typedef struct Node {
//     int keys[MAX_KEYS];
//     struct Node *children[MAX_CHILDREN];
//     struct Node *next_leaf; // Pointer to the next leaf node (for range queries)
//     int num_keys;
//     bool is_leaf;
// } Node;

// // Function Prototypes
// Node* createNode(bool isLeaf);
// void insert(int key);
// bool search(int key);
// void delete(int key);
// void traverseAndPrint();

// // Global root pointer
// Node *root = NULL;

// // Helper function to create a new node
// Node* createNode(bool isLeaf) {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     if (newNode == NULL) {
//         perror("Memory allocation failed");
//         exit(1);
//     }
//     newNode->is_leaf = isLeaf;
//     newNode->num_keys = 0;
//     newNode->next_leaf = NULL;
//     for (int i = 0; i < MAX_CHILDREN; i++) {
//         newNode->children[i] = NULL;
//     }
//     return newNode;
// }

// // Function implementations (simplified, full logic for balancing is complex)

// void insert(int key) {
//     // Logic to find the correct leaf node, insert, split if full, and propagate changes up the tree
//     // ...
//     printf("Insert function not fully implemented in this example structure.\n");
// }

// bool search(int key) {
//     // Logic to traverse the tree from root to leaf to find the key
//     // ...
//     printf("Search function not fully implemented in this example structure.\n");
//     return false;
// }

// void delete(int key) {
//     // Logic to find the key in the leaf node, remove it, and handle underflow/merging
//     // ...
//     printf("Delete function not fully implemented in this example structure.\n");
// }

// void traverseAndPrint() {
//     // Logic to print all elements by following the linked list of leaf nodes
//     // ...
//     printf("Traversal function not fully implemented in this example structure.\n");
// }

// int main() {
//     root = createNode(true);
//     // You would call insert here in a real program
//     // insert(10);
//     // insert(20);
//     // ...

//     printf("B+ tree operations outline.\n");

//     return 0;
// }