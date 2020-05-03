/ *
Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados,
por el motivo la empresa lo ha contratado para la implementación de este proyecto, los datos a determinados son:
Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento
Salario
Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion.
El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.
* /
# include  < iostream >
# include  < string >
# include  < iomanip >
usando el  espacio de nombres  estándar ;

struct  empl {
  int codigo;
  cadena nombre;
  cuerda puesto;
  int departamento;
  flotante salario;
};

nulo  pausar_pantalla () {
      // Pausa
    cadena vacía;
    cout << " \ n Presione cualquier tecla para continuar \ n " ;
    getline (cin, vacío);
};

int  main () {
  int n = 5 ;
  
  // Declaración del puntero
  flotante * total, var = 0.0 ;
  // Asignación del puntero
  total = & var;

  empl * empleado; // Creamos puntero con estructura
  empleado = nuevo empl [n]; // Le asignamos al puntero un tipo arreglo
  
  cadena * departamento = NULL ; // Creamos el puntero
  
  // Creamos el arreglo tipo string
  string depa [] = { " Gerencia " , " Administración " , " Producción " };
  
  departamento = depa; // Asignamos al puntero el arreglo.
  

  para ( int i = 0 ; i <n; i ++) {
    cout << " Ingrese Codigo del empleado ( " << i + 1 << " ): " ;
    cin >> empleado [i]. codigo ;

    cout << " Ingrese Nombre del empleado ( " << i + 1 << " ): " ;
    cin. ignorar ( 200 , ' \ n ' );
    getline (cin, empleado [i]. nombre );

    cout << " Ingrese Puesto del empleado ( " << i + 1 << " ): " ;
    getline (cin, empleado [i]. puesto );

    int var1 = 0 ;
    bool centinela = falso ;
    while (centinela == false ) {
      cout << " Ingrese el departamento que pertenece al empleado ( " << i + 1 << " ) " << " \ n " ;
      para ( int ii = 0 ; ii < 3 ; ii ++) {
        cout << " ' " << ii + 1 << " ' " << departamento [ii] << "   " ;
      }
      cout << " : " ;

      cin >> var1;
      var1 = var1- 1 ;
      if (var1> = 0  y var1 <= 2 ) {
        empleado [i]. departamento = var1;
        centinela = verdadero ;
      } más {
        cout << " El ingreso es invalido ... \ n Intenta de nuevo .... " << endl;
        centinela = falso ;
      }
    }
    cout << " Ingrese Salario del empleado ( " << i + 1 << " ): " ;
    cin >> empleado [i]. salario ;
    
    * total + = empleado [i]. salario ;

    sistema ( " cls " );
  }

  cout << " ----- Planilla ------ " << endl;
    cout << " | " << " \ t " << " Código " << setw ( 5 );
    cout << " | " << " \ t " << " Nombre " << setw ( 5 );
    cout << " | " << " \ t " << " Puesto " << setw ( 5 );
    cout << " | " << " \ t " << " Departamento " << setw ( 5 );
    cout << " | " << " \ t " << " Salario " << setw ( 5 ) << " | " << " \ n " ;
    cout << " __________________________________________________________________________ " << " \ n " ;

  para ( int i = 0 ; i <n; i ++) {
    cout << " \ t " << empleado [i]. codigo << setw ( 8 );
    cout << " \ t " << empleado [i]. nombre << setw ( 6 );
    cout << " \ t " << empleado [i]. puesto << setw ( 8 );
    cout << " \ t " << departamento [empleado [i]. departamento ] << setw ( 5 );
    cout << " \ t " << empleado [i]. salario << setw ( 5 ) << " \ n " ;
  }
  
  cout << " \ n  \ n El total de planilla a pagar es de: " << * total << " \ n " ;


}
