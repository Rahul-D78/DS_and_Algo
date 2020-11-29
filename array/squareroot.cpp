#include<iostream>
using namespace std;

int main() {

    int N;
    int P;
    cin>>N>>P;

	float ans = 0;
	float inc = 1.0;

    for(int times=0;times<=P;times++) {

    //finalize the correct digit for the current position
	while(ans*ans<=N) {
		ans = ans + inc;

	}
        ans = ans-inc;
        //update the increment for the next position
        inc = inc/10;
	}
	   cout<<ans<<endl;

	return 0;
}