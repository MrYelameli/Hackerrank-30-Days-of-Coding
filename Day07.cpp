/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <vector>
#include <iostream>
#include <string>
int main()
{
std::vector<std::string> array;
std::string c;
for (int i=0;i<2;i++){
  std::cin>>c;
  array.push_back(c);
 
}

  //std::cout<<array.capacity()<<std::endl;
 //std::cout<<array.size()<<std::endl;
 //std::cout<<array[1]<<std::endl;
 //std::cout<<array.begin()<<endl;
 std::string ss=array.front();
 std::cout<<array.front-1()<<std::endl;
 std::cout<<ss<<std::endl;
 std::cout<<ss.length()<<std::endl;
 int a=ss.length();
 std::cout<<a<<std::endl;
 
}
