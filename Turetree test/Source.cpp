#include <stdio.h>

int main() {
	int flag = 0;
	for (int j = 0; j < 7; j++) {
		if (j != 0) {
			printf("\n");
			flag++;
		}
		if (flag != 0) {
			for (int k = 0; k < 1 + (flag / 2); k++) {
				printf(" ");
			}
		}
		for (int i = 1; i < 7; i++) {
			if ((i + flag) < 8) {

				printf("%i", i + flag);

			}
			//printf("\n");

		}
	}return 0;
}