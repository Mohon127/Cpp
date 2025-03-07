class Solution {
public:

    vector <int> primes;
    void sieve(){ 
        const int n = 1000010;
        bool prime[n + 1]; 
        memset(prime, true, sizeof(prime)); 

        for (int p = 2 ; p * p <= n; ++p) { 
            if (prime[p] == true) {  
            for (int i = p * 2 ; i <= n ; i += p) 
                prime[i] = false; 
            } 
        }  
        for (int p = 2 ; p <= n ; p++) 
            if (prime[p]) 
                primes.push_back(p); 
        }


    vector<int> closestPrimes(int left, int right) {
        sieve();
        vector<int>ans(2);
        ans[0] = -1;
        ans[1] = -1;
        int dif = INT_MAX-1;

        for(int i=0 ; i<primes.size(); i++){
            if((i+1 < primes.size() && (primes[i] >= left && primes[i+1]<=right)) && ((primes[i+1] - primes[i]) < dif)){
                ans[0] = primes[i];
                ans[1] = primes[i+1];
                dif = primes[i+1] - primes[i];
            }

            //cout << primes[i] << " ";

            if(right < primes[i]) { break;}
        }
        
        return ans;
    }
};