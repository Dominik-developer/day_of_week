#include <stdio.h>

int main() {

    int day_of_week = 0;

    printf("Enter day of the week (1-7): \n");
    scanf("%d", &day_of_week);

    switch (day_of_week)
    {
    case 1 : /* Monday */
        printf("Monday\n");
        break;

    case 2 : /* Tuesday */
        printf("Tuesday\n");
        break;

    case 3 : /* Wednesday */
        printf("Wednesday\n");
        break;
    
    case 4 : /* Thursday */
        printf("Thursday\n");
        break;

    case 5 : /* Friday */
        printf("Friday\n");
        break;

    case 6 : /* Saturday */
        printf("Saturday\n");
        break;

    case 7 : /* Sunday */
        printf("Sunday\n");
        break;

    default:
        printf("Please only enter a number between 1 and 7.\n");
        break;
    }

    return 0;
}