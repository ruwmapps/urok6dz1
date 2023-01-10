#include "Mathfunct.h"

int slogenie(int a, int b) {
	return a + b;
};
int vichetanie(int a, int b) {
	return a - b;
};
int umnogenie(int a, int b) {
	return a * b;
};
float delenie(int a, int b) {
	if (b != 0) {
		return (float)a / b;
	}
	return 0;
};
int stepen(int a, int b) {
	return a ^ b;
};