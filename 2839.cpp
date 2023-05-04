#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
	cin.tie(nullptr); 
    int x, a, b, count;
    bool success = false;

    cin >> x;

    a = 5 * (x / 5);
    b = x % 5;
    while(true)
    {
        if (b % 3 == 0) 
        {
            success = true;
            count = a / 5 + b / 3;
            break;
        }
        else if (a < 5) break;
        a -= 5;
        b += 5;
    }

    if (success) {printf("%d", count);}
    else {printf("%d", -1);}
}
