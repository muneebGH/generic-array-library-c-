#include"Array.h"
int main()
{

	Array<int> a1;
	a1.reSize(3);
	a1[0] = 1;
	a1[1] = 2;
	a1[2] = 3;
	cout << a1[0] << a1[1] << a1[2] << endl;


	system("pause");
	return 0;
}