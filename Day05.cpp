#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int mul;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i=1;i<11;i++)
    {
       mul=n*i;
        cout<<n<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<mul<<endl;;
    }

    return 0;
}
