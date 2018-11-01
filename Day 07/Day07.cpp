#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n;
    vector<int>array;
    cin >> n;
    int digit;
    for (int i=0;i<n;i++)
    {
        cin >> digit;
        array.push_back(digit);
    }
    for (auto j=array.rbegin();j != array.rend(); ++j)
    {
        cout << *j << " ";
    }
}
