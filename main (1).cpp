#include <iostream>
using namespace std;

int factorial(int userInput) {
  int result = userInput;
  for(int i = 1; i < userInput; i++) {
    result *= i;
  }

  return result;
}

int combinations(int n, int r) {
  int dividend = factorial(n);
  int NminusR = n - r;

  int subtractFactorial = factorial(NminusR);
  int rFactorial = factorial(r);

  int divisor = subtractFactorial * rFactorial;

  return dividend / divisor;
}

int permutations(int n, int r) {
  int dividend = factorial(n);
  int NminusR = n - r;

  int divisor = factorial(NminusR);

  return dividend / divisor;
}


int main() {
  string userCP = "";
  int n = 0;
  int r = 0;

  while(userCP != "Q") {
    cout << "Enter (C) for Combinations, (P) for Permutations, (Q) to quit: ";
    cin >> userCP;
    cout << endl;

    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    cout << "Enter r: ";
    cin >> r;
    cout << endl;

    if(userCP == "C") {
      cout << "Result: " << combinations(n, r) << endl;
    } else if(userCP == "P") {
      cout << "Result: "<< permutations(n, r) << endl;
    } else {
      cout << "Enter a valid option" << endl;
    }
    
  }
    
  return 0;
}