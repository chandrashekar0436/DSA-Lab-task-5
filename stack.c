#include <stdio.h>
#define MAX 10   
int stack[MAX];
int top = -1;
int isFull() {
    return top == MAX - 1;
}
int isEmpty() {
    return top == -1;
}
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
    }
}
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    } else {
        return stack[top--];
    }
}
int peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack[top];
    }
}
void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(50);
    push(75);
    push(40);
    display();
    printf("Top element is %d\n", peek());
    printf("%d popped from stack\n", pop());
    display();
    return 0;
}