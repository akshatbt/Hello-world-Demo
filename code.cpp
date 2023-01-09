#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;

}

int main(){

    int a,b;
    cin >> a;
    cin >> b;
    int x = add(a,b);
    cout<<x;
    return 0;
}