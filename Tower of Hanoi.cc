#include <iostream>
#include <string>
using namespace std;

void Tower_of_Hanoi(int n, string from_tower, string to_tower, string aux_tower){
  if(n==1){
    cout<<"Move disk 1 from Rod"<< from_tower << to_tower << endl;
    return;
  }
  Tower_of_Hanoi(n-1, from_tower, aux_tower, to_tower);
  cout<< "Move disk"<< n <<"from rod" << from_tower << "to rod" << to_tower << endl;
  Tower_of_Hanoi(n-1, aux_tower, to_tower, from_tower);
}

int main()
{
  int n=3; // Number of disks
  Tower_of_Hanoi(n, "Start", "End", "Mid");
  return 0;
}
