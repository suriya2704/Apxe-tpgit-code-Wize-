#include<stdio.h>
#include<stdlib.h>

int main(){
     int arr[100];
     int token=1, Remaining=100,totaltoken=100;
     char tokengive;
     printf("Enter the tokengives: ");
     scanf("%c",&tokengive);

       if(tokengive=='s' || tokengive=='S'){

     for (int token=1; token<=totaltoken ;token++){
        
        printf("token generated :%d\n",token);
        Remaining--;
           printf("serving token:%d\n",token);
        printf("student waiting:%d\n",Remaining);
        printf("______\n");

     }
    }
    if(tokengive=='q' || tokengive=='Q'){
        printf("quite the token giving process\n");
    }
     if(Remaining==0){
        printf("All the tokens are souldout\n");
    }
   
}
