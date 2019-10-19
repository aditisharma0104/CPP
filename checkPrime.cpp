    // Program to find if the number is prime or not

    #include <iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
      int num, i;
      bool isPrime = true;
      cout << "Enter a positive integer: ";
      cin >> num;
      for(i = 2; i <= sqrt(num); i++)
      {
          if(num % i == 0)
          {
              isPrime = false;
              break;
          }
      }
      if (isPrime)
          cout << "This is a prime number";
      else
          cout << "This is not a prime number";
      return 0;
    }
