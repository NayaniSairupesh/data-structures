#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int front, rear;
    int arr[MAX_SIZE];
} Queue;

void push(Queue *q, int data) {
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->arr[q->rear] = data;
}

int pop(Queue *q) {
    q->front = (q->front + 1) % MAX_SIZE;
    return q->arr[q->front];
}

int main() {
    Queue q;
    q.front = q.rear = -1;

    push(&q, 1);
    push(&q, 2);
    push(&q, 3);

    printf("Popped: %d\n", pop(&q));
    printf("Popped: %d\n", pop(&q));
    printf("Popped: %d\n", pop(&q));

    return 0;
}
