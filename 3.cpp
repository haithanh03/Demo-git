#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
typedef long long ll;
//#define f first
//#define s second
//typedef for(int i = 0 ; i < n ; i++) for(i,n,1)
bool cmpRev(const int& a, const int& b){
    return a > b;
}

bool cmp(const int& a, const int& b){
    return a < b;
}

//vector<vector<bool>> check(n, vector<bool> (m,false));
int power(int x, unsigned int y, int p)
    {
        int res = 1;
        x = x % p;

        while (y > 0)
        {
            //
            if (y & 1)
                res = (res*x) % p;

            // y must be even now
            y = y>>1; // y = y/2
            x = (x*x) % p;
        }
        return res;
    }

    bool miillerTest(int d, int n)
    {

        int a = 2 + rand() % (n - 4);

        // Compute a^d % n
        int x = power(a, d, n);

        if (x == 1  || x == n-1)
           return true;
        while (d != n-1)
        {
            x = (x * x) % n;
            d *= 2;

            if (x == 1)      return false;
            if (x == n-1)    return true;
        }
        return false;
    }

    bool isPrime(int n, int k)
    {
        // Corner cases
        if (n <= 1 || n == 4)  return false;
        if (n <= 3) return true;
        int d = n - 1;
        while (d % 2 == 0)
            d /= 2;

        for (int i = 0; i < k; i++)
             if (!miillerTest(d, n))
                  return false;

        return true;
    }
    /*
    bool check_primeChild(int n){
       stringstream ss;
       ss << n;
       string str = ss.str();
       if(str.find(p) != std::string::npos) return true;
       else return false;
    }

*/
int Slide(int n){
    int sum = 0;
    while(n != 0){
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

bool check(int a , int b, int c){
    if(a+b > c and a+c>b and b+c>a) return true;
    return false;
}

bool check(int n){
    int tmp = n%10;
    int ans = n;
    int maxx = 0;
    while(n != 0){
        int div = n % 10;
        if(maxx < div) maxx = div;
        n /= 10;
    }
    if(tmp ==  maxx and isPrime(ans,4)) return true;
    return false;

}

bool Sort_pair_f(const pair<int,int> &l , const pair<int,int> &r){
    return l.first < r.first;
}

bool Sort_pair_s(const pair<int,int> &l , const pair<int,int> &r){
    return l.second > r.second;
}

const long long MOD = 1e9 + 7;

void OutofSet(const multiset<int> &s){
    for(auto x : s){
        cout << x << " ";
    }
    cout << endl;
}

/*void CountBigger(vector<int> v, int x, int n){
   int tmp =
}*/

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      vector<int> cnt(26,0) , dirr(26,0);
      for(auto x : s){
        cnt[x - 'a']++;
      }
      int ans = 0;
      int curr;
       for(int i = 0 ; i < n ; i++){
           cnt[i]--;

       }
    }
    return 0;
}
