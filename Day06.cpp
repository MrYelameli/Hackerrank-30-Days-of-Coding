#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number_of_inputs;
    cin>>number_of_inputs;
    //cout<<number_of_inputs<<endl;
    string input_word;
    string output_even_word;
    vector<string>array;
    for(int i=0;i<number_of_inputs;i++) {
        cin>>input_word;
        array.push_back(input_word);
    }
    for (int j=0;j<number_of_inputs;j++){
        string output_word=array[j];
        int length_of_word=output_word.length();
        for (int k=0;k<length_of_word;k++)
        {
            if (k%2==0)
            {
                cout<<output_word[k];
            }
        }
        cout<<" ";
        for (int k=0;k<length_of_word;k++)
        {
            if (k%2!=0)
            {
                cout<<output_word[k];
            }
        }
        cout<<endl;
    }
    return 0;
}
