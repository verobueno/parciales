#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void MostrarMenu(void)
{
    system("cls");
    printf("1. Alta de Propietario\n");
    printf("2. Modificar Datos del Propietario\n");
    printf("3. Baja de Propietario\n");
    printf("4. Ingreso del automóvil(Estacionados)\n");
    printf("5. Egreso del automovil (No estacionados)\n");
    printf("6. Recaudacion total del estacionamiento\n");
    printf("7. Recaudacion total por marca\n");
    printf("8. Informe por propietario\n");
    printf("9. Informe de propietarios de Audi\n");
    printf("10. Informe de autos estacionados\n\n");
    printf("11. Salir\n");
    printf("\nIngrese Opcion: ");

}

int EntrarEntero()
{
    int entero;

    fflush(stdin);
    if (!scanf("%d", &entero))
        entero = -1;

    return entero;
}
int devolverHorasEstadia()
{
    int horas;

    srand(time(NULL));
    horas = (rand()%24)+1;

    return horas ;
}

void InicializarProp(ePropietario Propietario[])
{
    int i;

    for (i = 0; i < TAM_PROP; i++)
    {
        Propietario[i].IdPropietario = 0;
        Propietario[i].estado = 0;
    }
}

void InicializarAutomovil(eAutomovil Automovil[])
{
    int i;

    for (i = 0; i < TAM_AUTO; i++)
    {
        Automovil[i].estado = 0;
    }
}

void CargarAutomoviles(eAutomovil listadoAutomoviles[])
{

//Cargo el listado de automoviles
    listadoAutomoviles[0] = (eAutomovil)
    {
        ALFA_ROMEO, "AAA", 2, 1
    };
    listadoAutomoviles[1] = (eAutomovil)
    {
        AUDI, "CCC", 1, 1
    };
    listadoAutomoviles[2] = (eAutomovil)
    {
        AUDI, "DDD", 2, 1
    };
    listadoAutomoviles[3] = (eAutomovil)
    {
        FERRARI, "BBB", 1, 1
    };
    listadoAutomoviles[4] = (eAutomovil)
    {
        FERRARI, "ZZZ", 3, 1
    };
    listadoAutomoviles[5] = (eAutomovil)
    {
        AUDI, "III", 3, 1
    };
    listadoAutomoviles[6] = (eAutomovil)
    {
        AUDI, "HHH", 4, 1
    };
    listadoAutomoviles[7] = (eAutomovil)
    {
        OTROS, "EEE", 1, 1
    };
    listadoAutomoviles[8] = (eAutomovil)
    {
        AUDI, "FFF", 4, 1
    };
    listadoAutomoviles[9] = (eAutomovil)
    {
        ALFA_ROMEO, "GGG", 3, 1
    };


    /* char patente[10];
    int idAutomovil;
    int marca;
    int idPropietario;
    int estado;

    int id[]= {1,2,3,4,5,6,7,8,9,10};
    char patente[][20]= {"AAA","CCC","DDD","BBB","ZZZ","III","HHH","EEE","FFF","GGG"};
    int marca[]= {1,3,3,2,2,3,3,4,3,1};
    int propietario[]= {2,1,2,1,3,3,4,1,4,3};
    */
}

/**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumericoFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (i == 0 && str[i] == '-')
       {
           i++;
           continue;

       }
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

/*int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if (i == 0 && str[i] == '-')
       {
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;

       i++;
   }
   return 1;
}


int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}


int esAlfaNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
           return 0;
       i++;
   }
   return 1;
}

*/


void CargarPropietarios(ePropietario lista[])
{
    lista[0].IdPropietario=1;
    lista[1].IdPropietario=2;
    lista[2].IdPropietario=3;
    lista[3].IdPropietario=4;

    lista[0].estado=1;
    lista[1].estado=1;
    lista[2].estado=1;
    lista[3].estado=1;

    strcpy(lista[0].NomApellido,"Juan");
    strcpy(lista[1].NomApellido,"Luis");
    strcpy(lista[2].NomApellido,"Maria");
    strcpy(lista[3].NomApellido,"Jose");

    strcpy(lista[0].Direccion,"mitre");
    strcpy(lista[1].Direccion,"urquiza");
    strcpy(lista[2].Direccion,"belgrano");
    strcpy(lista[3].Direccion,"alsina");

    strcpy(lista[0].Tarjeta,"111-111");
    strcpy(lista[1].Tarjeta,"222-222");
    strcpy(lista[2].Tarjeta,"333-333");
    strcpy(lista[3].Tarjeta,"444-444");
}

