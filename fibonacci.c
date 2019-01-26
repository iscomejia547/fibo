//FIBONACCI EN C, no preguntes aun, solo gozalo

#include <stdio.h>
#include <stdlib.h>

/*VARIABLES
    a: antepenultimo numero de la sucesión de f
    b: penultimo numero 
    c: suma de los dos anteriores y ultimo numero
    n: cantidad de numeros (se pide al usuario)
*/

int main(void){
    //preguntamos cuantos numeros se van a calcular
    printf("Cuantos numeros de fibonacci desea calcular?\n");
    //leemos ese numero que se ingresa
    int n;
    scanf("%i", &n);
    //la sucesion empieza con 1, 1
    int a=1, b=1;
    //aqui guardaremos la suma de a y b;
    int c=0;
    //repetiremos esto la cantidad de veces que se nos solicitó
    for(int i = 1; i <= n; i++)
    {
        //las primeras dos es 1 y 1
        if(i==1 || i==2){
            printf("1");
        }else{
            //a partir de la tercera vez el numero es la suma de los dos anteriores
            c=a+b;
            //lo mostramos
            printf("%i", c);
            //guardamos el penultimo numero en la posicion del antepenultimo para la sig vuelta
            a=b;
            //y guardamos la suma en la posicion del penultimo
            b=c;
        }
        //mientras no sea el ultimo numero ponemos una coma para que se mire bonito
        if(i<n)
        printf(", ");
    }
    //dale enter
    printf("\n");
    system("pause");
    return 0;
}