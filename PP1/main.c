#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    ePropietario Propietario[TAM_PROP];
    eAutomovil Automovil[TAM_AUTO];
    int opcion;
    int id;
    float recaudacion[5] = {0.0, 0.0, 0.0, 0.0, 0.0};


    InicializarProp(Propietario);
    CargarPropietarios(Propietario);

    InicializarAutomovil(Automovil);
    CargarAutomoviles(Automovil);

    do
    {
        MostrarMenu();
        opcion = EntrarEntero();

        switch(opcion)
        {
        case 1:
            // Alta de Propietario
            AltaPropietario(Propietario);
            //MostrarPropietarios(Propietario);
            system("pause");
            break;

        case 2:
            // Modificacion de Propietario
            system("cls");
            MostrarPropietarios(Propietario);
            system("pause");
            printf("Ingrese ID del Propietario a Modificar: \n");
            scanf("%d",&id);
            ModificarPropietario(Propietario,id);
            system("pause");
            break;

        case 3:
            // Baja de Propietario
            system("cls");
            BajaPropietario(Propietario, Automovil, recaudacion);
            system("pause");
            break;

        case 4:
            // Ingreso de Automovil
            system("cls");
            IngresarAutomovil(Automovil,Propietario);
            system("pause");
            break;

        case 5:
            system("cls");
            printf("\n\t Egreso de Automovil\n");
            printf("\t=====================\n\n");
            MostrarPatentesVigentes(Automovil,Propietario);
            system("pause");
            SalidaAutomovil(Automovil, Propietario, recaudacion);
            system("pause");
            break;

        case 6:
            system("cls");
            RecaudacionTotal(recaudacion);
            system("pause");
            break;

        case 7:
            system("cls");
            RecaudacionXMarca(recaudacion);
            system("pause");
            break;

        case 8:
            system("cls");
            MostrarAutoXPropietario(Propietario, Automovil,  id);
            system("pause");
            break;

        case 9:
            system("cls");
            MostrarPropietarioXaudi(Propietario,Automovil);
            system("pause");
            break;

        case 10:
            system("cls");
            OrdenarPorPatente(Automovil, Propietario);
            system("pause");
            break;

        case 11:
            opcion = 0;
            break;

     //  default:
       //     printf("\nOpcion invalida, vuelva a ingresar\n");
           // system("pause");
        }
    } while (opcion != 0);

    return 0;
}
