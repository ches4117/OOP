#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include"Calculate.h"
using namespace std;

inline double calTotal (const string new_argv) {return stod(new_argv);}
inline int calCent (const int money, const int unit){return(static_cast<int>(money / unit));}

Calculate::Calculate(char argv[])
{
		new_argv.assign(argv);
		if(new_argv[0] < 48 || new_argv[0] > 57 || new_argv[1] !='.' || new_argv[2] < 48 || new_argv[2] > 57 || new_argv[3] < 48 || new_argv[3]>57) 
				cout<< "Error input!!" << endl;
	
		total = calTotal(new_argv);
		
		extract();
		cent();
		
		cout << fixed << setprecision(2) <<"$"<< total <<" = ";
		cout << get_quarter() << " quarters, " << get_dime() << " dimes, " << get_nickel() <<" nickels, " << get_pennie() << " pennies." <<endl;
}

Calculate::~Calculate()
{

}

void Calculate::extract()
{
		i = 0;
		integer = get_dollar();

		while(new_argv[i] != '.')
				i++;

		while(new_argv[i] != '\0')
		{
				i++;
				tmp_decimal += new_argv[i];
		}
		decimal = stoi(tmp_decimal);

		decimal = get_cent();
}

void Calculate::cent()
{
		quarter = calCent(decimal+integer*100, 25);
		decimal %= 25;

		dime = calCent(decimal, 10);
		decimal %= 10;

		nickel = calCent(decimal, 5);
		decimal %= 5;

		pennie = calCent(decimal, 1);
}
