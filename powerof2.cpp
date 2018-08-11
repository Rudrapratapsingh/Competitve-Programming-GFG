#include<cmath>
using namespace std;
bool isPowerOfTwo (int x)
{
  return x && (!(x&(x-1)));
}
int main(){
    long long int n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        bool b = n && (!(n&(n-1)));
        b?cout<<"YES\n":cout<<"NO\n";
    }
}
