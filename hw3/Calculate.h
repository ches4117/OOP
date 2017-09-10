#include <string>
using namespace std;

class Calculate
{
		public:
			Calculate(char argv[]);
			void extract();
			void cent();
			int get_dollar() const{return total;}
			int get_cent() const{return decimal;}
			int get_quarter() const{return quarter;}
			int get_dime() const{return dime;}
			int get_nickel() const{return nickel;}
			int get_pennie() const{return pennie;}
			~Calculate();
		private:
			double total;
			string new_argv, tmp_decimal;
			int integer, decimal, i, j;
			int quarter, dime, nickel, pennie;
};
