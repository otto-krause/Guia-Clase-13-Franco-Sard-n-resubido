#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,may,min,rt[30];
    int y=1;
    for (a=0;a<30;a++){	
printf("Ingrese las notas del alumno %d ",y);
scanf("%d",&rt[a]);
y++;
may=may+rt[a];
}
may=may/30 ;
printf("\n el promedio es %d",may);

}
