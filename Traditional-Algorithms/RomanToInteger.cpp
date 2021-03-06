/**
  * Leetcode 13 Roman to integer solution.
  * https://stackoverflow.com/questions/2263681/c-compile-error-iso-c-forbids-comparison-between-pointer-and-integer
*/
#include <string>
#include <iostream>
using namespace std;

int get_val(char c)
{
	switch (c)
	{
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	}
	return 0;
}

int romanToInt(string s) {
	int size = s.size();
	int result = 0;
	for (int i = 0; i < (size - 1); i++){
		int previous = get_val(s[i]);
		int successor = get_val(s[i+1]);
		if (previous >= successor){
			result += previous;
		}
		else{
			result -= previous;
		}

	}
	result += get_val(s[size - 1]);
	return result;
}

int main(){
	string s = "MCMXCIV";
	int result = romanToInt(s);
	cout << result << endl;
	getchar();
	return 0;
}