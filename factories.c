#include <stdio.h>
int factorial(int a);
int main() {
        long int i=1,n,f;
        printf("Enter the Factorial number\n");
        scanf("%d",&n);
        while(i<=n){
                f=factorial(i);
                i++;
        }
        printf("%d\n",f);
        return 0;
}
int factorial(int a){
        if(a==1 ||a==0){
                return 1;
        }
        else {
                return factorial(a-1)*a;
        }
}

