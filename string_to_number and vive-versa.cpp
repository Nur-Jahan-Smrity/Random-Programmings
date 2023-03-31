//string_to_number and vive-versa.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    string l;
    cout<<"enter the string which consist of digit : "<<endl;
    cin>>l;
    int num2 = std::stoi(l);
    cout<<"string converted to integer  : "<<num2<<endl;
    string ss=to_string(num2);
    cout<<"integer converted to string  : "<<ss<<endl;
    cout<<"---------------remember stoi is used only to convert such type of string to integer--------------"<<endl;
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*
enter the string which consist of digit :
234345
string converted to integer  : 234345
integer converted to string  : 234345
---------------remember stoi is used only to convert such type of string to integer--------------
*/
