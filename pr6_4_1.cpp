#include <iostream>

using namespace std;

int array_result_max(int A[], int max, int i, int key) {
	if (abs(A[i]) > abs(max))
	{
		max = A[i];
		key = i;
	}
	i++;
	if (i < 10) {
		key = array_result_max(A, max, i, key);
	}
	return key;
}
int array_result_summ(int A[], int summ, int i, int keys) {
	if (keys == 0) {
		if (A[i] > 0)
		{
			summ += A[i];
			keys = 1;
		}
	}
	else {
		summ += A[i];
	}
	i++;
	if (i < 10) {
		summ = array_result_summ(A, summ, i, keys);
	}
	return summ;
}
int output(int A[], int i) {
	cout << "Array: ";
	cout << "[" << i << "] " << A[i] << "   ";
	i++;
	if (i < 10) {
		output(A, i);
	}
	return 1;
}
int output_remake(int A[], int a, int b, int i) {
	if (a < b) {
		if (A[i] <= b && A[i] >= a) {

		}
	}
	else if (a > b) {
		if (A[i] <= a && A[i] >= b) {

		}
	}
	i++;
	if (i < 10) {
		output_remake(A, a, b, i);
	}
	cout << "Remade Array: ";
	cout << "[" << i << "] " << A[i] << "   ";
	return 1;
}
int main() {
	int A[10];
	for (int i = 0; i < 10; i++) {
		cin >> A[i];
	}
	int a = 0;
	int b = 0;
	int i = 0;
	int keys = 0;
	int key = 0;
	cin >> a;
	cin >> b;
	int max = A[0];
	int summ = 0;
	cout << "Result(max_key): " << array_result_max(A, max, i, key) << endl;
	cout << "Result(summ): " << array_result_summ(A, summ, i, keys) << endl;
	cout << output(A, i) << endl;
	cout << output_remake(A, a, b, i) << endl;
	return 0;
}
