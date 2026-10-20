#include <stdio.h>
int main(){
   int num;
   printf("請輸入密碼,輸入-1退出");
   scanf("%d",&num);
   while (num !=-1)
    
   {
    if (num==1234)
    {
        printf("登入成功");
        return 0;
    }
    else
    {
        printf("密碼錯誤，請重新輸入");
    }
    printf("請輸入密碼,輸入-1退出");
    scanf("%d",&num);
   }
    printf("已退出程式");
    return 0;
}