#include<iostream>
#include<conio>
#include<stdio>
#include<fstream>
#include<stdlib>
#include<time>
#include<windows>
#include<string>
#include<dos>


int Menuprincipal(int menu)
{
int a;
 do
 {
   cout<<"\tIngrese la Opcion que desea Ejecutar ";
   cin>>menu;
   if(menu>4)
   {
    cout<<"\tError al ingresar la opcion\n";
   }
 }while(a<0 && a>=4);
 return menu;

}



main()
{
	struct time tiempo;
	gettime(&tiempo);
   int hora = tiempo.ti_hour;
   int min = tiempo.ti_min;
   int sec = tiempo.ti_sec;
   cout<<hora<<"horas "<<min<<"minutos "<<sec<<"segundos\n";

   int opc, a, horario;
 	do
   {

   struct date fecha;
	getdate(&fecha);
   char dia = fecha.da_day;
   char mes = fecha.da_mon;
   int anio = fecha.da_year;
   cout<<dia<<"de "<<mes<<"de "<<anio;

   system("color 18");
   printf("\n\tMENU PRINCIPAL\n");
   printf("1- Ingresar una nueva hora de clases: \n");
   printf("2- Ver el horario de hoy: \n");
   printf("3- Ver el horario de la Semana: \n");
   printf("4- Salir. \n");
   opc = Menuprincipal(a);

   switch(opc)
   {

   printf("El dato Ingresado es incorrecto");
   char mat[10], sem[10],  dia[10], ini[10], fin[10], caracter;
    	case 1:

      	printf("\nIngrese los siguientes Datos: \n\n");
      	printf("NOMBRE DE LA MATERIA: \n");
      	scanf("%s",&mat);

      	printf("NOMBRE DEL SEMESTRE: \n");
      	scanf("%s",&sem);

      	printf("DIA DE LA SEMANA: \n");
         scanf("%s",&dia);

         while(strcmp(dia,"LUN")!=0 && strcmp(dia,"MAR")!=0 && strcmp(dia,"MIE")!=0 && strcmp(dia,"JUE")!=0 && strcmp(dia,"VIE")!=0)
         {
          printf("Ingresos permitidos: LUN, MAR, MIE, JUE, VIE\nDIA DE LA SEMANA: \n");
          scanf("%s",&dia);
         }

      	printf("HORA DE INICIO: \n");
      	scanf("%s",&ini);
         while(strcmp(ini,"07h00")!=0 && strcmp(ini,"08h00")!=0 && strcmp(ini,"09h00")!=0 && strcmp(ini,"10h00")!=0 && strcmp(ini,"11h00")!=0 && strcmp(ini,"12h00")!=0 && strcmp(ini,"13h00")!=0 && strcmp(ini,"14h00")!=0 && strcmp(ini,"15h00")!=0 && strcmp(ini,"16h00")!=0 && strcmp(ini,"17h00")!=0 && strcmp(ini,"18h00")!=0 && strcmp(ini,"19h00")!=0 && strcmp(ini,"20h00")!=0 && strcmp(ini,"21h00")!=0)
         {
          printf("Formato permitido: EJ. 07h00 \nHORA DE INICIO: \n");
          scanf("%s",&ini);
         }

        printf("HORA DE FIN: \n");
      	scanf("%s",&fin);
         while(strcmp(fin,"07h00")!=0 && strcmp(fin,"08h00")!=0 && strcmp(fin,"09h00")!=0 && strcmp(fin,"10h00")!=0 && strcmp(fin,"11h00")!=0 && strcmp(fin,"12h00")!=0 && strcmp(fin,"13h00")!=0 && strcmp(fin,"14h00")!=0 && strcmp(fin,"15h00")!=0 && strcmp(fin,"16h00")!=0 && strcmp(fin,"17h00")!=0 && strcmp(fin,"18h00")!=0 && strcmp(fin,"19h00")!=0 && strcmp(fin,"20h00")!=0 && strcmp(fin,"21h00")!=0)
         {
          printf("Formato permitido: EJ. 07h00 \nHORA DE FIN: \n");
          scanf("%s",&fin);
         }



         printf("Presione una tecla para regresar al menu principal\n\n");
         getch();
         break;

      case 2:
      	printf("\n\t HORARIO DE HOY \n");
         printf("Presione una tecla para regresar al menu principal\n\n");
         getch();

      break;

      case 3:
      	printf("\n\t HORARIO DE LA SEMANA \n");


         printf("Presione una tecla para regresar al menu principal\n\n");
         getch();
      break;

      case 4:
      	return 0;
      break;



   }
   }

   while (a=4);


getch();
}
