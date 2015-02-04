#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {

  // create a bitset that is 8 bits long
  bitset<8> bs(56);
  // display that bitset
  for( int i = (int) bs.size()-1; i >= 0; i-- ) {
    cout << bs[i] << " ";
  }
  cout << endl;

// create a bitset that is 8 bits long out of string
  bitset<8> bs2(string("01000100"));
  // display that bitset
  for( int i = (int) bs2.size()-1; i >= 0; i-- ) {
    cout << bs2[i] << " ";
  }
  cout << endl;

  // create a bitset out of a number
  bitset<8> bs3( (long) 131 );
  // display that bitset, too
  for( int i = (int) bs3.size()-1; i >= 0; i-- ) {
    cout << bs3[i] << " ";
  }
  cout << endl;

  bitset<8> temp = bs | bs2;
  for( int i = (int) temp.size()-1; i >= 0; i-- ) {
    cout << temp[i] << " ";
  }
  cout << endl;

  if (temp[0] == 0)
    cout << "Hello" << endl;

  return 0;
}