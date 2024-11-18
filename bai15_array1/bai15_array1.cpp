#include <iostream>
using namespace std;
int main()
{
	string cars[8] = { "Volvo","BMW","Ford","Mazda","Tesla","Ferrari","Rollroye","Lamgogini"};
	for (int i = 0; i < 8; i++) {
		cout << cars[i] << "\n";
		cars[1] = "vinfast";
	}
	return 0;
}