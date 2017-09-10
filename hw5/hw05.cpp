#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Fraction.h"
using namespace std;

int main(void){

  Fraction frac1;
  Fraction frac2( 2 );
  Fraction frac3( 6, -8 );

  cout << endl;
  cout << "+---------------------------------------------------+\n";
  cout << "|         OOP HW #5 (Overloading: Fraction)         |\n";
  cout << "+------------+--------------------------------------+\n";
  cout << "|   Author   |             silenttulips             |\n";
  cout << "+------------+--------------------------------------+\n";
  cout << "|          Copyleft 2015 No right reserved          |\n";
  cout << "+---------------------------------------------------+\n";

  cout << endl;
  cout << "/////////////////////\n";
  cout << "//Counstructor Test//\n";
  cout << "/////////////////////\n";
  cout << endl;
  cout << "+-------------------------+-------------------------+\n";
  cout << "| constructor             | output                  |\n";
  cout << "+-------------------------+-------------------------+\n";
  cout << "| Fraction frac1( void )  | frac1 = " << frac1 << "             |\n";
  cout << "| Fraction frac2( 2 )     | frac2 = " << frac2 << "             |\n";
  cout << "| Fraction frac3( 6, -8 ) | frac3 = " << frac3 << "            |\n";
  cout << "| Fraction frac4( 5, 0 )  | error msg as following  |\n";
  cout << "+-------------------------+-------------------------+\n";
  cout << "/* Error Msg if denominator being zero */\n";
  Fraction frac4( 5, 0 );

  cout << endl;
  cout << "/////////////////\n";
  cout << "//Accessor Test//\n";
  cout << "/////////////////\n";
  cout << endl;

  cout << "+------------------+--------------------------------+\n";
  cout << "| accessor         | output                         |\n";
  cout << "+------------------+--------------------------------+\n";
  cout << "| getNumerator()   | frac3.getNumerator()   = " << frac3.getNumerator() << "     |\n";
  cout << "| getDenominator() | frac3.getDenominator() = " << frac3.getDenominator() << "    |\n";
  cout << "| decimalValue()   | frac3.decimalValue()   = " << frac3.decimalValue() << " |\n";
  frac3.simplify();
  cout << "| simplify()       | frac3 = " << frac3 << "                   |\n";
  cout << "+------------------+--------------------------------+\n";

  cout << endl;
  cout << "////////////////////\n";
  cout << "//Overlaoding Test//\n";
  cout << "////////////////////\n";
  cout << endl;
  
  cout << "+-------------+-------------------------------------+\n";
  cout << "| overlaoding | output                              |\n";
  cout << "+-------------+-------------------------------------+\n";
  cout << "| <<          | frac2 = " << frac2 << ", frac3 = " << frac3 << "           |\n";
  cout << "| +           | frac2 + frac3 = " << frac2 + frac3 << "                 |\n";
  cout << "| unary -     | - frac3 = " << - frac3 << "                       |\n";
  cout << "| binary -    | frac2 - frac3 = " << frac2 - frac3 << "                |\n";
  cout << "| *           | frac2 * frac3 = " << frac2 * frac3 << "                |\n";
  cout << "| /           | frac2 / frac3 = " << frac2 / frac3 << "                |\n";
  cout << "| prefix ++   | ++ frac3 = " << ++ frac3 << ", frac3 = " << frac3 << "         |\n";
  cout << "| postfix ++  | frac3 ++ = " << frac3 ++ << ", frac3 = " << frac3 << "         |\n";
  cout << "| prefix --   | -- frac3 = " << -- frac3 << ", frac3 = " << frac3 << "         |\n";
  cout << "| postfix --  | frac3 -- = " << frac3 -- << ", frac3 = " << frac3 << "        |\n";
  cout << "| +=          | frac 2 += frac3, frac2 = " << ( frac2 += frac3 ) << "        |\n";
  cout << "| -=          | frac 2 -= frac3, frac2 = " << ( frac2 -= frac3 ) << "        |\n";
  cout << "| *=          | frac 2 *= frac3, frac2 = " << ( frac2 *= frac3 ) << "       |\n";
  cout << "| /=          | frac 2 /= frac3, frac2 = " << ( frac2 /= frac3 ) << "        |\n";
  cout << "| ==          | 2 == frac3 is " << ( frac2 == frac3 ? "T": "F" ) \
    << ", 2 == frac2 is " << ( frac2 == frac2 ? "T": "F" ) << "    |\n";
  cout << "| !=          | 2 != frac3 is " << ( frac2 != frac3 ? "T": "F" ) \
    << ", 2 != frac2 is " << ( frac2 != frac2 ? "T": "F" ) << "    |\n";
  cout << "| <           | 2 < frac3 is " << ( frac2 < frac3 ? "T": "F" ) \
    << ", frac3 < 2 is " << ( frac3 < frac2 ? "T": "F" ) << "      |\n";
  cout << "| >           | 2 < frac3 is " << ( frac2 > frac3 ? "T": "F" ) \
    << ", frac3 > 2 is " << ( frac3 > frac2 ? "T": "F" ) << "      |\n";
  cout << "| <=          | 2 <= frac3 is " << ( frac2 <= frac3 ? "T": "F" ) \
    << ", frac2 <= 2 is " << ( frac2 <= frac2 ? "T": "F" ) << "    |\n";
  cout << "| >=          | 2 >= frac3 is " << ( frac2 >= frac3 ? "T": "F" ) \
    << ", frac2 >= 2 is " << ( frac2 >= frac2 ? "T": "F" ) << "    |\n";
  cout << "+-------------+-------------------------------------+\n";

  cout << endl;

  return 0;
}
