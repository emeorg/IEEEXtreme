#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    // esperar 5     segundos
    sleep(4);
    for (int i = 0; i < a; i++)
    {
        cout << "Hello, World!" << endl;
    }

    return 0;
}