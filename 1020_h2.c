#include <stdio.h>
int main(){
   int 金額;
   int 總金額=0;
   do
   {
    printf("請輸入提款金額 (輸入0結束):");
    scanf("%d",&金額);
    總金額+=金額;

   } while (金額 !=0);
   printf("提款總金額 :%d",總金額);
   
    return 0;
}