// Hexanizer by sodasleeping
// https://github.com/sodasleeping
// https://t.me/zxcminimalized
#include <iostream>
using namespace std;
string Hexanize(string hex = "", int perChar = 2, bool inputMode = true)
{
	if (inputMode)
	{
		cout << "Input hex:" << endl;
		cin >> hex;
	}
	string result;
	for(int i = 0; i < hex.size(); i++)
	{
		if(i % perChar == 0)
		{
			result += " ";
		}
		result += hex[i];
	}
	result = result.erase(0, 1);
	return result;
}
int main()
{
	cout << Hexanize("1EFF2FE1", 2, false) << endl;
}