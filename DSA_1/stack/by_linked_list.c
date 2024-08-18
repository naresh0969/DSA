// stacks using linked list.
  
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Define a structure for the stack
struct Stack {
    struct Node* top;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize a stack
void initializeStack(struct Stack* stack) {
    stack->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}

// Function to push an element onto the stack
void push(struct Stack* stack, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1;
    } else {
        struct Node* temp = stack->top;
        int data = temp->data;
        stack->top = temp->next;
        free(temp);
        return data;
    }
}

// Function to get the top element of the stack without popping it
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1;
    } else {
        return stack->top->data;
    }
}

// Function to display the elements of the stack
void display(struct Stack* stack) {
    struct Node* current = stack->top;
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        while (current != NULL) {
            printf("%d\n", current->data);
            current = current->next;
        }
    }
}

// Main function for testing the stack operations
int main() {
    struct Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack));

    display(&stack);

    printf("Popped element: %d\n", pop(&stack));

    display(&stack);

    return 0;
}
