#include <bits/stdc++.h>
using namespace std;

int main() {
    string text; getline(cin, text);

    for (char c : text) {

        if (c >= 97 && c <= 122){
            int valve = c + 14;

            if (valve > 122){
                valve -= 122;
                cout << static_cast<char>(valve + 96);
            } else{
                cout << static_cast<char>(valve);
            }

        } else if (c >= 65 && c <= 90){
            int valve = c + 14;
            
            if (valve > 90){
                valve -= 90;
                cout << static_cast<char>(valve + 64);
            } else{
                cout << static_cast<char>(valve);
            }

        } else {
            cout << static_cast<char>(c);
        }
    }
    
    return 0;
}