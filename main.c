#include<stdio.h>

int main(int argc, char* argv[])
{
	char str[5];
	int n = 0, i;

	FILE* Input1, * Input2, * Input3, * Output1, * Output2, * Output3;

	while (fgets(str, sizeof(str), stdin) != NULL) {

		for (i = 0; i < 6; i++) {

			n = (int)str;

			if (n < 0) {

				if (i == 1) {

					Input1 = fopen("input1.txt", "w");
					Output1 = fopen("output1.txt", "w");

					if (Input1 == Output1) {
						printf("%s", str);
					}

				}
				else if(i == 2) {

					Input2 = fopen("input2.txt", "w");
					Output2 = fopen("output2.txt", "w");

					if (Input2 == Output2) {
						printf("%s", str);
					}

				}
				else if (i == 3) {

					Input3 = fopen("input3.txt", "w");
					Output3 = fopen("output3.txt", "w");

					if (Input3 == Output3) {
						printf("%s", str);
					}

				}

			}
			else {
				printf("%s", str[i]);
			}

		}

	}

	return 0;

}
