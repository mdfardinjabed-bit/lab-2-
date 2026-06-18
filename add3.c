#include <stdio.h>

int add3(int a, int b, int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("sum =%d", add2(a ,b ,c));

    return 0;
}
