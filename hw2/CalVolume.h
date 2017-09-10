#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string.h>
using namespace std;

class CalVoulme
{
		public:
				void setPoint(char filename[]);
				float getVolume();
				int getLicense();

		private:
				int num[10];
				int license, point;
				float volume, area, depth, hunted_fish;

};
