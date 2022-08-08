#include <stdio.h>
#include <string.h>

char op[30];
float num1, num2, res = 0;
int clrScr();
int ask();
int showRes(char *strOp);
int max(float num1, float num2);
int min(float num1, float num2);

int main() {
    printf("welcome to my C calculator\n");
    printf("Operation? (max, min, add, sub, div, power, sqrt) ");
    //fgets(op, sizeof op, stdin); /* C hurts my brain */
    if (scanf("%s", op) == 1);
    if (strcmp(op, "max") == 0) {
        printf("Which numbers do you want to find the max of?, enter after each number.\n");
        ask();
        max(num1, num2);
    }
    else if (strcmp(op, "min") == 0) {
        printf("Which numbers do you want to find the min of?, enter after each number.\n");
        ask();
        min(num1, num2);
    }
    else if (strcmp(op, "add") == 0) {
        printf("Which numbers do you want to add?, enter after each number.\n");
        ask();
        res = num1 + num2;
        showRes("result");
        return res;
    }
    return 0;
}

int ask() {
    if (scanf("%f", &num1) == 1); /* we have to do this */
    if (scanf("%f", &num2) == 2); /* because GCC will complain that we didn't check the return value of scanf() */
}

int showRes(char *strOp) {
    printf("First number: %.2f\n", num1);
    printf("Second number: %.2f\n", num2);
    printf("The %s of the two numbers is: %.2f\n",strOp, res); 
}

int clrScr() {
    printf("\e[1;1H\e[2J");
}

int max(float num1, float num2) {
    if (num1 > num2) {
        res = num1;
    }
    else {
        res = num2;
    }
    clrScr();
    showRes("largest");
    return res;
}

int min(float num1, float num2) {
    if (num1 < num2) {
        res = num1;
    }
    else {
        res = num2;
    }
    clrScr();
    showRes("smallest");
    return res;
}
