#include <iostream>
void pt(float* arr, int n) {
	std::cout << "vvedite posled iz 5 chisel" << std::endl;
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}
}
void vv(float* arr, int n) {
	for (int i = 0; i < n; i++) { 
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void po(float* arr, int n) {
	int ot = 0, pol = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			ot += 1;
		}
		else {
			pol += 1;
		}
	}
	std::cout << "otri = " << ot << " polosh = " << pol;
}