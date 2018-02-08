#include <stdio.h>
#include <conio.h>
int main() 
{
int a,b; 
int suma,roznica,iloczyn;
float iloraz; 
clrscr(); 
printf("Prosty kalkulator\n");
printf("\nPodaj liczbe a: ");
scanf("%d",&a); 
printf("Podaj liczbe b: ");
scanf("%d",&b); 

suma=a+b;
roznica=a-b;
iloczyn=a*b;
iloraz=(float)a/(float)b; 

printf("\nWyniki dzialan:\n");
printf("\nSuma: %d ",suma);
printf("\nRoznica: %d ",roznica);
printf("\nIloczyn: %d ",iloczyn);
printf("\nIloraz: %f ",iloraz);
getch(); 
return 0 ;
}
