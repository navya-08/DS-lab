#include <stdio.h>
#include <stdlib.h>
#define max 100
int top = -1;
int stack[max];
void push(int a);
int pop();
void display();
int main() {
    int arr[100], size;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter values of stack:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        push(arr[i]);
    }
    printf("Stack before popping:\n");
    display();
    for (int i = size - 1; i >= 0; i--) {
        pop();
    }
    printf("Stack after popping:\n");
    display();
    return 0;
}
void push(int a) {
    if (top == max - 1) {
        printf("Stack overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = a;
}
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    top--;
    return stack[top];
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = 0; i <= top; i++) {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}
