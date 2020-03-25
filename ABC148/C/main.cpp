#include <iostream>

using namespace std;
long int gcd(long int a, long int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

long int lcm(long int a, long int b)
{
   return a * b / gcd(a, b);
}

int main(int argc, const char *argv[]) {
  long int A, B;
  cin >> A >> B;

  cout << lcm(A, B) << endl;
  return 0;
}
