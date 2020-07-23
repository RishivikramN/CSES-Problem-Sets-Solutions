#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
    ull n,turn=0ull,previous;
    vector<ull> v;
    cin>>n;
    while(n>0){
        ull input;
        cin>>input;
        v.push_back(input);
        n--;
    }
    previous=v[0];
    for(ull i=1;i<v.size();i++){
        if(previous>v[i])
            turn+=previous-v[i];
        else
            previous=v[i];
    }

    cout<<turn;
    return 0;
}
