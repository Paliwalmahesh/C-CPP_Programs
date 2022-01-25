/*a sqaure of size 83 units measured by software cause
0.03% error in every pass . if side is measured 80 times 
then find final value of area of square*/

#include <stdio.h>
float n=83,a,d;
int i;
float measurment(float n);
int main() {
for (i = 0; i <=80; ++i){ 
n = measurment(n);}
printf("%f",((((83*83)-(n*n))/(83*83))*100));}
float measurment(float n){
a=n-(n*0.0003);
return a;
}
	


