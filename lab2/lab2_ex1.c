/* Lab 2 - Exercise 1: State and control flow */
#include <stdio.h>

/* Part 1: the original program (sum of even numbers <= n) with a trace */
static void original_program(void) {
    int n = 5, sum = 0, i = 1;
    printf("--- Q1: original program (with trace) ---\n");
    printf("%-10s %-14s %-12s %-10s %-8s\n",
           "Iteration", "i when tested", "i%2==0 ?", "sum after", "i after");
    int it = 1;
    while (i <= n) {
        int tested = i;
        int even = (i % 2 == 0);
        if (i % 2 == 0)
            sum = sum + i;
        i = i + 1;
        printf("%-10d %-14d %-12s %-10d %-8d\n",
               it++, tested, even ? "true" : "false", sum, i);
    }
    printf("sum=%d i=%d\n\n", sum, i);
}

/* Part 2: i = i + 1 moved to the beginning of the loop body */
static void modified_program(void) {
    int n = 5, sum = 0, i = 1;
    printf("--- Q2: i = i + 1 moved to the start of the body ---\n");
    while (i <= n) {
        i = i + 1;
        if (i % 2 == 0)
            sum = sum + i;
    }
    printf("sum=%d i=%d\n\n", sum, i);
}

/* Q5 (a): grade -> mention (selection) */
static void grade_mention(void) {
    float grade;
    printf("--- Q5a: mention ---\n");
    printf("Enter a grade (0 to 20): ");
    if (scanf("%f", &grade) != 1) {
        printf("Error: invalid input.\n\n");
        return;
    }
    if (grade < 0 || grade > 20)
        printf("Error: the grade must be between 0 and 20.\n");
    else if (grade >= 16)
        printf("Very good\n");
    else if (grade >= 14)
        printf("Good\n");
    else if (grade >= 10)
        printf("Pass\n");
    else
        printf("Fail\n");
    printf("\n");
}

/* Q5 (b): n! with i and result displayed at each iteration (iteration) */
static void factorial(void) {
    int n;
    unsigned long long result = 1ULL;
    printf("--- Q5b: factorial ---\n");
    printf("Enter n (0 to 20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Error: n must be an integer between 0 and 20.\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        result = result * i;
        printf("i = %d, result = %llu\n", i, result);
    }
    printf("%d! = %llu\n", n, result);
}

int main(void) {
    original_program();
    modified_program();
    grade_mention();
    factorial();
    return 0;
}
