#include <bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,d,e;
vector<int> v;
cin >> n;
for(int i=0;i<n;i++){
    cin >> b;
    for(int j=0;j<b;j++){
        string s;
        cin >> s;
        for(int k=0;k<s.size();k++){
            if(s[k]=='#'){v.emplace_back(k+1);}
        }
    }
    reverse(v.begin(),v.end());
    for(auto c:v){ cout << c << " ";}
    cout<<endl;
    v.clear();
}

}
