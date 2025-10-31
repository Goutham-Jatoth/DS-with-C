#include <stdio.h>
 #include "ds.h"
 void BFS(int graph[MAX][MAX], int vertices, int startVertex) {
    int visited[MAX] = {0};
    Queue q;
    initQueue(&q);
    visited[startVertex] = 1;
    enqueue(&q, startVertex);
    printf("\nBFS Traversal: ");
    while (!isQueueEmpty(&q)) {
        int currentVertex = dequeue(&q);
        printf("%d ", currentVertex);
        for (int i = 0; i < vertices; i++) {
            if (graph[currentVertex][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(&q, i);
            }
        }
    }
    printf("\n");
 }
 void DFS(int graph[MAX][MAX], int vertices, int startVertex) {
    int visited[MAX] = {0};
    Stack s;
    initStack(&s);
    push(&s, startVertex);
    printf("\nDFS Traversal: ");
    while (!isStackEmpty(&s)) {
        int currentVertex = pop(&s);
        if (!visited[currentVertex]) {
            printf("%d ", currentVertex);
            visited[currentVertex] = 1;
        }
        for (int i = vertices - 1; i >= 0; i--) {
            if (graph[currentVertex][i] && !visited[i]) {
                push(&s, i);
            }
        }
    }
    printf("\n");
 }
 int main() {
    int vertices = 5;
    int graph[MAX][MAX] = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0}
    };
    int startVertex = 0;
    printf("Graph (Adjacency Matrix):\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    BFS(graph, vertices, startVertex);
    DFS(graph, vertices, startVertex);
    return 0;
 }