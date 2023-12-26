#include<bits/stdc++.h>
using namespace std;



int main(){
    int n, target = 0, x; cin >> n;
    int num[n];
    for(int i=0; i<n; i++) cin >> num[i];

    cin >> x;

    //finiding 
    int min = INT_MAX, flag=0;
    //cout << min;
    for(int i=0; i<n; i++){
        if(num[i]<x && (x - num[i])<min){
            min  = x - num[i];
            target = num[i];
            ++flag;
        }
    }

    int max = INT_MAX, target1=0, flag1=0;
    //cout << max;
    for(int i=0; i<n; i++){
        if(num[i]>x && (num[i]-x) < max){
            max  = num[i] - x;
            target1 = num[i];
            ++flag1;
        }
    }

    //Printing lesser value
    if(flag!=0) cout << target << endl;
    else cout << "No lesser value available.\n";

    //Printing nearest greater value
    if(flag1!=0) cout << target1 << endl;
    else cout << "No greater value available.\n";

    return 0;
}