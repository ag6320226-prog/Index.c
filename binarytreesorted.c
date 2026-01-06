#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure for a tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// 2. Function to insert a value into the BST
struct Node* insert(struct Node* node, int value) {
    // If the tree is empty, return a new node
    if (node == NULL) {
        return createNode(value);
    }

    // Otherwise, recurse down the tree
    if (value < node->data) {
        node->left = insert(node->left, value);
    } else if (value > node->data) {
        node->right = insert(node->right, value);
    }
    // Note: This implementation assumes no duplicate values.

    return node;
}

// 3. Function to perform in-order traversal and print elements (sorted order)
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        // Traverse left subtree
        inorderTraversal(root->left);

        // Visit the root node
        printf("%d ", root->data);

        // Traverse right subtree
        inorderTraversal(root->right);
    }
}

// Function to free the memory allocated for the tree
void deleteTree(struct Node* node) {
    if (node != NULL) {
        deleteTree(node->left);
        deleteTree(node->right);
        free(node);
    }
}

// Main function to demonstrate the tree sort
int main() {
    int arr[] = {50, 30, 20, 40, 70, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Node* root = NULL;

    // Build the Binary Search Tree
    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    printf("Original array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform in-order traversal to get sorted elements
    printf("Sorted elements (using Tree Sort): ");
    inorderTraversal(root);
    printf("\n");

    // Clean up memory
    deleteTree(root);

    return 0;
}