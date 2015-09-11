#include <iostream>
#include <cmath>
using namespace std;
void solve_equation(double a, double b, double c) {
  if((b*b-4*a*c)>0 && a!=0)
  {
      cout<<((-b)+sqrt(b*b-4*a*c))/(2*a);
      cout<<((-b)-sqrt(b*b-4*a*c))/(2*a);
  }
else if((b*b-4*a*c)==0&&a!=0)
{
    cout<<(-b)/(2*a);
}
else if (a==0)
{
    cout<<(-c)/b;
}

else{
    cout<<"Решений бесконечное число"<<endl;
}
}
int main()
{
    double a,b,c;
cout<<"a :";
cin>>a;
cout<<"b :";
cin>>b;
cout<<"c :";
cin>>c;
solve_equation(a,b,c);
    return 0;
}
