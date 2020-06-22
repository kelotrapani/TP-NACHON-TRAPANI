#include <stdio.h>
#include <stdlib.h>
void ingreso(int numsucur[5],float totalreca[5]);
void busqueda(int numsucur[5],int auxbuscar,float totalreca[5],float diatot);
void mayor800(int numsucur[5];float totalreca,float masde800[5],int j);
void ordenamiento(int numsucur[5],float totalreca[5],float mas800[5],int j);
int main()
{
    int numsucur[5],auxbuscar,j=0,i;
    float totalreca[5],diatot[5],mas800[5],TP;

    ingreso(numsucu,totalreca);
    busqueda(numsucur,totalreca,diatot);
    mayor800(numsucur,totalreca,masde800,j);
    ordenamiento( numsucur,totalreca,mas800,j);

for(i=0;i>5;i++)
{
printf("PROBANDO PRIMERA RAMA");
printf("numero de sucursal:%d",numsucur[i]);
printf("total: %d",totalreca[i]);

}

    printf("las sucursales que obtuvieron mas de $800 son: ",);
for(i=0;i>j;j++)
{
    printf("%f",mas800[i]);
}
return 0 ;

}













void ingreso(int numsucur[5],float totalreca[5])
{
for (i=0;i<5;i++)
{
printf("ingrese su numero de sucursal");
scanf("%d",& numsucur[i]);
printf("ingrese el total obtenido en $");
scanf("%f",& totalreca[i]);
}
}












void busqueda(int numsucur[5],int auxbuscar[5],float totalreca[5],float diatot)
{
int i,h,sucursal=0;


printf("ingrese el nuemero de sucursal que quiere buscar ponga (0 para finalizar)");
sacanf("%d",& auxbuscar);

while (auxbuscar[i] !=0)
{
 k=0;
 i=0;

 while(k==0 && i>5)
    {
if(auxbuscar== numsucur[i])
{
    k=1;
    sucursal=i;
}
else
{
i++;
}
    }
if(k==0)
{
    printf("su numero de sucursal no existe");

}
else
{
printf("ingrese cuanto recaudo en el dia");
sacnf("%f",& diatot);
totalreca[sucursal]+=diatot;
}

printf("ingrese el nuemero de sucursal que quiere buscar ponga (0 para finalizar)");
sacanf("%d",& auxbuscar);
}
}











void ordenamiento(int numsucur[5],float totalreca[5],float mas800[5],int i)
{
int x=5,aux,i,k=0;
while(k==0)
{
k=1;
x--;

for(i=0;i<x;i++)
{
if (numsucur[i] < numsucur[i+1])
{
aux = numsucur[i];
numsucur[i] = numsucur[i+1];
numsucur[i+1] = aux;

aux = totalreca[i];
totalreca[i] = totalreca[i+1];
totalreca[i+1]= aux;
k=0;
}
}
}

k=0
x=j+1;
while(k==0)
{
k=1;
x--;
for(i=0;i<x;i++)
{
if (mas800[i] < mas800[i+1])
{
aux = mas800[i];
mas800[i] = mas800[i+1];
mas800[i+1] = aux;
k=0;
}
}
}
}









void mayor800(int numsucur[5],float totalreca[5],float mas800[5],int j)
{
int i;

for(i=0,i<5,i++)
{
 if(totalreca[i] > 800)
 {
    mas800[j]=numsucur[i];
    j++;
 }
}
}
