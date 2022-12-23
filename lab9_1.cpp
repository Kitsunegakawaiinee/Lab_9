#include <iostream>
using namespace std;

#define EHE else if
#define NANDAYO if
#define NONONO else

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;

  bool s,a,b,c,FALSE;
  s = (rank  == 'S' || rank == 's');
  a = (rank == 'A' || rank == 'a');
  b = (rank == 'B' || rank == 'b');
  c = (rank == 'C' || rank == 'c');
  FALSE = (rank == 'D' || rank == 'd');

  NANDAYO (s) cout << "You have received Super Ultra Rare Unit!!!\n" << "You have received 5 gems.\n" << "You have received 1 gems.\n" << "You have received 2000 coins.\n"<< "You have received very KAK items.\n";
  EHE (a)  cout << "You have received 5 gems.\n" << "You have received 1 gems.\n" << "You have received 2000 coins.\n"<< "You have received very KAK items.\n";
  EHE (b) cout << "You have received 1 gems.\n"<< "You have received 2000 coins.\n"<< "You have received very KAK items.\n";
  EHE (c) cout << "You have received 2000 coins.\n" << "You have received very KAK items.\n";
  EHE (FALSE) cout << "You have received very KAK items.\n";
  NONONO return 0;

  return 0;
}
