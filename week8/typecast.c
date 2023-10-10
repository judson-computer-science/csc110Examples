#include <stdio.h>

int main() {


	int i_num1 = 3;
	int i_num2 = 10;
	float f_num1 = 10.0;

	float result1 = i_num2 / i_num1;
	float result2 = f_num1 / i_num1;
	float result3 = (float) i_num2 / i_num1;
	float result4 = i_num2 / (float) i_num1;
	float result5 = (float)(i_num2 / i_num1);

	printf("%5.3f\n", result1); // 3.000
	printf("%5.3f\n", result2); // 3.333
	printf("%5.3f\n", result3); // 3.333
	printf("%5.3f\n", result4); // 3.333
	printf("%5.3f\n", result5); // 3.000

}
