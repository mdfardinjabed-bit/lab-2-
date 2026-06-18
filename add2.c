#include <stdio.h>

int add2(int a, int b){
    return a+b;
}
int main(){
    int x,y;
    printf("enter two numbers :");
    scanf("%d %d", &x, &y);
    printf("sum =%d", add2(x,y));

    return 0;
}
