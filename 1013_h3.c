#include <stdio.h>
int main(){
   int i,j;
   for(i=1;i<=4;i++) //i=i+1，i+=1，i=i+2，i+=2
   {
    for(j=1;j<=4-i;j++)
    {
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("@");
    }
    printf("\n");
   }   
    
    return 0;
}