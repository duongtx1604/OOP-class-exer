#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	string text;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit")
			break;
		int size = text.length();
		srand((unsigned)time(0));
		int n = rand() % (size + 1 - 0); //random 위치
		int m = rand() % (122 - 97 + 1) + 97; //122 & 97 ASCII code random char a -> z
		char ch = tolower(m);
		string ck = string(1, ch); // convert char to string
		text.replace(n,1, ck);
		cout << text << endl;
	}
}