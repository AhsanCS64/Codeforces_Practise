#include <stdio.h>
int main(){
int n,suma=0,sumb=0,sumc=0;
scanf("%d",&n);
int a[n],b[n],c[n];
for(int i=0;i<n;i++){
    scanf("%d%d%d",&a[i],&b[i],&c[i]);
    suma+=a[i];
    sumb+=b[i];
    sumc+=c[i];
}

if(suma==0&&sumb==0&&sumc==0){
    printf("YES\n");
}
else{
    printf("NO\n");
}
}
