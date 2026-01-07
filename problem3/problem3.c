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