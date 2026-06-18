#include <stdio.h>
    int main(){
        int fact=1,n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            fact*=i;
    }
        printf("%d! = %d\n",n,fact);
        return 0;
    }
