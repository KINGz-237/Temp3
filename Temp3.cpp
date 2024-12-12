#include <stdio.h>
#include<stdlib.h>
int main() {
    int choice;
    float temp, conTemp;
// this code was done by group 4 members
    printf("Temperature Conversion Menu:.......\n\n");
    printf("1. Celsius to Kelvin..........................\n\n");
    printf("2. Kelvin to Fahrenheit..................................\n\n");
    printf("3. Celsius to Fahrenheit..................................................\n\n");
    printf("\tChoose an option (from 1-3 only do not exceed that): \n\t\t\t\t\t\t\t\t");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            conTemp = temp + 273.15;
            printf("\t\t%.1f Celsius is %.2f Kelvin\n", temp, conTemp);
            break;
        case 2:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            conTemp = (temp - 273.15) * 9 / 5 + 32;
            printf("\t\t%.1f Kelvin is %.2f Fahrenheit\n", temp, conTemp);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            conTemp = (temp * 9 / 5) + 32;
            printf("\t\t%.1f Celsius is %.2f Fahrenheit\n", temp, conTemp);
            break;
        default:
            printf("Please run program again and select values in the range(1-3) above thanks for understanding .\n");
            break;
    }

    return 0;
}

