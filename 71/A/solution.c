#include <stdio.h>

int main(){
int n;
int length;
scanf("%d",&n);
char arr[99];
for(int i=0;i<=n-1;i++){
    scanf("%s",arr);
    length = strlen(arr);
    if(length>10){
        printf("%c",arr[0]);
        printf("%d",length-2);
        printf("%c",arr[length-1]);
    }
    else{printf("%s",arr);}
    printf("\n");

}
}
