#include <bits/stdc++.h>

using namespace std;

int main(){

    string n;
    int maximum=0,count=1;
    cin>>n;
    for(int i=1;i<n.length();i++){
        if(n[i-1]!=n[i]){
            maximum=max(maximum,count);
            count=0;
        }
        count++;
    }
    cout<<max(maximum,count);

    return 0;
}
