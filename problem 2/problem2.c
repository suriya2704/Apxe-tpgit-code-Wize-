#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalClasses, attendedClasses;
    float attendancePercentage;
    int requiredClasses;

    
    printf("Enter total classes: ");
    scanf("%d", &totalClasses);

    printf("Enter classes attended: ");
    scanf("%d", &attendedClasses);

    attendancePercentage = ((float)attendedClasses / totalClasses) * 100;

    printf("\nAttendance Percentage: %.2f%%\n", attendancePercentage);

  
    if (attendancePercentage >= 75) {
        printf("Status:eligible");
    }
    if(attendancePercentage<75){
        
        printf("not elible\n");
    }
        
