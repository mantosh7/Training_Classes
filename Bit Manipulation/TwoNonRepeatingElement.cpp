#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len, num, ans=0;
    vector<int> vect;
    
    cout << "Enter length of array: ";
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> num;
        vect.push_back(num);
    }

    for (int i = 0; i < vect.size(); i++)
    {
        ans ^= vect[i];
    }
    int seperator = (ans & ans - 1) ^ ans;
    int b1 = 0, b2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (vect[i] & seperator)
            b1 ^= vect[i];
        else
            b2 ^= vect[i];
    }
    cout << "First Number : " << b1 << endl;
    cout << "Second Number : "<< b2;
}