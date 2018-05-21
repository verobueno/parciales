#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//declaro constantes de marcas de auto
#define TOTAL 0 //lo defino para calcular recaudacion total
#define ALFA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTROS 4
#define TAM_PROP 20
#define TAM_AUTO 20
#define NO_PRINT 0
#define PRINT 1

typedef struct{
    int IdPropietario;
    char NomApellido[30];
    char Direccion[20];
    char Tarjeta[8]; //agregar un control de tamaño;
    int estado; //con este campo voy a validar si esta cargado o vacio
}ePropietario;

typedef struct
{
    int Marca;
    char Patente[4]; //falta validar
//    int IdAutomovil;
    int IdPropietario;
    int estado;
}eAutomovil;

/*typedef struct
{
    float recaudacion[5];
} eRecaudacion;
*/
/** Brief Funcion que imprime Menu
* No recibe ni retorna parametros
*/
void MostrarMenu(void);

/** Brief Funcion que devuelve random las horas por estadía
* No recibe ni retorna parametros
*/
int devolverHorasEstadia(void);

/** Brief Funcion que el numero ingresado sea un entero
* param no recibe
* retorna -1 si el valor ingresado no es un entero
* retorna el valor ingresado es un entero
*/
int EntrarEntero(void);

/** Brief Funcion que incializa el vector de propietarios
* recibe el vector de Propietarios
* no retorna parametros
*/
void InicializarProp(ePropietario Propietario[]);


/** Brief Funcion que incializa el vector de automoviles
* recibe el vector de automoviles
* no retorna parametros
*/
void InicializarAutomovil(eAutomovil Automovil[]);

/** Brief Funcion hardcore que carga el vector de propietarios
* recibe el vector de propietarios
* no retorna parametros
*/
void CargarPropietarios(ePropietario Propietarios[]);

/** Brief Funcion hardcore que carga el vector de automoviles
* recibe el vector de automoviles
* no retorna parametros
*/
void CargarAutomoviles(eAutomovil listadoAutomoviles[]);



/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumerico(char str[]);

/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int esAlfaNumerico(char str[]);

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[]);

/** Brief Funcion Busca espacio libre para poder cargar un propietario
* recibe el vector de propietarios
* retorna un int con la posicion libre
* retorna -1 si no hay posiciones libres
*/
int buscaEspLibreProp(ePropietario Propietario[]);



/** Brief Funcion que da de alta un propietario
* param recibe el vector de propietarios
* no retorna valor
*/
void AltaPropietario(ePropietario Propietario[]);


/** Brief Funcion que imprime un propietario
* param recibe el vector de propietarios
* no retorna valor
*/
void MostrarPropietario(ePropietario Propietario);


/** Brief Funcion que imprime propietarios
* param recibe el vector de propietarios
* no retorna valor
*/
void MostrarPropietarios(ePropietario Propietario[]);


void MostrarPatente(eAutomovil Automovil);
void MostrarPatentesVigentes(eAutomovil Automovil[],ePropietario Propietario[]);

/** Brief Funcion que permite modificar la tarjeta de credito de un propietario
* param recibe el vector de propietarios y un int de id de propietario
* no retorna valor
*/
void ModificarPropietario(ePropietario Propietario[], int id);

/** Brief Funcion Busca espacio libre para poder cargar un automovil
* recibe el vector de automoviles
* retorna un int con la posicion libre
* retorna -1 si no hay posiciones libres
*/
int BuscaEspLibreAuto(eAutomovil Automovil[]);


/** Brief Funcion que me permite ingresar un automovil
* param recibe el vector de automoviles y el vector de propietarios
* no retorna valor
*/
void IngresarAutomovil(eAutomovil Automovil[],ePropietario Propietario[]);


/** Brief Funcion que calcula el valor de la estadia
* param recibe el vector de automoviles y un int con las horas
* retorna un float con el valor que se debe abonar por estadia
*/
float CalcularEstadia(eAutomovil Automovil, int time);


/** Brief Funcion que da de baja un propietario
* param recibe el vector de propietarios y el id de propietario
* no retorna valor
*/
void EliminarPropietario(ePropietario Propietario[], int id);


/** Brief Funcion que busca la marca
* param recibe un entero con el numero de la marca y un vector vacio que carga con el nombre de la marca
* no retorna valor
*/
void BuscarMarca(int M, char nombre_marca[]);

/** Brief Funcion que busca los autos de un propietario
* param recibe un entero con el id del propietario y el vector de automoviles
* retorna un entero con la cantidad de autos que tiene el propietario
*/
int AutosDePropietario(int id, eAutomovil Automovil[]);


/** Brief Funcion que permite el egreso de un automovil y actualizar los montos totales y por marca a abonar
* param recibe vector automovil, Propietario, recaudacion, un entero con la posicion, la patente y un flag para validar la impresion
*retorna un float con el valor a abonar
*/
float EgresoAutomovil(eAutomovil Automovil[], ePropietario Propietario[], float recaudacion[], int pos, char patente[], int imprimir);


/** Brief Funcion que da de baja un propietario y los autos que tiene cargados
* indicando el monto total que debe abonar por estadia de su o sus autos
* param recibe el vector de propietarios, de automoviles y un float con el monto a abonar
* no retorna valor
*/
void BajaPropietario(ePropietario Propietario[], eAutomovil Automovil[], float recaudacion[]);

/** Brief Funcion que imprime la recaudacion por marca
* param recibe el vector de recaudacion
* no retorna valor
*/
void RecaudacionXMarca(float recaudacion[]);


/** Brief Funcion que imprime la recaudacion total del estacionamiento
* param recibe el vector de recaudacion
* no retorna valor
*/
void RecaudacionTotal(float recaudacion[]);

/** Brief Funcion que imprime los autos que tiene un propietario
* param recibe el vector de propietarios, de automoviles y un entero con el id de propietario
* no retorna valor
*/
void MostrarAutoXPropietario(ePropietario Propietario[], eAutomovil Automovil[], int id);

/** Brief Funcion que imprime la lista de propietarios que tienen un auto marca audi
* param recibe el vector de propietarios, de automoviles
* no retorna valor
*/
void MostrarPropietarioXaudi(ePropietario Propietario[],eAutomovil Automovil[]);

/** Brief Funcion que imprime la lista de autos ordenados por patente indicando los datos del propietario
* param recibe el vector de automoviles y el de propietarios,
* no retorna valor
*/
void OrdenarPorPatente(eAutomovil Automovil[], ePropietario[]);

#endif // FUNCIONES_H_INCLUDED
