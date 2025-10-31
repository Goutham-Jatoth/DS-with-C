#ifndef DS_H
 #define DS_H
 #include <stdio.h>
 #define MAX 10
 typedef struct {
    int items[MAX];
    int front, rear;
 } Queue;
 void initQueue(Queue *q) {
    q->front = q->rear = -1;
 }
 int isQueueEmpty(Queue *q) {
    return q->front == -1;
 }
 void enqueue(Queue *q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (q->front == -1)
        q->front = 0;
    q->items[++(q->rear)] = value;
 }
 int dequeue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue Underflow!\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front++;
    return value;
 }
 typedef struct {
    int items[MAX];
    int top;
 } Stack;
 void initStack(Stack *s) {
    s->top = -1;
 }
 int isStackEmpty(Stack *s) {
    return s->top == -1;
 }
 void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    s->items[++(s->top)] = value;
 }
 int pop(Stack *s) {
    if (isStackEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->items[(s->top)--];
}
 #endif