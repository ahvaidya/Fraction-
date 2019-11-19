#include <iostream>
#include <ostream>
class Fraction
{
 private:
  int num;
  int den;
  
 public:
  Fraction();
  Fraction(int,int);
  
  virtual ~Fraction(){};
  
  void setFract(int num1, int den1);
  int getNum();
  int getDen();
  void reduce();

  Fraction operator+(const Fraction & fraction)const;
  Fraction operator-(const Fraction & fraction)const;
  Fraction operator/(const Fraction & fraction)const; 
  Fraction operator*(const Fraction & fraction)const; 
  
  bool operator<(const Fraction & fraction) const; 
  bool operator>(const Fraction & fraction) const; 
  bool operator!=(const Fraction & fraction) const; 
  bool operator==(const Fraction & fraction) const; 
  void Display() const;
  
  friend std::istream &operator>>(std::istream &in,Fraction &frac);
  friend std::ostream &operator<<(std::ostream &out,Fraction &frac);
  
};
