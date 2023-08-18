#include <iostream>
using namespace std;
int main()
{
	int width, height, totalLength;
	cout << "Press return after entering a number.\n";
	cout << "Please enter the width\n";
	cin >> width;
	cout << "Please enter the Height\n";
	cin >> height;
	totalLength = width * height;
	cout << "Width: " << width << "\n";
	cout << "Height: " << height << "\n";
	cout << "Total Length: " << totalLength << "\n";
	return 0;
}

