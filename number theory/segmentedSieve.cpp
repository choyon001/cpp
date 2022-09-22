#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';


// Create function to find all primes smaller than limit
//    using simple sieve of eratosthenes.
void simpleSieve( int limit , vector<int> &prime){
    vector<bool> tempPrime(limit+1,true);
    tempPrime[0]=tempPrime[1]=false;
    
    for(int i=2;i<=limit;i++){
        if(tempPrime[i]){
            prime.push_back(tempPrime[i]);
            for(int j = i*i;j<=limit;j=j+i){
                tempPrime[j]=false;
            }
        }
    }
}

// now make another sieve for the range of the low and high 

void primeInRange(long long int low , long long high){
    int limit = floor(sqrt(high))+1;
    vector<int> prime;
    simpleSieve(limit,prime);
    int n = high -low+1;
    vector <bool> vprme(n+1,true);
    // chcecking the factor of prime 
    for(auto u:prime){
        // find the low limit 
        int lowlimit = floor(low / u)*u;
        if(lowlimit<low){
            lowlimit+=u;
        }
        for(long long int j = lowlimit;j<=high;j+=j+u){
            vprme[j-low]=false;
        }
    }
    for (int i = low; i <= high; i++)
      if (!vprme[i - low])
         cout << i << " ";

}
int main(){
    int low = 10, high = 50;
    primeInRange(low, high);
    return 0;
}