/**
*Author: Skyler Tang
* Date: 2021/09/13
* Hack 3.0
*/

#include <stdio.h>

int main() {

    float total_GB,current_day,GB_used;
    printf("enter in the amount of total GB: ");
    scanf("%f",&total_GB);
    printf("enter the current day in the 30 day period: ");
    scanf("%f",&current_day);
    if(current_day>30){
        scanf("%f",&current_day);
}
    printf("enter the total amount of GB used so far: ");
    scanf("%f",&GB_used);
    float left_GB=total_GB-GB_used;
    float left_day=30-current_day;
    float avg_left_GB=left_GB/left_day;

    double avg_gb_used=GB_used/current_day;
    printf("%0.1f days used , %0.1f days remaining\n",current_day,left_day);
    printf("average daily use: %0.1f GB/day\n\n",avg_gb_used);

    if(avg_gb_used>0.5){
    float exceed=avg_gb_used*left_day;

    printf("you are EXCEEDING your average daily use (0.50 GB/day).\n");
    printf("continuing this high usage, you'll exceed your data plan by %0.1f GB.\n\n",exceed);
    printf("to stay below your data plan, use no more than %0.1f GB/day.\n",avg_left_GB);
}
    else{
        float lose=total_GB-(left_day*avg_gb_used);

        printf("you are under using your average daily use(0.50 GB/day).\n");
        printf("continuing this low usage, you'll lose your data plan by %0.1f GB.\n",lose);
        printf("to stay above your data plan , use %0.1f GB/day.\n",avg_left_GB);
}
return 0;
}













