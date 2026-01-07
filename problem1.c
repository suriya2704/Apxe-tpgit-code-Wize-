#include<stdio.h>
#include<stdlib.h>

int main(){
     int arr[100];
     int token=1, Remaining=100;

     for (int token=1; token<=Remaining ;token++){
        
        printf("token generated :%d\n",token);
        Remaining--;
           printf("serving token:%d\n",token);
        printf("student waiting:%d\n",Remaining);
           
     }
    if(Remaining==0){
        printf("All the tokens are souldout");
    }
}
