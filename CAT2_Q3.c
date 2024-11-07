#include <stdio.h>
int main(){
float hoursworked, hourlywage, grosspay, taxes, netpay;
printf("enter number of houres worked in a week:");
scanf("%f", &hoursworked);
printf("\nenter hourly wage:");
scanf("%f", &hourlywage);
if(hoursworked<=40){
grosspay=hoursworked*hourlywage;
}
else{
grosspay=(40*hourlywage)+((hoursworked-40)*(hourlywage*1.5));
}
if(grosspay<=600){
taxes=grosspay*0.15;
}
else{
taxes=(600*0.15)+((grosspay-600)*0.2);
}
netpay=grosspay-taxes;
printf("\ngross pay:$%.2f\ntaxes:$%.2f\n netpay:$%.2f", grosspay, taxes, netpay);
return 0;
}