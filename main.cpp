#include <iostream>
using namespace std;

int FibonacciSeq(int initial_number, int second_number) {
  int third_number = initial_number + second_number;
  return third_number;
}

int main() {
  int term = 0;
  int sum = 2;
  int previous = 1;
  int eulernumber = 2;
  int fibonacci = 0;

  while (fibonacci <= 4000000) {
    fibonacci = FibonacciSeq(previous, eulernumber);
    cout << fibonacci << "\n";
    if (fibonacci % 2 == 0) {
      sum = sum + fibonacci;
      term = term + 1;
    } else {
      term = term + 1;
    }
    previous = eulernumber;
    eulernumber = fibonacci;
  }
  cout << "The total sum of the even fibonacci numbers below 4 million is: "
       << sum;
}
