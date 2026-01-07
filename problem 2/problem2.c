
#include <stdio.h>
#include <stdlib.h>

int main() {
    float totalClasses, attendedClasses;
    float attendancePercentage;
    float requiredClasses;

    
    printf("Enter total classes: ");
    scanf("%f", &totalClasses);

    printf("Enter classes attended: ");
    scanf("%f", &attendedClasses);

    attendancePercentage = ((float)attendedClasses / (float)totalClasses) * 100;

    printf("\nAttendance Percentage: %.2f%%\n", attendancePercentage);

  
    if (attendancePercentage >= 75) {
        printf("Status:eligible");
    }
    if(attendancePercentage<75){
        
        printf("not elible\n");
    }
}

