#include<stdio.h>
int main(){
int p;
int x,fre=0;
scanf("%d",&p);
scanf("%d",&x);
while(p!=0){
p=p-(p*(x/100));
fre++;
}
printf("%d",fre);
}
