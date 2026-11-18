#include <iostream>
using namespace std;

int main(){
    string borzecode;
    string decode="";
    int counter=0;
    cin>> borzecode;
    for(int i=0;i<borzecode.length();i++){
        if(borzecode[i]=='.'){decode+='0';}
        else if(borzecode[i]=='-' && borzecode[i+1]=='.'){decode+='1';i++;}
        else if(borzecode[i]=='-' && borzecode[i+1]=='-'){decode+='2';i++;}
    }
cout<<decode;

}
