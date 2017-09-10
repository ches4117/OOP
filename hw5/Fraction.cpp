#include<iostream>
#include"Fraction.h"
using namespace std;

Fraction::Fraction()
{
		num = 0;
		denum = 1;
}
Fraction::Fraction(int numerator)
{
		num = numerator;
		denum = 1;

}
Fraction::Fraction(int numerator, int denumerator)
{
		num = numerator;
		denum = denumerator;
		if(denumerator == 0) cout << "error!!!" << endl;
}

Fraction::~Fraction()
{

}

ostream &operator<<(ostream &output,const Fraction &a)
{
		if(a.denum == 1) {output << a.num;}
		else output << a.num <<"/" << a.denum;
		return output;
}


int Fraction::getNumerator()
{
		return num;
}

int Fraction::getDenominator()
{
		return denum;
}

float Fraction::decimalValue()
{
		return (float)num / denum;
}

Fraction Fraction::operator+(const Fraction &right)
{
	Fraction a;
	a.num = this->num * right.denum + this->denum * right.num;
	a.denum = this->denum * right.denum;
	return a.simplify();	
}

Fraction Fraction::operator-(const Fraction &right)
{
	Fraction a;
	a.num = this->num * right.denum - this->denum * right.num;
	a.denum = this->denum * right.denum;
	return a.simplify();	
}
Fraction Fraction::operator-()
{
		Fraction a;
		a.num = -(this->num);
		a.denum = this->denum;
		return a.simplify();
}

Fraction Fraction::operator*(const Fraction &right)
{
	Fraction a;
	a.num = this->num * right.num;
	a.denum = this->denum * right.denum;
	return a.simplify();	
}

Fraction Fraction::operator/(const Fraction &right)
{
	Fraction a;
	a.num = this->num *  right.denum;
	a.denum = this->denum * right.num;
	return a.simplify();	
}

Fraction &Fraction::operator++()
{
		this->num = this->num + this->denum;
		return *this;
}
Fraction Fraction::operator++(int)
{
		Fraction a;;
		a = *this;
		this->num = this->num + this->denum;
		return a;
}
Fraction &Fraction::operator--()
{
		this->num = this->num - this->denum;
		return *this;
}
Fraction Fraction::operator--(int)
{
		Fraction a;
		a = *this;
		this->num = this->num - this->denum;
		return a;
}
Fraction Fraction::operator+=(const Fraction &right)
{
	this->num = this->num * right.denum + this->denum * right.num;
	this->denum = this->denum * right.denum;
	return (*this).simplify();
}
Fraction Fraction::operator-=(const Fraction &right)
{
	this->num = this->num * right.denum - this->denum * right.num;
	this->denum = this->denum * right.denum;
	return (*this).simplify();
}
Fraction Fraction::operator*=(const Fraction &right)
{
	this->num = this->num * right.num;
	this->denum = this->denum * right.denum;
	return (*this).simplify();
}
Fraction Fraction::operator/=(const Fraction &right)
{
	this->num = this->num *  right.denum;
	this->denum = this->denum * right.num;
	return (*this).simplify();
}
bool Fraction::operator==(Fraction &right)
{
		Fraction a = *this;
		Fraction b = right;

		if(a.simplify().num == right.simplify().num && a.simplify().denum == right.simplify().denum)
			return true;
		else
			return false;
}
bool Fraction::operator!=(Fraction &right)
{
		Fraction a = *this;
		Fraction b = right;

		if(a.simplify().num == right.simplify().num && a.simplify().denum == right.simplify().denum)
			return false;
		else
			return true;

}
bool Fraction::operator>(Fraction &right)
{
		Fraction a = *this;
		Fraction b = right;
		
		a.num = a.num * b.denum - a.denum * b.num;
		a.denum = a.denum * b.denum;
	
		if( a.num < 0 || a.denum < 0 || a.num == 0)
			return false;
		else 
			return true;

}

bool Fraction::operator>=(Fraction &right)
{
		Fraction a = *this;
		Fraction b = right;
		
		a.num = a.num * b.denum - a.denum * b.num;
		a.denum = a.denum * b.denum;
	
		if( a.num < 0 || a.denum < 0)
			return false;
		else 
			return true;
}
bool Fraction::operator<(Fraction &right)
{
		Fraction a = *this;
		Fraction b = right;
		
		a.num = a.num * b.denum - a.denum * b.num;
		a.denum = a.denum * b.denum;
	
		if( a.num < 0 || a.denum < 0)
			return true;
		else 
			return false;
}
bool Fraction::operator<=(Fraction &right)
{
		Fraction a = *this;
		Fraction b = right;
		
		a.num = a.num * b.denum - a.denum * b.num;
		a.denum = a.denum * b.denum;
	
		if( a.num < 0 || a.denum < 0 || a.num == 0)
			return true;
		else 
			return false;
}
Fraction Fraction::simplify()
{
		int a, b;
		if( (num > 0 && denum < 0) ||(num < 0 && denum < 0))
		{
				num = -num;
				denum = -denum;
		}
		a = num;
		b = denum;
		div	=  gcd(a, b);
		
		if(div < 0) div = -div;
		num /= div;
		denum /= div;
		return *this;
}

int Fraction::gcd(int a, int b)
{
		int c;
		while ( a != 0 ) {
				c = a; a = b%a;  b = c;
		}
		return b;
}


