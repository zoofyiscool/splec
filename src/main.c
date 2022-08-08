#include <stdio.h>
#include <string.h>

char op[30];
int num1, num2;
int clrScr();
int max(int num1, int num2);
int min(int num1, int num2);

int main() {
    printf("welcome to my C calculator\n");
    printf("Operation? (max, min, add, sub, div) ");
    //fgets(op, sizeof op, stdin); /* C hurts my brain */
    if (scanf("%s", op) == 1);
    if (strcmp(op, "max") == 0) {
        printf("Which numbers do you want to find the max of?, enter after each number.\n");
        if (scanf("%d", &num1) == 1); /* we have to do this */
        if (scanf("%d", &num2) == 1); /* because GCC will complain that we didn't check the return value of scanf() */
        max(num1, num2);
    }
    else if (strcmp(op, "min") == 0) {
        printf("Which numbers do you want to find the min of?, enter after each number.\n");
        if (scanf("%d", &num1) == 1);
        if (scanf("%d", &num2) == 2);
        min(num1, num2);
    }
    return 0;
}

int clrScr() {
    printf("\e[1;1H\e[2J");
}

int add(int num1, int num2) {
    int res;
    res = num1 + num2;
}

int max(int num1, int num2) {
    int res;
    if (num1 > num2) {
        res = num1;
    }
    else {
        res = num2;
    }
    clrScr();
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    printf("The largest of the two numbers is: %d\n", res);
    return res;
}

int min(int num1, int num2) {
    int res;
    if (num1 < num2) {
        res = num1;
    }
    else {
        res = num2;
    }
    clrScr();
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    printf("The smallest of the two numbers is: %d\n", res);
    return res;
}
