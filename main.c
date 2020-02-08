#include<stdio.h>

int main(int argc, char* argv[])
{
	char str[5];
	int n = 0, i;

	FILE* Input1, * Input2, * Input3;

	while (fgets(str, sizeof(str), stdin) != NULL) {

		for (i = 0; i < 6; i++) {

			n = (int)str;

			if (n < 0) {

				if (i == 1) {
					n = fopen("input1.txt", "w");
				}
				else if(i == 2) {
					n = fopen("input2.txt", "w");
				}
				else if (i == 3) {
					n = fopen("input3.txt", "w");
				}

			}
			else {
				printf("%s", str[i]);
			}

		}

	}

	return 0;

}
