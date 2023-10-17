#include <iostream>
using namespace std;
int main()
{
	int tablica[] = { 10,20,30,1,2,3,4,5,6,7,8,9,0,1,4,5,7,2,7,2,7,3,8, };
	int rozmiartablicy = sizeof(tablica)/sizeof(int);
	cout << rozmiartablicy;
	for (int i = 0; i < rozmiartablicy; i++) {
		cout << tablica[i] << endl;
		
	}
	cout << "----------------------------------------------" << endl;
	// 5 - 1 = 4 to index
	for (int i = rozmiartablicy - 1; i >= 0; i--) {
		cout << tablica[i] << endl;
	}

	return 0;
}

