# PROBLEM 3
```c

#include<stdio.h>
#include<stdlib.h>

int main(){
    int TotalRooms,remainingRooms;
    printf("enter the total rooms:");
    scanf("%d",&TotalRooms);
    remainingRooms=TotalRooms;
     for (int i=1;i<=TotalRooms;i++){

        printf("roomallocted to S%d\n",i);
       remainingRooms--;
        printf("remainingRooms:%d\n",remainingRooms);
        
        if(remainingRooms==0){
        printf("availablerooms: %d\n",remainingRooms);
        printf("no rooms are available\n");
     }}
   
    return 0;
}
---
**Sample OUtput**
enter the total rooms:3
roomallocted to S1
remainingRooms:2
roomallocted to S2
remainingRooms:1
roomallocted to S3
remainingRooms:0
availablerooms: 0
no rooms are available
---
