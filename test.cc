#include <iostream>
using namespace std;

int main(){
  
  { 
    int x = 22;
    cout << endl << "Address of X in scope = " << &x << endl;
  }

  {
    cout << "Instantiating brand new x out of original scope." << endl;
    int x = 22;
    cout << "Address of X out of scope = " << &x << endl << endl;
  }
 return 0;
}
