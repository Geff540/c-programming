//program to read the range of temperature
#include<stdio.h>
int main()
{
float temperature;
printf("Enter the value of the temperature.\n");
scanf("%f",& temperature);
if(temperature < 0)
{
printf("temperature is at freezing weather,\n");
}
else if(temperature>=0 &&temperature<=10)
printf("temperature is very cold weather.\n");
{
else if(temperature>=10 && temperature<=20)
printf("temperature is cold weather.\n");
}
else if(temperature>=20 && temperature<=30)
printf("temperature is normal.\n");
{
else if(temperature>=30 && temperature<=40)
printf("temperature is hot.\n");
}
else(temperature >=40)
printf("temperature is too hot.\n");

return 0;
}

