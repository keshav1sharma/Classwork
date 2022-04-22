#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int n,sum;
    cout<<"Sum of first 'n' natural numbers \n";
    cout<<"Enter upto what number you want the sum : ";
    cin>>n;
    sum = n*(n+1)/2;
    cout<<"Sum upto "<<n<<" natural numbers is : "<<sum;
    return 0;
}