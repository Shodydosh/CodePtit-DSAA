#include <bits/stdc++.h>

#define ll long long
#define in(n) cout<<'['<<n<<']'<<endl;
#define faster() std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

vector<int> tmp;
vector< vector<int> > ans;
int n, k;
int a[1005];

void add(){
    sort(tmp.begin(), tmp.end());
    ans.push_back(tmp);    
}

void sinh(int i, int sum = 0){
    if(sum > k) return;

    if(sum == k){
        add();
    }

    for(int j=i; j<n; j++){
        tmp.push_back(a[j]);
        sinh(j+1, sum+a[j]);
        tmp.pop_back();
    }
}

void print(){
    for(int i=ans.size()-1; i>=0; i--){
    // for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
    cout << ans.size();
}

int main(){
    faster();
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    sinh(0);
    print();
}