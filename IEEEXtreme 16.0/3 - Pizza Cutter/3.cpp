#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int t; cin >> t;
	
	for (int i = 0; i < t; ++i){
		
		ll N; cin >> N; if(N == 0){cout << 1 << endl; continue;}

		set<int> set;
		
		for (int i = 0; i < N; ++i){
			
			ll D; cin >> D;

			int d = (D < 0) ? ((D % 360) + 360) : (D % 360);

			d = (d == 360) ? 0 : d;

			if(d < 180){
				set.insert(d);
				set.insert(d + 180);
			}else if(d >= 180){
				set.insert(d);
				set.insert(d - 180);
			}
			
		}

		cout << set.size() << endl;
	}

	return 0;
}