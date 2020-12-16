#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,my,mi,rt[20],v;
    int y=1;
    for (a=0;a<20;a++){
printf("Ingrese el total de unidades vendidas en 15 dias %d ",y);
scanf("%d",&rt[a]);
y++;
}
for (a=0;a<20;a++){
if (y=1){
    my=rt[a]/15;
    v=y;
}
}
for (a=0;a<20;a++){
if ((rt[a]/15)>my){
    my=rt[a]/15;
    v=y;
}
mi=mi+rt[a];
}


printf("\n El total es %d",mi);
printf("\n La mayor venta diaria es %d por el vendedor %d",my,v);
}
