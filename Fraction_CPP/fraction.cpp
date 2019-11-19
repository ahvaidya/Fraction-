#include "fraction.h"
#include<cstdlib>
using namespace std;


ostream &operator<<(ostream &out,Fraction &frac)
{
  cout<<frac.num<<'/'<<frac.den;
  return cout;
}

istream &operator>>(istream &in,Fraction &frac)
{
  char ch;
  cin>>frac.num>>ch>>frac.den;
  if (frac.den==0)
  {
    cout<<"denominator is 0,Not possible \n";
    exit(0);
  }
  if(ch!='/')
  {
    cout<<"format error"<<endl;
    exit(0);
  }
  return cin;
}

//Default constructor
Fraction::Fraction() 
{
  num = 0;
  den = 1;
}

//parameterized constructor
Fraction::Fraction(int num1,int den1)
{
  if(den1==0)
  {
    cout<<"Denominator can not be zero"<<endl;
    exit(0);
  }
  num = num1;
  den = den1;
  reduce();

}

// result=greatestCommonDivisor(a,b)
int gcd(int a, int b) 
{

	while (a != b) 
    {
      if (a > b) 
      {
        a -= b;
      } 
      else 
      {
        b -= a;
      }
    }
    return a;
}

void Fraction::reduce()
{
  
  int sign = 1;
  if (num < 0) 
  {
    sign=sign*-1;
    num=num*-1;
  }
  if(den < 0)
  {
    sign=sign*-1;
    den=den*-1;
  }
  int temp=gcd(num,den);
  num=num/temp * sign;
  den=den/temp;
  return;
}


Fraction Fraction::operator+(const Fraction& rightObj)const
{
  Fraction result(this->num*rightObj.den + this->den*rightObj.num, this->den*rightObj.den);
  return result;
}

Fraction Fraction::operator-(const Fraction& rightObj)const 
{
  Fraction result(this->num*rightObj.den - this->den*rightObj.num, this->den*rightObj.den);
  return result;
}

Fraction Fraction::operator*(const Fraction& rightObj) const
{
  Fraction result(this->num*rightObj.num,this->den*rightObj.den);
  return result;
}

Fraction Fraction::operator/(const Fraction& rightObj)const 
{
  Fraction result(this->num*rightObj.den,this->den*rightObj.num);
  return result;
}

bool Fraction::operator>(const Fraction& rightObj)const 
{
  int num1=this->num*rightObj.den;
  int num2=this->den*rightObj.num;
  return ((num1>num2)?1:0);
}

bool Fraction::operator<(const Fraction& rightObj)const 
{
  int num1=this->num*rightObj.den;
  int num2=this->den*rightObj.num;
  return ((num1<num2)?1:0);
}

bool Fraction::operator==(const Fraction& rightObj)const 
{
  int num1=this->num*rightObj.den;
  int num2=this->den*rightObj.num;
  return (((this->num==rightObj.num) && (this->den==rightObj.den))?1:0);
}

bool Fraction::operator!=(const Fraction& rightObj)const 
{
  return(!((*this)==rightObj)?1:0);
}

void Fraction::Display() const 
{ 	
  cout<<this->num<<"/"<<this->den;
}

//Get numerator of fraction number
int Fraction::getNum()
{
  return this->num;
}

//Get denominator of fraction number
int Fraction::getDen()
{
  return this->den;
}
