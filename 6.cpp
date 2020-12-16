#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,m=0,me=0,rt[20],v;
    for (a=0;a<20;a++){
printf("Ingrese el sueldo ");
scanf("%d",&rt[a]);
if(rt[a]>2000){
	m=m+1;
}else{me=me+1; }

}


printf("\n %d ganan mas de 2000 ",m);
printf("\n %d ganan menos de 2000",me);

}
