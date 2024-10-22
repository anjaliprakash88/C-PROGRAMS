#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void initialize(struct Stack stack) {
    stack->top = -1;
}

int isEmpty(struct Stackstack) {
    return stack->top == -1;
}

int isFull(struct Stack stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stackstack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }
    stack->arr[++stack->top] = value;
    printf("%d pushed to stack\n", value);
}

int pop(struct Stack stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(struct Stackstack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    printf("Top element: %d\n", peek(&stack));

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    printf("Is the stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");

    return 0;
}