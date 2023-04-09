#include <bits/stdc++.h>

using namespace std;

vector<string> powerSet;

void power_set(string s, string subset, int index)
{
    if (s.size() == index)
    {
        cout<<subset<<"";
        return;
    }
    
    int n = s.size();
    power_set(s, subset + s[index], index+1);
    
     power_set(s, subset, index+1);
     return;
    
}

//do not modify below code
int main()
{
    string s;
    cin >> s;

    power_set(s, "", 0);

    sort(powerSet.begin(), powerSet.end());

    for(auto it : powerSet)
        cout << it << '\n';
    return 0;
}
