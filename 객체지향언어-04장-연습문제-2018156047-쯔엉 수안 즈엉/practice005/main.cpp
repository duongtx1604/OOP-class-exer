#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	string text;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit")
			break;
		int size = text.length();
		srand((unsigned)time(0));
		int n = rand() % (size + 1 - 0); //random ��ġ
		int m = rand() % (122 - 97 + 1) + 97; //122 & 97 ASCII code random char a -> z
		char ch = tolower(m);
		string ck = string(1, ch); // convert char to string
		text.replace(n,1, ck);
		cout << text << endl;
	}
}