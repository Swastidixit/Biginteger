#include<stdio.h>
#include<stdlib.h>
#include"swastiart.h"
int main()
{
    
    head=NULL;
    createdll();
    display();
    long int c,ans,ans2,ans3,ans4,ans5;
    printf("enter big int");
	scanf("%ld",&c);
    
    ans=add(head,c);
    printf("%d ",ans);
    ans2=sub(head,c);
    printf("%d ",ans2);
    ans3=mul(head,c);
    printf("%d ",ans3);
    ans4=divide(head,c);
    printf("%d ",ans4);
    ans5=mod(head,c);
    printf("%d ",ans5);
    
    
}
