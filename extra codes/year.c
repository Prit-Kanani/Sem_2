#include<stdio.h>
void main() {

    int day;
    printf("enter days:");
    scanf("%d", &day);
    int year;
    year = day / 365;
    int week;
    week = day / 7;
    week = week % 52;
    
    day = (day % 365)%7;
    
    printf("%d %d %d", year, week, day);
}