void BuscarMarca(int M, char nombre_marca[])
{
    switch(M)
    {
    case 1:
        strcpy(nombre_marca, "Alfa Romeo");
        break;
    case 2:
        strcpy(nombre_marca,"Ferrari");
        break;
    case 3:
        strcpy(nombre_marca,"Audi");
        break;
    case 4:
        strcpy(nombre_marca,"Otros");
        break;
    }
}

int buscaEspLibreProp(ePropietario Propietario[])
{
    int index = -1;
    int i;
    for (i = 0; i < TAM_PROP; i++)
    {
        if (Propietario[i].IdPropietario == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

void AltaPropietario(ePropietario Propietario[])
{
    //int espLibre;
    int index;
    int existe;

    //1ro busco espacio libre
    index = buscaEspLibreProp(Propietario);

    //valido si hay espacio libre
    if (index == -1)
    {
        printf("No se puede cargar propietario - espacio no disponible\n");
    }
    else //hay espacio libre, ingreso propietario
    {
        do
        {
            do
            {
            printf("Ingrese Id de Propietario: ");
            Propietario[index].IdPropietario = EntrarEntero();
            } while (Propietario[index].IdPropietario == -1);

            existe = BuscarPropietario(Propietario, Propietario[index].IdPropietario);
            if (existe != -1)
            {
                printf("Ese Id de Propietario ya existe\n");
            }
        } while (existe != -1);
        Propietario[index].estado = 1;

       // validaIngresoNumero(Propietario[index].idPropietario);

        printf("Ingrese Nombre y Apellido: ");
        fflush(stdin);
        gets(Propietario[index].NomApellido);

        printf("Ingrese Direccion: ");
        fflush(stdin);
        gets(Propietario[index].Direccion);

        printf("Ingrese Nro de Tarjeta: ");
        gets(Propietario[index].Tarjeta);
    }
}

void MostrarPropietario(ePropietario Propietario)
{
    // impreme los datos de un propietario
    printf("\n Id del Propietario: %d", Propietario.IdPropietario);
    printf("\n Nombre y Apellido: %s", Propietario.NomApellido);
    printf("\n Direccion: %s", Propietario.Direccion);
    printf("\n Tarjeta: %s", Propietario.Tarjeta);
    printf("\n");
    Propietario.estado=1;
}

void MostrarPropietarios(ePropietario Propietario[])
{
    int i;
    for (i = 0; i < TAM_PROP; i ++)
    {
        if (Propietario[i].estado != 0)
        {
            MostrarPropietario(Propietario[i]);
        }
    }
}
//en modificacion
void MostrarPatente(eAutomovil Automovil)
{
    // impreme los datos de un propietario
    printf("%d\t", Automovil.IdPropietario);
    printf("%s\n", Automovil.Patente);
    //printf("\n");
    //Automovil.estado=1;
}

void MostrarPatentesVigentes(eAutomovil Automovil[],ePropietario Propietario[])
{
    int i;
    //agrego
    int j;
    printf("Patentes Vigentes\n");
    printf("Nombre\tId\tPatente");
    for (i = 0; i < TAM_AUTO; i ++)
    {
        if ( Automovil[i].estado != 0)
        {
            //MostrarPatente(Automovil[i]);
            for(j = 0; j<TAM_PROP; j++) //agrego
            {
                if ( Propietario[j].estado == 1 && Automovil[i].IdPropietario == Propietario[j].IdPropietario)
                {
                    printf("\n%s\t",Propietario[j].NomApellido);
                }
            }
            MostrarPatente(Automovil[i]);
        }
    }
}
//en modificacion

int BuscarPropietario(ePropietario Propietario[], int id)
{
    int i;
    int posicion = -1;

    for (i = 0; i < TAM_PROP; i++)
    {
        //printf("%d \n", Propietario[i].IdPropietario);
        if (Propietario[i].estado == 1 && Propietario[i].IdPropietario == id )
        {
            posicion = i;
            break;
        }
    }

    return posicion;
}

void ModificarPropietario(ePropietario Propietario[], int id)
{
    char aux[50];
    int posicion;
    posicion = BuscarPropietario(Propietario, id);


    if ( posicion == -1)
    {
        printf("No existe el Id Ingresado\n");
    }
    else
    {
        //Imprime nombre actual si lo quiere modificar lo ingresa sino sigue valiendo lo mismo
        printf("Ingrese el nuevo numero de tarjeta (%s): ", Propietario[posicion].Tarjeta);
        fflush(stdin);
        gets(aux);

        if (strcmp(aux,"") != 0 )
        {
            strcpy(Propietario[posicion].Tarjeta, aux);
        }
        /*
                //Imprime apellido actual si lo quiere modificar lo ingresa sino sigue valiendo lo mismo
                printf("Apellido (%s): ", Propietario[posicion].Direccion);
                fflush(stdin);
                gets(aux);
                if (strcmp(aux,"") != 0 )
                {
                    strcpy(Programador[posicion].  ,aux);
                }

                printf("Ingrese Categoria 1-jr, 2- semisenior, 3-Senior (%d): ", Programador[posicion].idCategoria);
                scanf("%d",&Programador[posicion].idCategoria);
        */
    }

}
int BuscaEspLibreAuto(eAutomovil Automovil[])
{
    int index = -1;
    int i;
    for (i = 0; i < TAM_AUTO; i++)
    {
        if (Automovil[i].estado == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

// Devuelve la posicion en el vector correspondiente al auto con esa patente
int BuscarAutomovil(eAutomovil Automovil[], char *patente)
{
    int i;
    int posicion = -1;

    for (i = 0; i < TAM_AUTO; i++)
    {
        //printf ("comparando %s con %s", Automovil[i].Patente, patente);
        if( Automovil[i].estado == 1 && strcmp(Automovil[i].Patente, patente) == 0 )
        {
            posicion = i;
            break;
        }
    }
    // printf("encontrado en posicion %d\n", posicion);
    return posicion;
}

void IngresarAutomovil(eAutomovil Automovil[], ePropietario Propietario[])
{
    int aux;
    int index;

    index = BuscaEspLibreAuto(Automovil);

    if (index == -1)
    {
        printf("No se puede cargar Automovil - espacio no disponible\n");
    }
    else //hay espacio libre, ingreso propietario
    {
        Automovil[index].estado = 1;

        //Valido que exista el id del Propietario, sino existe pido que ingrese un nuevo id
        do
        {
            printf("\nIngrese Id Propietario: ");
            scanf("%d", &Automovil[index].IdPropietario);
            aux = BuscarPropietario(Propietario, Automovil[index].IdPropietario);
            if (aux == -1)
            {
                printf("Propietario Inexistente, vuelva a Ingresar");
            }
        } while( aux == -1 ); // termino Valido que exista el id del Propietario

        printf("Ingrese Patente: ");
        fflush(stdin);
        gets(Automovil[index].Patente);

        do
        {
            printf("Ingrese Marca (1.Alpha Romeo, 2.Ferrari, 3.Audi, 4.Otros) : ");
            scanf("%d", &Automovil[index].Marca);
        } while (Automovil[index].Marca < 1 || Automovil[index].Marca > 4);
    }

}

void Intercambiar(eAutomovil Automovil[], int i, int j)
{
    eAutomovil auxiliar;

    auxiliar.IdPropietario = Automovil[i].IdPropietario;
    auxiliar.Marca = Automovil[i].Marca;
    strcpy(auxiliar.Patente, Automovil[i].Patente);

    Automovil[i].IdPropietario = Automovil[j].IdPropietario;
    Automovil[i].Marca = Automovil[j].Marca;
    strcpy(Automovil[i].Patente, Automovil[j].Patente);

    Automovil[j].IdPropietario = auxiliar.IdPropietario;
    Automovil[j].Marca = auxiliar.Marca;
    strcpy(Automovil[j].Patente, auxiliar.Patente);
}

void OrdenarAutomoviles(eAutomovil automovil[])
{
    int i;
    int j;

    // Ordeno la lista aunque este LIBRE ya que es mas sencillo
    for (i = 0; i < TAM_AUTO - 1; i++)
    {
        if (automovil[i].estado == 1)
        {
            for (j = i + 1; j < TAM_AUTO; j++)
            {
                if (automovil[j].estado == 1 && strcmp(automovil[i].Patente, automovil[j].Patente) > 0)
                {
                    Intercambiar(automovil, i, j);
                }
            }
        }
    }
}

float CalcularEstadia(eAutomovil Automovil, int time)
{
    float costo;
    switch(Automovil.Marca)
    {
    case ALFA_ROMEO:
        costo=150*time;
        break;

    case FERRARI:
        costo=175*time;
        break;
    case AUDI:
        costo=200*time;
        break;
    case OTROS:
        costo=250*time;
        break;
    }
    return costo;
}

int AutosDePropietario(int id, eAutomovil Automovil[])
{
    int cantidad = 0;
    int i;

    for (i = 0; i < TAM_AUTO; i++)
    {
        if (Automovil[i].estado == 1 && id == Automovil[i].IdPropietario)
        {
            cantidad++;
        }
    }

    return cantidad;
}

void EliminarPropietario(ePropietario Propietario[], int id)
{
    int i;

    for (i = 0; i < TAM_PROP; i++)
    {
        if (Propietario[i].IdPropietario == id)
        {
            Propietario[i].estado = 0;
            break;
        }
    }
}

void SalidaAutomovil(eAutomovil Automovil[], ePropietario Propietario[], float recaudacion[])
{
    int aux;
    char patente[4];

    printf("Ingresar Patente : "); //validar que sean 3 letras
    fflush(stdin);
    gets(patente);

    aux = BuscarAutomovil(Automovil, patente);
    if ( aux == -1 )
    {
            printf("El automovil no esta registrado");
    }
    else
    {
        EgresoAutomovil(Automovil, Propietario, recaudacion, aux, patente,PRINT);
    }
}
float EgresoAutomovil(eAutomovil Automovil[], ePropietario Propietario[], float recaudacion[], int pos, char patente[], int imprimir)
{
    float costo;
    char auxmarca[20];
    int time;
    int auxprop;

        time = devolverHorasEstadia();
        costo = CalcularEstadia(Automovil[pos], time);
        recaudacion[TOTAL] += costo;
        recaudacion[Automovil[pos].Marca] += costo;

        auxprop = BuscarPropietario(Propietario, Automovil[pos].IdPropietario);

        BuscarMarca(Automovil[pos].Marca, auxmarca);
        Automovil[pos].estado = 0; //Doy de el auto, libero el espacio

        if (AutosDePropietario(Propietario[auxprop].IdPropietario, Automovil) == 0)
        {//devuelve la cantidad de autos que tiene el propietario;
            EliminarPropietario(Propietario, Automovil[pos].IdPropietario); //Elimino un propietario
        }
        if ( imprimir == PRINT ) //imprime cuando print es igual 1
        {
            printf("\nTotal a abonar: %.2f", costo);
            printf("\nNombre del Propietario: %s", Propietario[auxprop].NomApellido);
            printf("\nPatente: %s \n", Automovil[pos].Patente);
            printf("Marca del Automovil: %s\n", auxmarca);
        }
    return costo;
}

void BajaPropietario(ePropietario Propietario[], eAutomovil Automovil[], float recaudacion[])
{
    int id;
    int i;
    int aux;
    float precio = 0;

    printf("\t Baja de Propietario\n");
    printf("\t=====================\n\n");
    do
    {
        printf("\nIngrese Id Propietario: ");
        scanf("%d", &id);
        aux = BuscarPropietario(Propietario, id);
        if (aux == -1)
        {
            printf("Propietario Inexistente, vuelva a Ingresar");
        }
    } while( aux == -1 ); // termino Valido que exista el id del Propietario

    for (i = 0; i < TAM_AUTO; i++)
    {
        if (Automovil[i].estado == 1 && Automovil[i].IdPropietario == id)
        {
            precio = precio + EgresoAutomovil(Automovil, Propietario, recaudacion, i, Automovil[i].Patente,NO_PRINT);
        }
    }
    printf("\nTotal a Abonar: %.2f\n",precio);
}

void RecaudacionXMarca(float recaudacion[])
{
    printf("\t Recaudacion por Marca\n");
    printf("\t=======================\n\n");
    printf("\tAlfa Romeo:\t\t%6.2f\n", recaudacion[ALFA_ROMEO]);
    printf("\tFerrari:\t\t%6.2f\n", recaudacion[FERRARI]);
    printf("\tAudi:\t\t\t%6.2f\n", recaudacion[AUDI]);
    printf("\tOtros:\t\t\t%6.2f\n", recaudacion[OTROS]);
}

void RecaudacionTotal(float recaudacion[])
{
    printf("\n\t Recaudacion Total del Estacionamiento\n");
    printf("\t=========================================\n\n");
    printf("\nRecaudacion Total: %.2f\n", recaudacion[TOTAL]);
}

void MostrarAutoXPropietario(ePropietario Propietario[], eAutomovil Automovil[], int id)
{
    int i;
    int pos;
    char nombre_marca[10];

    //MostrarPropietarios(Propietario);
    printf("Ingrese el Id del propietario: ");
    scanf("%d", &id);
    pos = BuscarPropietario(Propietario, id);
    if (pos == -1)
    {
        printf("No existe el Propietario Ingresado\n");
    }
    else
    {
        printf("\nNombre Propietario: %s\n", Propietario[pos].NomApellido);
        for(i = 0; i < TAM_AUTO; i++)
        {
            if (Automovil[i].estado == 1 && id == Automovil[i].IdPropietario)
            {
                printf("\nPatente: %s\n", Automovil[i].Patente);
                BuscarMarca(Automovil[i].Marca, nombre_marca);
                printf("Marca: %s\n\n", nombre_marca); //aca la tengo que buscar en modo nombre;
            }
        }
    }
}

void MostrarPropietarioXaudi(ePropietario Propietario[],eAutomovil Automovil[])
{
    int i;
    int j;

        printf("\t Propietarios de Autos Marca Audi\n");
        printf("\t==================================\n\n");

        for(i = 0; i < TAM_PROP; i++) //recorro Prpoietarios
        {
            if (Propietario[i].estado == 1)
            {
                for(j = 0; j < TAM_AUTO; j++)//recorro Automovil
                {
                    if (Automovil[j].estado == 1 &&  Automovil[j].Marca == AUDI
                        && Automovil[j].IdPropietario == Propietario[i].IdPropietario)
                    {
                        printf("Id de Propietario: %d\n", Propietario[i].IdPropietario);
                        printf("Nombre de Propietario: %s\n", Propietario[i].NomApellido);
                        printf("Numero de Tarjeta: %s\n", Propietario[i].Tarjeta);
                        printf("Direccion: %s\n\n", Propietario[i].Direccion);
                        break;
                    }
                }
            }
        }
}



void OrdenarPorPatente(eAutomovil Automovil[], ePropietario Propietario[])
{
    int i;
    int pos;
    char marca[10];

   OrdenarAutomoviles(Automovil);
    printf("\t Autos estacionados ordenados por patente\n");
    printf("\t==========================================\n\n");
    //imprimo los titulos de las columnas
    printf("Id\tPatente\t Marca\t\tNombre\n");

    for(i = 0; i < TAM_AUTO; i++ )
    {
        if( Automovil[i].estado == 1)
        {
            pos=BuscarPropietario(Propietario, Automovil[i].IdPropietario);
            //agrego la impresion del id del propietario
            printf("%d\t", Automovil[i].IdPropietario);
            printf( "%s\t",Automovil[i].Patente); //imprimo patente
            BuscarMarca(Automovil[i].Marca, marca);
            printf("%s\t\t", marca);//imprimo marca
            printf(" %s\n", Propietario[pos].NomApellido);//imprimo nombre y apellido

        }

    }
}
