#include <stdio.h>

int main() {

	int i = 0;

	while(i < 10) {

		printf("%d", i);

		if(i == 7) {
			break;
		}

		if(i >= 3) {
			continue;
		}

		printf("-");
		i++;
	}

	printf("\n");

	return 0;
}
