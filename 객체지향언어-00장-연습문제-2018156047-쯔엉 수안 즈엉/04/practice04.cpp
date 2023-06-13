#include <iostream>
using namespace std;
int main ()
{
    int a[50][50];
    int i, j;
    int rows,column;

    cout << "Enter number of rows and column: ";
    cin >> rows;
    cin >> column;
    /*cout << "Enter number of column: ";
    cin >> column;*/
    cout << "Enter the value of array elements: ";
  for (i = 0; i < rows; i++)
  {
      for (j = 0; j < column; j++)
      {
          cin >> a[i][j];
      }

  }
    cout << "The result is,\n";
  for (i = 0; i < rows; i++)
  {
      for (j = 0; j < column; j++)
      {
          cout << a[i][j] * a[i][j] << " " ;
      }
      cout <<  "\n";
  }
return 0;
}