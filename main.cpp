#include <iostream>

using namespace std;

int main()
{
    int n, A, B, C, Strong, Weak;

cin >> n >> A >> B >> C;

if (A <= B && A <= C)
{
    Strong = A;
}
else if (B <= A && B <= C)
{
    Strong = B;
}
else
{
    Strong = C;
}

Weak = n - Strong;

cout << Weak << endl;
    cout << "Hello world!" << endl;
    return 0;
}
