// a function to input temperature in Celsius and convert to fanhrenheit
# include<stdio.h>
int main()
{
printf("Enter the temperature in celsius:");
scanf("%f", &Celsius);
//formula for converting Celsius to Fahrenheit.
fanhrenheit=(9/5*Celsius)+32;
printf("%.2f Celsius=%.2f fanhrenheit", Celsius, fanhrenheit);
return 0;
}