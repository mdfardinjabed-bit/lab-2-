#include <stdio.h>

int subtract(int a, int b){
    return a-b;
}
int main(){
    int a,b;
    scanf("%d %d ", &a, &b);
    printf("sum =%d", subtract(a ,b));

    return 0;
}
