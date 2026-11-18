#include <iostream>
using namespace std;
int main(){
    int n,couunt,i=0;
cin>> n >> couunt;
string s;
cin>> s;

for(i;i<couunt;i++){
    for(int j=0;j<n;j++){
        if(s[j]=='B'&&s[j+1]=='G'){s[j]='G';s[j+1]='B';j++;}
    }
}

cout<<s<<endl;



}
