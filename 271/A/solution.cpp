#include <string>
#include <iostream>

using namespace std;

int Distinct(string yearC){

          bool breaker=false;

          for(int i=0;i<yearC.length();i++){
            for(int j=i+1;j<yearC.length();j++){
                if(yearC[i]==yearC[j]){return 0;}
                }
            }
            return 1;
}

int main(){

string year1;
cin>> year1;
int year=stoi(year1);
year++;
while(1){

string year2=to_string(year);
int x=Distinct(year2);
if(x==1){cout<<year2; break;}
else{year++;}
}
}
