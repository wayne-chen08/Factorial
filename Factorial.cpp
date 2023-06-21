#include <iostream>
using namespace std;

int main()
{
    int a[500], b[500];
    for(int i = 0; i < 500; i++){
    	a[i] = 0;
    	b[i] = 0;
	}
    int input=0;
    cout << "please enter number" << endl;
    cin >> input;
    int n = 1;
    
    a[499] = 1;
    
    while(n <= input){
        for(int i = 0; i < 500; i++){
                if(a[i]==0) 
					continue;
                b[i] = a[i] * n;
        }

        for(int i = 499; i >= 0; i--){
				if(b[i] >= 10){
					b[i - 1] += b[i] / 10;
					b[i] %= 10;
				}
            }
            
        for(int i = 0; i < 500; i++){
            a[i] = b[i];
        }
        n++;
    }
    int non_zero = 0;
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
    	if(a[i] != 0){
    		non_zero = i;
    		break;
		}
	}
	for(int i = non_zero; i < sizeof(a) / sizeof(a[0]); i++){
		cout << a[i];
	}
    return 0;

}
