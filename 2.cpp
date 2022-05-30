//Write a program in C++ to find the sum of first 10 natural numbers.
#include<iostream>

using namespace std;
int  main()
{
    int sum=0;
    cout<<"The sum of  first  10 natural  numbers  is:\n";
    for(int i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}