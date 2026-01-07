# Apxe-tpgit-code-Wize-
#Problem 1
```c
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
---

**Sample Output**
Enter the tokengives: s
token generated :1
serving token:1
student waiting:99
______
token generated :2
serving token:2
student waiting:98
______
token generated :3
serving token:3
student waiting:97
______
token generated :4
serving token:4
student waiting:96
______
.
.
.
.
token generated :99
serving token:99
student waiting:1
______
token generated :100
serving token:100
student waiting:0
______
All the tokens are souldout

