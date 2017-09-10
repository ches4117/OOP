#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include "CalVolume.h"
using namespace std;

int main(int argc, char **argv)
{
		int i = 0, hunted_fish, ans_license;
		int point = 0, volume;
		
		CalVoulme lakevolume;
		fstream fp;

		cout << "This program can calculate the answer of license. " << endl << endl;
		while(true)
		{
				fp.open(argv[1], ios::in);
				if(!fp) {
						cout<<"Fail to open file: "<<argv[1]<<endl;
						cout<<"Enter the file name again."<<endl;
						cin >> argv[1];
				}
				else break;

		}

		lakevolume.setPoint(argv[1]);
		ans_license = lakevolume.getLicense();
		cout << ans_license << endl;
		return 0;
}
