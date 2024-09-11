#include <iostream>
using namespace std;

// ×Ö·û´®²åÈëºÍÉ¾³ı
void test701()
{
	string str = "hello";

	// ²åÈë
	str.insert(1, "111");
	// h111ello
	cout << "str = " << str << endl;

	// É¾³ı
	str.erase(1, 3);
	cout << "str = " << str << endl;
}
int main7()
{
	test701();
	system("pause");
	return 0;
}