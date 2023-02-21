#include <stdio.h>
int main() {
    int unit,price;
    printf("Enter electricity unit : " );
    scanf("%d",&unit);

    if(unit <= 20) price =0;
    if(unit>20 && unit <=120) price = (unit-20)*12;

    if(unit>120 && unit <= 220) price =(100*12)+(unit-120)*11;
    if(unit>220) price = (100*12)+(100*11)+(unit-220)*10;

    printf("Billing Amount : %d \n",price);
  return 0;
}
