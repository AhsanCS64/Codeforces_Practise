#include <stdio.h>

int main(){
int a[5][5],row,column,count=0;
for(int i=0;i<5;i++){
  scanf("%d%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i][j]==1){row=i+1;column=j+1;}
    }
}
while(row!=3){if(row<3){row++;count++;}
    else if(row>3){row--;count++;}}

while(column!=3){if(column<3){column++;count++;}
    else if(column>3){column--;count++;}}

printf("%d",count);
}
