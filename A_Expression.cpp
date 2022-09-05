#include <bits/stdc++.h> 
 
using namespace std;
 
void solve(){
 
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr;
    for(int it=1;it<=3;it++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    int out = arr[0] * arr[1] * arr[2];
    out = (out > arr[0]+arr[1]+arr[2]) ? out : arr[0]+arr[1]+arr[2];
    out = (out > arr[0] * (arr[1]+arr[2])) ? out : arr[0] * (arr[1]+arr[2]);
    out = (out > (arr[2]*(arr[0]+arr[1]))) ? out : (arr[2]*(arr[0]+arr[1]));
    out = (out > (arr[0]*(arr[2]+arr[1]))) ? out : (arr[0]*(arr[2]+arr[1]));
    out = (out > (arr[2]*(arr[0]+arr[1]))) ? out : (arr[2]*(arr[0]+arr[1]));

    cout << out << endl;
 
    return 0;
}