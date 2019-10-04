 
#include <iostream>
using namespace std;

//6 is the magic number

int main()
{
  int a;
  cout << "Please Enter a Single Digit Number" << endl;
  cin >> a;
  
  if (a ==6)
  {
    cout << "YOU ARE A WINNER" << endl;
  }
  
  else if (a <=5)
  {
    cout << "LOW - TRY A HIGHER NUMBER" << endl;
  }
  
  else if (a >=7)
  {
    cout << "HIGH - TRY A LOWER NUMBER" << endl;
  }
    
  return 0;
}