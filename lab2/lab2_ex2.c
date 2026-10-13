#include <stdio.h>
int add(int total ,int x) { return total = total + x; }


void bad_swap(int *a, int *b) {
int tmp = *a;
*a = *b;
*b = tmp;
}
float average(const int t[], int n){
    float sum = 0 ;
    for(int i = 0; i<n ; i++)
    {
        sum = sum +t[i];
    }
    sum = sum / n ;
    return sum;
}

int max2( int a , int b){
    if(a>b )return a; else return b;
}

int main(void) {
int n=5;
int total = 100;                    
// global
// local, same name as the global
int x = 5, y = 10;
int t[] = {10, 20, 30, 40, 50};
total = add(total, 5);
total = add(total, 5);

printf("&x = %p, &y = %p\n", (void*)&x, (void*)&y);

printf("%d %d %d\n", total, x, y);
printf("The max is: %d\n", max2(x, y));
bad_swap(&x, &y);

printf("%d %d\n",x, y);

printf("&x = %p, &y = %p\n", (void*)&x, (void*)&y);
float avg = average(t, n);
printf("The average is: %.2f\n", avg);
return 0;
}