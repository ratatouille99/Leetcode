#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void MostrarMenu()
{
 char *menu =
 "\
 \r\n----------\
 \r\n Programa para girar letrero: \
 \r\n 1. Derecha\
 \r\n 2. Izquierda\
 \r\n 3. Salir\
 \r\n-----------\
 \n\
 ";
 system("cls");
 printf( menu );
}
int main(){
 bool entrada= true, salida = true;
 string respuesta;
 char cadena[] = " Mi letrero ";
 char copiar[] = " Mi letrero ";
 int contador1 = 11, contador2 = 10, contador3 = 0, opcion;
 cout<<cadena<<endl;
 while(salida){
 entrada = true;
 MostrarMenu();
 cin>>opcion;
 switch(opcion){
 case 1: while(entrada){
 cout<<"Desea recorrer el letrero(s/n): ";
 cin>>respuesta;
 if(respuesta == "s"){
 while(contador1){
 for(int i = contador1, j = contador2; i >= 0;
 --i, --j){
 cadena[i] = copiar[j];
 if(j < 0){
 j = 11;
 }
 }
for(int i = 0; i < 12; i++){
 cout<<cadena[i];
 }
cout<<"\n";
 contador1 = false;
 }
 }
else if(respuesta == "n"){
 entrada = false;
 }
else{
 cout<<"Vuelva a intentar"<<endl;
 }
contador1 = 11;
 contador2 = contador2 - 1;
 } break;
 case 2: while(entrada){
 cout<<"Desea recorrer el letrero(s/n): ";
 cin>>respuesta;
 if(respuesta == "s"){
 while(contador1){
 for(int i = contador1, j = contador3;
 i >= 0; --i, --j){
 cadena[i] = copiar[j];
 if(j < 0){
 j = 11;
 }
 }
for(int i = 0; i < 12; i++){
 cout<<cadena[i];
 }
cout<<"\n";
 contador1 = false;
 }
 }
else if(respuesta == "n"){
 entrada = false;
 }
else{
 cout<<"Vuelva a intentar"<<endl;
 }
contador1 = 11;
 contador3 = contador3 + 1;
 } break;
 case 3: salida = false; break;
 default: cout<<"LA OPCION NO EXISTE";
 salida = false;
 }
 }
 return 0;
}
