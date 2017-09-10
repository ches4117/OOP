#include<iostream>
using namespace std;
class Fraction
{
	friend ostream &operator<<(ostream &, const Fraction&);
		
	public:
		Fraction();
		Fraction(int);
		Fraction(int, int);
		~Fraction();
		Fraction operator+(const Fraction &);
		Fraction operator-(const Fraction &);
		Fraction operator-();
		Fraction operator*(const Fraction &);
		Fraction operator/(const Fraction &);
		Fraction &operator++();
		Fraction &operator--();
		Fraction operator++(int);
		Fraction operator--(int);
		Fraction operator+=(const Fraction &);
		Fraction operator-=(const Fraction &);
		Fraction operator*=(const Fraction &);
		Fraction operator/=(const Fraction &);
		bool operator==(Fraction &);
		bool operator!=(Fraction &);
		bool operator>(Fraction &);
		bool operator<(Fraction &);
		bool operator>=(Fraction &);
		bool operator<=(Fraction &);
		int getNumerator();
		int getDenominator();
		float decimalValue();
		Fraction simplify();
		int gcd(int, int);

	private:
		int num, div;
		int denum;
};
