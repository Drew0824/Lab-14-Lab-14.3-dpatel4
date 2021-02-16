#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  double distance;
  int seconds;
  int sec;


  


cout << "Please input the time of fall in seconds:" << endl;
  cin >> seconds;

  cout << setprecision (1) << fixed;

  cout << "Time Falling (seconds)" << " Distance Fallen (meters)" << endl;

   cout << "**********************";  cout << " **********************\n" << endl;

for (int sec = 0; sec <= seconds; sec++)

{

distance = (0.5 * 9.8 * sec * sec);

cout << sec << "                      " << distance << endl;

}

}