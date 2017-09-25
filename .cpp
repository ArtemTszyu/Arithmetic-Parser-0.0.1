#include <iostream>

using namespace std;

int main()
{
  int a,b,r;
  char op, op1;
    cin>>a;
    cin>>op;
  if (op=='>') {cin>>op1;}
  else if(op=='<') {cin>>op1;}
    cin>>b;
  if(op=='+'){
              r=a+b;
              cout<<"result: "<<r;
  }
  else if(op=='-'){
                    r=a-b;
                    cout<<"result: "<<r;
  }
  else if(op=='*'){
                    r=a*b;
                    cout<<"result: "<<r;
  }
  else if(op=='/') {if (b==0 && a!=0) 
                    {cout <<"inf";}
                      else if (a==0 && b==0) {cout<<"nan";}
                      else  {r=a/b; cout<<"result: "<<r;}
  }

  else if (op=='&') {
                      r=a&b;
                     cout<<"result: "<<r;
  }
  else if(op=='%'){
                   r=a%b;
                   cout<<"result: "<<r;
  }
  else if(op=='|'){
                   r=a|b;
                   cout<<"result: "<<r;
  }
  else if(op=='^'){
                   r=a^b;
                   cout<<"result: "<<r;
  }
  else if(op=='<' op1=='<'){
                            r =a << b;
                            cout<<"result: "<<r;
  else if (op=='<', op1=='>'){
                              cout<<"Error";
  }

  }
  else if(op=='>', op1='>'){
                            r =a >> b;
                            cout<<"result: "<<r;
  }
}
