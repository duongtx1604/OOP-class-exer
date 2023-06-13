
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("c:\\windows\\system.ini", ios::in | ios::binary);
    if (!fin)
    {
        cout << "���� ���� ����" << endl;
        return 0;
    }

    ofstream fout;
    fout.open("c:\\system.txt", ios::out | ios::binary);
    if (!fout)
    {
        cout << "���� ���� ����" << endl;
        return 0;
    }

    char ch[219 / 10];
    int    ten = 10;
    int sum = 0;                    // gcount ����
    cout << "���� ����..." << endl;

    while (!fin.eof())
    {
        fin.read(ch, 219 / 10);
        fout.write(ch, 219 / 10);
        if (fin.gcount() == 219 / 10)
        {
            cout << '.' << fin.gcount() << "B " << ten << '%' << endl;
            ten += 10;
        }

        sum += fin.gcount();
    }

    cout << sum << "B ���� �Ϸ�" << endl;

    fin.close();
    fout.close();

    return 0;
}