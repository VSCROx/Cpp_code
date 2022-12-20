#include <iostream>
using namespace std;

#define INT_MAX 999999
int n = 4;
int dp[16][4];

int dist[10][10] = {
    {0,20,42,25},
    {20,0,30,34},
    {42,30,0,10},
    {25,34,10,0}
};

int VISITED_ALL = (1<<n) - 1;

int tsp(int mask, int pos){
    if(mask == VISITED_ALL){
        return dist[pos][0];
    }
    
    if(dp[mask][pos] != -1){
        return dp[mask][pos];
    }
    
    int ans = INT_MAX;
    
    for(int city=0; city<n; city++){
        if((mask&(1<<city)) == 0){
            int newAns = dist[pos][city] + tsp(mask|(1<<city), city);
            ans = min(ans, newAns);
        }
    }
    
    return dp[mask][pos] = ans;
}

int main() {
    
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            dp[i][j] = -1;
        }
    }
    
    cout<<tsp(1,0)<<endl;
    return 0;
}


//****************************   LCS   ********************************************
#include <iostream>
#include<vector>
#include<string>
using namespace std;

int solve(string& a, string& b, int i, int j, vector<vector<int>> & dp){
    if(i==a.length()){
        return 0;
    }
    if(j==b.length()){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    
    int ans = 0;
    if(a[i] == b[j]){
        ans = 1 + solve(a,b,i+1,j+1,dp);
    }
    else{
        ans = max(solve(a,b,i+1,j,dp), solve(a,b,i,j+1,dp));
    }
    
    return dp[i][j] = ans;
}

int longestCommonSubsequence(string text1, string text2){
    vector<vector<int> > dp(text1.length(), vector<int> (text2.length(), -1));
    return solve(text1,text2,0,0,dp);
}

int main() {
    
    cout<<longestCommonSubsequence("stone", "longest")<<endl;

    return 0;
}

//****************************   0/1 Knapsack   ********************************************
#include <iostream>
#include<vector>

int solveMem(vector<int>& weight, vector<int>& value, int value, int index, int capacity, vector<vector<int>>& dp){
    if(index == 0){
        if(weight[0] <= capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    
    if(dp[index][capacity] != -1){
        return dp[index][capacity];
    }
    
    int include = 0;
    if(weight[index] <= capacity){
        include = value[index] + solveMem(weight,value,index-1,capacity-weight[index],dp);
    }
    int exclude = 0 + solveMem(weight, value, index-1, capacity,dp);
    
    dp[index][capacity] = max(exclude, include);
    return dp[index][capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight){
    vector<vector<int> > dp(n, vector<int>(maxWeight+1, -1));
    return solveMem(weight,value,n-1,maxWeight,dp);
}
