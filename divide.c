#include <stdio.h>

float divide(float a, float b){
    return a/b;
}
int main(){
    int a,b;
    scanf("%f %f ", &a, &b);
    printf("%.2f", divide(a ,b));

    return 0;
}
