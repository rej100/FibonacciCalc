#include <iostream>
#include <windows.h>

using namespace std;

unsigned long long int calcFibTo(int n)
{
  unsigned long long int theN = 0, temp = 0, tempTwo = 1, tempThree = 0;
  for (int i = 0; i < n; i++)
  {
    theN = 0;
    theN += temp + tempTwo;
    tempTwo = temp;
    temp = theN;
    cout << i + 1 << " " << theN << endl;
    //cout << i + 1 << "/" << n << endl;
    //system("clear");
  }
  return theN;
}

int main(int argc, char const *argv[])
{
  unsigned long long int number, fibResult;
  cout << "Enter an unsigned long long integer." << endl;
  cin >> number;
  fibResult = calcFibTo(number);
  cout << "the " << number << " fibonacci number is " << fibResult << endl;
  /* code */
  return 0;
}
