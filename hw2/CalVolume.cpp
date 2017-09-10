#include <iostream>
#include "CalVolume.h"

void CalVoulme::setPoint(char filename[])
{
		depth = 20;
		area = 0;
		point = 0;

		ifstream fin(filename);
		while(fin >> num[point])
				point++;

		if(point != 9) cout << "The numbers of point is not true!!" << endl; 

}
float CalVoulme::getVolume()
{
		//use formula
		for(int i = 0; i < point; i++)
		{
				if(i == 0 || i == 8) area += num[i];
				else if(i % 2 == 0) area += (num[i] * 2);
				else if(i % 2 == 1 )area += (num[i] * 4);
		}
		area = area * 200 / 3;
		volume = (depth * area);
		return volume;
}
int CalVoulme::getLicense()
{
		hunted_fish = (float)(getVolume()/1000) * 3 / 4;
		license = (hunted_fish / 20);
		return license;
}


