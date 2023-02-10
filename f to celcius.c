//WAP which takes input from user in fahrenheit and converts to celcius

#include<stdio.h>
int main(){
   float fahrenheit, celsius;
   printf("Enter Fahrenheit: ");
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("Celsius: %f ", celsius);
   return 0;
}