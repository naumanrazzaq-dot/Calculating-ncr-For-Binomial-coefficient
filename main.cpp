#include <iostream>
using namespace std;

// Factorial function jo value return karega
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 8, r = 2; // Screenshot mein yehi values hain

    // 1. n! nikalna
    int fact_n = factorial(n);

    // 2. r! nikalna
    int fact_r = factorial(r);

    // 3. (n-r)! nikalna
    int fact_nmr = factorial(n - r);

    // Final nCr Formula: n! / (r! * (n-r)!)
    int nCr = fact_n / (fact_r * fact_nmr);

    cout << "nCr for n=8 and r=2 is: " << nCr << endl;

    return 0;
}
