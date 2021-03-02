#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
int i =9;
cout<<i<<endl;
int *p = &i;
cout<<"pointer to i->"<<p<<endl;
cout<<"derefference pointer p like *p->"<<*p<<endl;



return 0;  
}