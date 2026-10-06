#include <stdio.h>
int main(){
  
    int login;
    int 帳戶餘額;
    int 提款金額;
    int black;
    printf("請輸入有無登入有1無0:");
    scanf("%d",&login);
    printf("請輸入帳戶餘額:");
    scanf("%d",&帳戶餘額);
    printf("請輸入款金額:");
    scanf("%d",&提款金額);
    printf("請輸入是否列入黑名單有1無0:");
    scanf("%d",&black);
    

    if (login==1 && 帳戶餘額>=提款金額 && black==0)
    {
        
        printf("可提款");
    }
    else
    {
        printf("不可提款");
    }
    return 0;
}