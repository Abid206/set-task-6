#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    op();
    set<int> s;

    int n,a;
    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        s.insert(a);
    }
    if(s.size()==1) cout<< "NO"<<endl;
    else
    {
        cout<< *(++s.begin())<<endl;
    }

    return 0;
}








