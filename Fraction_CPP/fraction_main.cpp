#include "fraction.cpp"
//#include <iostream>
//using namespace std;
#include <cassert>
// Use (void) to silent unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

int main()
{
  Fraction a(12,15);
  Fraction b(-3,6);
  Fraction c(2,5);
  ;
  Fraction e;
  float expectedOutput=0;
  float actualOutput=0;
  

  /*Test 1 : Addition*/
  e=a+b+c;
  expectedOutput = (float)7/(float)10;
  actualOutput= (float)e.getNum()/(float)e.getDen();
  cout<<"Test 1 : ("<<a<<") + ("<<b<<") + ("<<c<<") = "<<e<<endl;
  assertm((expectedOutput == actualOutput),"Addition output is not matching expected output");
  
  /*Test 2 : Subtraction*/
  e=a-b-c;
  expectedOutput = (float)9/(float)10;
  actualOutput= (float)e.getNum()/(float)e.getDen();
  cout<<"Test 2 : ("<<a<<") - ("<<b<<") - ("<<c<<") = "<<e<<endl;
  assertm((expectedOutput == actualOutput),"Subtraction output is not matching expected output");
  
  /*Test 3 : Multiplication*/
  e=a*b*c;
  expectedOutput = (float)-4/(float)25;
  actualOutput= (float)e.getNum()/(float)e.getDen();
  cout<<"Test 3 : ("<<a<<") * ("<<b<<") * ("<<c<<") = "<<e<<endl;
  assertm((expectedOutput == actualOutput),"Multiplication output is not matching expected output");

  /*Test 4 : Divison*/
  e=(a/b)/c;
  expectedOutput = (float)-4/(float)1;
  actualOutput= (float)e.getNum()/(float)e.getDen();
  cout<<"Test 4 : (("<<a<<") / ("<<b<<")) / ("<<c<<") = "<<e<<endl;
  assertm((expectedOutput == actualOutput),"Divison output is not matching expected output:-4/25");

  /*Test 5 : Greater than operator*/
  /* This test case is to check function of > operator. So assumption is fraction f will always be greater than g.*/
  /* Change f and g such that f>g. Similarly, for h<i*/
  Fraction f(6,12); 
  Fraction g(6,13);
  actualOutput= (f>g)?1:0;
  expectedOutput = 1;
  //cout<<"Test 5 : (5/12) > (6/13)"<<endl;
  cout<<"Test 5 : "<<f<<" > "<<g<<endl;
  assertm((expectedOutput == actualOutput),"Greater than operator is not working");

  /*Test 6 : Lower than operator*/
  Fraction h(6,14);
  Fraction i(6,13);
  actualOutput= (h<i)?1:0;
  expectedOutput = 1;
  cout<<"Test 6 : "<<h<<" < "<<i<<endl;
  assertm((expectedOutput == actualOutput),"Lower than operator is not working");

  /*Test 7 : Equal to operator*/
  Fraction j(6,15);
  Fraction k(6,15);
  actualOutput= (j==k)?1:0;
  expectedOutput = 1;
  cout<<"Test 7 : "<<j<<" == "<<k<<endl;
  assertm((expectedOutput == actualOutput),"Equal to operator is not working");

  /*Test 8 : Not Equal to operator*/
  Fraction l(6,15);
  Fraction m(6,16);
  actualOutput= (l!=m)?1:0;
  expectedOutput = 1;
  cout<<"Test 8 : "<<l<<" != "<<m<<endl;
  assertm((expectedOutput == actualOutput),"Not Equal to operator is not working");
  
  /*Test 9 : Multiple airthmetic operations*/
  e=((a+b)*(f-g))/h;
  actualOutput= (float)e.getNum()/(float)e.getDen();
  cout<<"Test 9 : ((("<<a<<")+("<<b<<"))*(("<<f<<")-("<<g<<")))/("<<h<<") = "<<e<<endl;
  expectedOutput = float(7)/float(260);
  assertm((expectedOutput == actualOutput),"Multiple airthmetic operations not working");

  //User Interactive
  Fraction x,y,z;
  cout<<"\n User Interactive test"<<endl;
  cout<<"It will take two fraction numbers and perform all the designed operations.Please enter fraction number in a/b format"<<endl;
  cout<<"Enter first fraction number X=";
  cin>>x;
  cout<<"Enter second fraction number Y=";
  cin>>y;
  z=x+y;
  cout<<"Addition : ("<<x<<") + ("<<y<<") = "<<z<<endl;
  z=x-y;
  cout<<"Subtraction : ("<<x<<") - ("<<y<<") = "<<z<<endl;
  z=x*y;
  cout<<"Multiplication : ("<<x<<") * ("<<y<<") = "<<z<<endl;
  z=x/y;
  cout<<"Division : ("<<x<<") / ("<<y<<") = "<<z<<endl;
  if(x>y)
  {
    cout<<x<<" is greater than "<<y<<endl;
  }
  else if(x<y)
  {
    cout<<x<<" is lower than "<<y<<endl;
  }
  else
  {
    cout<<x<<" is equal to "<<y<<endl;
  }
  return 0;

}
