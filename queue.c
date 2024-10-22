#include <stdio.h>
#include <stdlib.h>

// Define the maximum size of the queue
#define MAX_SIZE 10

// Structure to represent the queue
struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

// Function to initialize the queue
void initialize(struct Queue *queue) {
    queue->front = -1; // Set front to -1 to indicate an empty queue
    queue->rear = -1;  // Set rear to -1 to indicate an empty queue
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue) {
    return queue->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue *queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

// Function to enqueue (add) an element to the queue
void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue overflow! Cannot enqueue element %d.\n", value);
    } else {
        if (isEmpty(queue)) {
            queue->front = 0; // If the queue is empty, set front to 0
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = value;
        printf("Enqueued %d into the queue.\n", value);
    }
}

// Function to dequeue (remove) an element from the queue
int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow! Cannot dequeue from an empty queue.\n");
        return -1; // Return a special value indicating an error
    } else {
        int dequeued = queue->items[queue->front];
        if (queue->front == queue->rear) {
            initialize(queue); // If there was only one element, reset the queue
        } else {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
        printf("Dequeued %d from the queue.\n", dequeued);
        return dequeued;
    }
}

// Function to display the elements of the queue
void display(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("The queue is empty.\n");
    } else {
        printf("Queue elements: ");
        int i = queue->front;
        do {
            printf("%d ", queue->items[i]);
            i = (i + 1) % MAX_SIZE;
        } while (i != (queue->rear + 1) % MAX_SIZE);
        printf("\n");
    }
}

int main() {
    // Create a queue
    struct Queue myQueue;
    initialize(&myQueue);

    // Demonstrate queue operations
    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);
    display(&myQueue);

    int dequeuedValue = dequeue(&myQueue);
    display(&myQueue);

    // Additional operations as needed...

    return 0;
}
