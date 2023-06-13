
#include <iostream>
using namespace std;

void main()
{
    char str[100];
    char ch;
    int i;
    int j = 0;
    int sum = 0;

    printf("Enter a sample sentence: \n");
    while ((ch = getchar()) != '\n') {
        str[j] = ch;
        j++;
    }
    int n = strlen(str);

    for (i = 0; i < n; i++)
    {
        ch = tolower(str[i]);
        if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117) // ASCII code: a = 97, e = 101 ...
        {
            sum++;
        }
        ;
    }
    cout << "Vowels appear " << sum << " times.";
    return;
}