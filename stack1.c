#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = 0; // Initialize top to 0
void push() {
    int val;
    if (top == MAX) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &val);
        stack[top] = val;
        top++;
        printf("Pushed Element:%d",val);
    }
}
void pop() {
    if (top == 0) {
        printf("Stack Underflow\n");
    } else {
        top--;
        printf("Popped value: %d\n", stack[top]);
    }
}
void traverse() {
    if (top == 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        for (int i = 0; i < top; i++) {
            printf("%d ", stack[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n------------------------------------------------------------------------------");
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n------------------------------------------------------------------------------\n");
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 4:
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    printf(“Shipra Mishra \nIT-A\Lateral”);
    return 0;
}
