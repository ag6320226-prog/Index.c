#include <stdio.h>

#define V 4 // Number of vertices

// Function to initialize the graph
void init(int adj[][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            adj[i][j] = 0; // No edge initially
        }
    }
}

// Function to add an edge
void addEdge(int adj[][V], int u, int v) {
    adj[u][v] = 1; // Edge from u to v
    adj[v][u] = 1; // Edge from v to u (for undirected graph)
}

// Function to print the graph
void printGraph(int adj[][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\\n");
    }
}

int main() {
    int adj[V][V];
    init(adj);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);

    printGraph(adj);

    return 0;
}