#include <stdio.h>

int main()
{
    const double KM_TO_MILES = 0.621371;
    const double KELVIN_CONST = 273.15;

    double km, miles, metres, centimetres;
    double celsius, fahrenheit, kelvin;

    printf("Enter distance in kilometres: ");
    scanf("%lf", &km);

    miles = km * KM_TO_MILES;
    metres = km * 1000;
    centimetres = km * 100000;

    printf("\nDistance Conversions\n");
    printf("Miles      : %.2lf\n", miles);
    printf("Metres     : %.2lf\n", metres);
    printf("Centimetres: %.2lf\n", centimetres);

    printf("\nEnter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + KELVIN_CONST;

    printf("\nTemperature Conversions\n");
    printf("Fahrenheit : %.2lf\n", fahrenheit);
    printf("Kelvin     : %.2lf\n", kelvin);

    return 0;
}