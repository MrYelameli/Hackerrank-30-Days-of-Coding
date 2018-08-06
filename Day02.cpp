#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, float tip_percent, float tax_percent) {
      
    meal_cost=meal_cost+(meal_cost*(tip_percent/100))+(meal_cost*(tax_percent/100));
    cout<<"The total meal cost is "<<fixed<<setprecision(0)<<meal_cost<<" dollars.";
    

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
