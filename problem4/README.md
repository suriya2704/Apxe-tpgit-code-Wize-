# Problem 4

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char expenses[50],maxexpencses[50];
    int TotalNoExpences, TotalAmount=0;
     int amount=0, max=0;
    printf("Enter total number of expenses:");
    scanf("%d",&TotalNoExpences);
    for(int i=0;i<TotalNoExpences;i++){
        
        printf("enter the caegory:");
        scanf("%s",&expenses);
        printf("Enter the amount:");
        scanf("%d",&amount);
        TotalAmount= TotalAmount + amount;
        if(amount>max){
            max=amount;
            strcpy(maxexpencses,expenses);
        }

    }
    printf("maxexpences is %s %d\n",maxexpencses,max);
    printf("Total Amount :%d\n",TotalAmount);
}
---

**Sample Output**
Enter total number of expenses:3
enter the caegory:shirt
Enter the amount:300
enter the caegory:pen
Enter the amount:10
enter the caegory:recharge
Enter the amount:650
maxexpences is recharge 650
Total Amount :960
---