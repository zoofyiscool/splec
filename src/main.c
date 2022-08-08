#include <stdio.h> // needed for printf, etc.
#include <string.h> // needed for strcmp
#include <math.h> // needed for sqrt & pow

char op[30];
float num1, num2, res = 0;
int clrScr(); /* declares all functions */
int ask();    /* so we can use them later on */
int showRes(char *strOp);
int max(float num1, float num2);
int min(float num1, float num2);

int main() {
    printf("Welcome to Splec\n");
    printf("Operation? (max, min, add, sub, div, power, sqrt) ");
    //fgets(op, sizeof op, stdin); /* C hurts my brain */
    if (scanf("%s", op) == 1);
    if (strcmp(op, "max") == 0) {
        printf("Which numbers do you want to find the max of?, enter after each number.\n");
        ask(); // calls the ask function
        max(num1, num2); // calls the max function and passes num1, num2 to it.
    }
    else if (strcmp(op, "min") == 0) {
        printf("Which numbers do you want to find the min of?, enter after each number.\n");
        ask();
        min(num1, num2);
    }
    else if (strcmp(op, "add") == 0) {
        printf("Which numbers do you want to add?, enter after each number.\n");
        ask();
        res = num1 + num2; // the result is num1 and num2 added
        clrScr(); // clears the users screen
        showRes("sum"); // shows the result, passing the sum parameter prints "sum"
        return res;
    }
    else if (strcmp(op, "sub") == 0) {
        printf("Which numbers do you want to subtract?, enter after each number.\n");
        ask();
        res = num1 - num2;
        clrScr();
        showRes("difference");
        return res;
    }
    else if (strcmp(op, "div") == 0) {
        printf("Which numbers do you want to divide?, enter after each number.\n");
        ask();
        res = num1 / num2;
        clrScr();
        showRes("quotient");
        return res;
    }
    else if (strcmp(op, "power") == 0) {
        printf("Which number do you want to find out the power of?, enter after each number.\n");
        ask();
        res = pow(num1, num2);
        clrScr();
        showRes("exponentiation");
        return res;
    }
    else if (strcmp(op, "sqrt") == 0) {
        printf("Which number do you want to find out the square root of?\n");
        if(scanf("%f", &num1) == 1);
        res = sqrt(num1);
        clrScr();
        showRes("square root");
        return res;
    }
    else {
        printf("Not a valid operator!\n");
        main();
    }
    return 0;
}

int ask() {
    if (scanf("%f", &num1) == 1); /* we have to do this */
    if (scanf("%f", &num2) == 2); /* because GCC will complain that we didn't check the return value of scanf() */
}

int showRes(char *strOp) {
    printf("First number: %.2f\n", num1); // %.2f rounds the number to the 2 nearest decimals
    printf("Second number: %.2f\n", num2);
    printf("The %s of the (two) number(s) is: %.2f\n",strOp, res); // %s is the parameter we pass when we call the function
}

int clrScr() {
    printf("\e[1;1H\e[2J"); // special
}

int max(float num1, float num2) {
    if (num1 > num2) { // basic math
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
