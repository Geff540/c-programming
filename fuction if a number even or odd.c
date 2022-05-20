// a function to check whether a number is even or odd
# include<stdio.h>
int main()
{
int num1,rem1;
printf("input the num1");
scanf("%d, &num1");
rem1=num1 % 2;
if(num1==0)
printf("%d is an even number",num1);
else printf("%d is an odd number",num1);

return 0;
}