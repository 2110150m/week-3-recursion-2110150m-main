#include <bits/stdc++.h>

using namespace std;

int solve(int x, int y, vector<vector<int> > obstacle)
{
    int n = obstacle.size();
    if(n == 0) return 0;
    int m = obstacle[0].size();
    
    //impement your solution here
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int> > obstacle(n, vector<int>(m, 0));
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++)
            cin >> obstacle[i][j];
    
    cout << solve(0, 0, obstacle);
}
