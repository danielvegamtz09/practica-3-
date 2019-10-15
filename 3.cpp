#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void imprimir_menu();
void leer_opcion(int & opt);
int suma(int x,int y);
int resta(int x,int y);
int multiplicacion(int x,int y);
int division(int x,int y);
int leer_valor();

int main(){
int a,b,c;
int opt;
void imprimir_menu();
leer_opcion(opt);
a=leer_valor();
b=leer_valor();
switch(opt){
case 1:
    c=suma(a,b);
    break;
case 2:
    c=resta(a,b);
    break;
case 3:
    c=multiplicacion(a,b);
    break;
case 4:
    c=division(a,b);
    break;
dafault:
    printf("opcion invalida");
}
}
void imprimir_menu();{
printf("1.-suma \n");
printf("1.-resta \n");
printf("1.-multiplicacion \n");
}
void leer_opt(int & opt){
printf("introduce una pcion:");
scanf("%d", & opt);
}
int suma (int x,int y){
return x+y;
}
int resta (int x,int y){
return x-y;
}
int multiplicacion (int x,int y){
return x*y;
}
int leer_valor(){
int temp;
printf("introduce el valor:");
scanf("%d",& temp);
return temp;
}
int division (int x,int& y){
while(y==0){
      y=leer_valor();
      }
}
