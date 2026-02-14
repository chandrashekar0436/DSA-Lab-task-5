#include <stdio.h>
#include <ctype.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int x) {
    stack[++top] = x;
}
int pop() {
    return stack[top--];
}
int main() {
    char postfix[100];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    for (int i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            int val1 = pop();
            int val2 = pop();

            switch (ch) {
                case '+': push(val2 + val1); break;
                case '-': push(val2 - val1); break;
                case '*': push(val2 * val1); break;
                case '/': push(val2 / val1); break;
            }
        }
    }
    printf("Result = %d\n", pop());
    return 0;
}