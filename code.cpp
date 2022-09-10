#include <iostream>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--){
	    int D,d,A,B,C;
	    cin>>D>>d>>A>>B>>C;
	    int totalDays;
	    totalDays=d*D;
	    if(totalDays>=10){
            if(totalDays>=21){
                if(totalDays>=42){
                    cout << C << "\n";
                }
                else{
                    cout<< B << "\n";
                }

            }
            else{
                cout << A << "\n";
            }

        }
        else{
            cout << "0 \n";
        }
	
    }
	return 0;
}
