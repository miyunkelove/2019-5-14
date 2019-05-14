#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long Function_one(long n)
{
    if (n <= 0) {
        return 1;
    }
    long current = 1;
    long last = 1;
    long beforelast = 0;
    for (long i = 2; i <= n; i++) {
        current = last + beforelast;
        beforelast = last;
        last = current;
    }
    return current;
}

long Function_two(long n)
{
    long sum = 0;
    for (long i =1; i <= n; i++) {
        sum += Function_one(i);
    }
    return sum;
}

long main()
{
    long n;
    while (cin >> n) {
        cout << Function_one(n) << "," << Function_two(n) << endl; 
    }
    return 0;
}