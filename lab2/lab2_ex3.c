#include <stdio.h>
#define N 5
 
float average(const int g[], int n)
{
    float avg =0 ;
    for ( int i =0; i<n ; i++){
        avg =g[i] + avg;
    }
    avg = avg/n;

return avg ;
}
int   maximum(const int g[], int n){
        float max =0 ;
        max = g[0];
    for ( int i =0; i<n ; i++){
        if (max <g[i]){max = g[i];}
    }
    return max;
}     
int  minimum(const int g[], int n){
     float min =0 ;
        min = g[0];
    for ( int i =0; i<n ; i++){
        if (min >g[i]){min = g[i];}
    }
    return min;
} 

int   count_passed(const int g[], int n)
{ int ctr = 0;
    for ( int i =0; i<n ; i++){
        if (g[i]>=10 ){
            ctr= ctr + 1 ; 
        }
    }
    return ctr ;
}  // TODO
void  print_report(const int g[], int n){

    printf("average is %f\n" , average(g, n));
    printf("maximum is %d\n" , maximum (g, n));
    printf("minimum is %d\n" , minimum( g , n));
    printf("number of passed grades is %d\n" , count_passed(g, n));

} 
void  curve(int g[], int n, int bonus){
    for ( int i =0; i<n ; i++){
        g[i] += bonus;
        if (g[i] > 20) {
            g[i] = 20;
        }
    }
}
int main(void) {
    int grades[N] = {12, 15, 9, 18, 14};
    print_report(grades, N);
    curve(grades, N, 2);
    print_report(grades, N);
    return 0;
}