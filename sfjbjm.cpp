#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    vector<int> nums(n);
    for(int i=0 ;i<n ;i++){
        cin >> nums[i];
    }
    int k ;
    cin >> k; 
    vector<vector<int>> dtob(n, vector<int>(32));
    vector<vector<int>> prefix(n, vector<int>(32));
    // Iterate through each number and convert it to binary representation
    for (int i = 0; i < n; ++i)
    {
        int num = nums[i];
        for (int j = 0; j < 32; ++j)
        {
            dtob[i][j] = ((num >> j) & 1);
        }
    }
    prefix[0] = dtob[0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 32; ++j)
        {
            prefix[i][j] = prefix[i - 1][j] + dtob[i][j];
        }
    }
    cout << endl
         << endl;
    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < 32; ++i)
        {
            cout << prefix[j][i];
        }
        cout << endl;
    }
    int minLength = INT_MAX;
    int l = 0, cur = 0;
    for (int r = 0; r < n; r++)
    {
        // cout <<"index=" <<  r << endl;
        cur |= nums[r];
        if (cur < k)
            continue; // If the current subarray doesn't meet the condition, move r pointer]
        // cout << "cur=" << cur << endl;
        // cout << "outer  "  << r << endl;
        // Shrink the window from the l side until the condition is met
        // cout <<"WHILE KE ANDAR JAA RAHA HUN"  << endl;
        while (cur >= k)
        {
            if (cur >= k)
            {
                cout << "CURR WAALA IF" << cur << endl;
                minLength = min(minLength, r - l + 1);
            }
            // if (l == r)
            // {
            //     break;
            // }
            cout << "inner   " << r << "  l=" << l << endl;
            int temp = 0;
            // cout << "JA RAHA HUN FOR LOOP KE ANDAR" << endl;
            for (int i = 0; i <= 31; i++)
            {
                if (l == 0)
                {
                    // cout << "ZERO WAALA IF" << endl;
                    // cout<< "l=" << l << "   " <<"r=" <<  r <<"   " <<   "i=" << i << endl;
                    int x = prefix[r][i] - prefix[0][i];
                    // cout << "x=" << x << endl;
                    if (x != 0)
                        temp = (temp | (1 << (i)));
                }
                else
                {
                    // cout << "ZERO KE OPPOSITE WAALA IF" << endl;
                    int x = prefix[r][i] - prefix[l - 1][i];
                    // cout << "x=" << x << endl;
                    if (x)
                        temp = (temp | (1 << (i)));
                }
                // cout <<"temp=" <<  temp << endl;
            }
            // cout << "FOR LOOP SE BAHAR AA GAYA" << endl;
            cout << "hello= " << temp << endl;
            cur = temp;
            l++;
        }
        // cout <<"WHILE KE BAHAR AA GAYA HUN"  << endl << endl;
    }

    if (minLength == INT_MAX)
        cout << -1 << endl;
    else
        cout << minLength << endl;
    return 0;
}
