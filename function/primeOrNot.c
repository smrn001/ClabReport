#include<stdio.h>
void prime(int x){
    int count =0;
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            count++;
            break;
        }
    }
    if(count==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }

}

int main()
{
    int n ;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime(n);
return 0 ;
}