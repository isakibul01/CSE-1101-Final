//Series Addition
//#1+2+3+4+5 - - - - - - - - n
#include<stdio.h>
int main(){
    int i, num, sum;
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        sum=sum+i;
    }
    printf("%d", sum);
    
    return 0;
}



//Factorial
#include<stdio.h>

int main(){
    int x,fact=1,n;

    printf("Enter a number to find factorial: ");
    scanf("%d",&n);

     if(n<0){
        printf("Please input positive number.");
    }

    for(x=1;x<=n;x++){
        fact=fact*x; 
        printf("Factorial of %d is: %d",n,fact);
    }
    return 0;
}