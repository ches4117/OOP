#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;
long int mul_func(int start, char str[], int num_mul, char ans_str[]);

int main() {
		char str[100], instruction;
		int i, num, len, ori_mul_num, j;
		long int num_big = 0;
		while(1) {
				cout << "Enter the number followed by the order:";
				cin >> str >> num;

				char ans_str[100];

				len = strlen(str);
				if(len - 1 < num) {cout << "Error number, please input again." << endl; continue;}
				num_big = mul_func(len, str, num, ans_str);

				cout << "Maximum product: " << num_big << " = ";


				for(i = 0; i <= 100; i++)
				{
						if(ans_str[i] == '\0') break;
						else if(ans_str[i] == '*') cout << " * ";
						else if(ans_str[i] >= 48 && ans_str[i] <= 57) cout << ans_str[i];
				}
				
				cout << endl << endl;

				cout << "Continue or not?" << endl << "Y or N" << endl;
				cin >> instruction; 
				if(instruction == 'N' || instruction == 'n') break;
		}
		return 0;
}

long int mul_func(int start, char str[100], int num_mul, char ans_str[100]) {
		char str2[100], str3[100], tmp_ans_str[100];
		int i, j;
		long int big = 0, tmp_big;

		if(num_mul != 0)
		{
				for(i = start - 1; i > 0; i--) {
						// divide to two
						strncpy(str2, str, i);
						str2[i] = '\0';

						for(j = 0; j < start - i; j++) str3[j] = str[i+j];
						str3[j] = '\0';

						tmp_big = atoi(str2) * atoi(str3);

						if(num_mul != 1) {
								memset(tmp_ans_str, '\0', strlen(tmp_ans_str));

								tmp_big = mul_func(strlen(str2) , str2, num_mul - 1, tmp_ans_str) * atoi(str3);

								if(big < tmp_big) {
										memset(ans_str, '\0', strlen(ans_str) );
										strcpy(ans_str, tmp_ans_str);
										ans_str[strlen(tmp_ans_str)] = '*';
										strcat(ans_str, str3);

										big = tmp_big;
								}

						} else {
								if(big < tmp_big) {
										memset(ans_str, '\0', strlen(ans_str) );
										strcpy(ans_str, str2);
										ans_str[strlen(ans_str)] = '*';
										strcat(ans_str, str3);
										ans_str[strlen(ans_str)] = '\0';

										big = tmp_big;
								}
						}
				}
		}


		return big;
}
