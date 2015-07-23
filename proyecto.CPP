#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

const int 
main()

{

	char nm[20] , ns[20] , nd[20], ds[20];
	int h_i , h_f , mi , mf;

	cout<<"\n----------------MEnU-----------------";
	cout<<"\n1._Ingrese una nueva hora de clases";
	cout<<"\n2._Ver el horario de hoy";
	cout<<"\n3._Ver el horario de la semana";
	cout<<"\n4._Salir";


	cout<<"\nElija la opcion --------->";
	cin>>opc;

	system("cls");
	switch(opc)

	{

		case 1 : cout<<"\nIngrese Nombre de la materia";
      			cin>>nm;
					cout<<"\nIngrese Nombre del semestre";
      			cout<<"\n";
					cin>>ns;
					cout<<"\nIngrese Dia de la semana";
					cout<<"\n";
      			cin>>ds;
					cout<<"\nHora de inicio de clases";
					cout<<"\n";
      			cin>>i_c;
               cout<<"\nFin de hora de clases";
					cout<<"\n";
     			   cin>>i_f;

      case 2 : cout<<"\n";

      case 3 : cout<<"\n";

      case 4 : cout<<"\n";




	}
	cout<<"\n";

	system("pause");
}
