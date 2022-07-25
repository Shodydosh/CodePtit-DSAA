#include <bits/stdc++.h>

#define ll long long
#define in(n) cout<<'['<<n<<']'<<endl;
#define faster() std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int a[1005];
int n;

void solve(){
    int left = 0, right = n-1;

    //check thuan nghich
    while(left < right){
        if(a[left] != a[right]){
            // khong thuan nghich
            return;
        }
        left++, right--;
    }

    //da check thi print
    for(int i=0; i<n; i++) cout << a[i] << ' ';
    cout << endl;
    
}

void sinh(int i){
    for(int j=0; j<=1; j++){
        a[i] = j;
        if(i == n-1) solve();
        else sinh(i+1);
    }
}

int main(){
    faster();
    cin >> n;
    sinh(0);
}