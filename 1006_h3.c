#include <stdio.h>
int main(){
  
    int 成績;
    int 出席率;
    printf("請輸入成績(分):");
    scanf("%d",&成績);
    

    if (成績>=60)
    {
        printf("請輸入出席率(%):");
        scanf("%d",&出席率);
        if(出席率>=80)
        {
           printf("及格");
        }
        else
        { 
           printf("不及格"); 

        }
    }
    else
    {
        printf("不及格");
    }
    
    return 0;
}
