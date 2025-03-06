class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            map<int,int>mp;
            int n = grid.size(), m;
            m = n*n;
    
            for(int i=0; i<n; i++){
                for(int j=0; j < n; j++){
                    mp[grid[i][j]]++;
                }
            }
    
            vector<int>v(2,0);
            for(int i=1 ; i<= m ; i++){
                if(mp[i] == 2){
                    v[0] = i;
                }else if(mp[i] == 0){
                    v[1] = i;
                }
            }
    
            return v;   
        }
    };