#include <stdio.h>
#include <string.h>

#define SIZE 5

char callStack[SIZE][20];
int top = -1;

void addCall(char number[]) {
    if (top == SIZE - 1) {
        printf("Call History Full\n");
    } else {
        top++;
        strcpy(callStack[top], number);
        printf("Call Added: %s\n", number);
    }
}

void removeLastCall() {
    if (top == -1) {
        printf("No Call History\n");
    } else {
        printf("Removed Call: %s\n", callStack[top]);
        top--;
    }
}

void displayHistory() {
    if (top == -1) {
        printf("Call History Empty\n");
    } else {
        printf("\nCall History (Latest First):\n");
        for (int i = top; i >= 0; i--) {
            printf("%s\n", callStack[i]);
        }
    }
}

int main() {
    addCall("9876543210");
    addCall("9123456780");
    addCall("9988776655");

    displayHistory();
    removeLastCall();
    displayHistory();

    return 0;
}
