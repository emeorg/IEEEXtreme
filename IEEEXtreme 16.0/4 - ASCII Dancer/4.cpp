#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)n; i++)

int main() {
    
    int T; cin >> T;

    rep(i, T){

    	char man[3][3] ={
    		{' ','o',' '},
    		{'/','|','\\'},
    		{'/',' ','\\'}
    	};
    	
    	int d; cin >> d;

    	rep(j, d){

    		string t; cin >> t;

    		if (t == "say"){

    			string say; getline(cin,say);
    			cout << say.substr(1) << endl; continue;

    		}else if (t == "turn"){
    			
    			char aux_right_top = man[0][0];
    			char aux_right_medium = man[1][0];
    			char aux_right_bottom = man[2][0];

    			man[0][0] = (man[0][2] == ')') ? '(' : ' ';
    			man[0][2] = (aux_right_top == '(') ? ')' : ' ';

    			if (man[1][2] == ' '){
    				man[1][0] = ' ';
    			}else if (man[1][2] == '>'){
    				man[1][0] = '<';
    			}else{
    				man[1][0] = '/';
    			}
    			
    			if (aux_right_medium == ' '){
    				man[1][2] = ' ';
    			}else if (aux_right_medium == '<'){
    				man[1][2] = '>';
    			}else{
    				man[1][2] = '\\';
    			}    			

    			man[2][0] = (man[2][2] == '>') ? '<' : '/';
    			man[2][2] = (aux_right_bottom == '<') ? '>' : '\\';

    		}else if (t == "right"){
    			
    			string extremity; cin >> extremity;

    			if (extremity == "hand"){

    				string ignore; cin >> ignore;
    				string action; cin >> action;

    				if (action == "head"){

    					man[0][0] = '(';
    					man[1][0] = ' ';

    				}else if (action == "hip"){

    					man[0][0] = ' ';
    					man[1][0] = '<';

    				}else{

    					man[0][0] = ' ';
    					man[1][0] = '/';
    				}

     			}else{
     				string action; cin >> action;

     				if (action == "in"){
     					
     					man[2][0] = '<';

     				}else{

     					man[2][0] = '/';

     				}
    			}

    		}else if (t == "left"){
    		
				string extremity; cin >> extremity;

    			if (extremity == "hand"){

    				string ignore; cin >> ignore;
    				string action; cin >> action;

    				if (action == "head"){

    					man[0][2] = ')';
    					man[1][2] = ' ';

    				}else if (action == "hip"){

    					man[0][2] = ' ';
    					man[1][2] = '>';

    				}else{

    					man[0][2] = ' ';
    					man[1][2] = '\\';
    				}

     			}else{
     				string action; cin >> action;

     				if (action == "in"){
     					
     					man[2][2] = '>';

     				}else{

     					man[2][2] = '\\';

     				}
    			}
    		}

    		cout << man[0][0] << man[0][1] << man[0][2] << endl;
    		cout << man[1][0] << man[1][1] << man[1][2] << endl;
    		cout << man[2][0] << man[2][1] << man[2][2] << endl;

    	}
    	
    } 

    return 0;
}