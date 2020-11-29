#include<iostream>
#include<climits>
using namespace std;

void minMax() {

   int a[100];
   int n;
   cin>>n;
   for(int i=0;i<n;i++) {
    cin>>a[i]; 
    }

   
    int mx = INT_MIN; 
      for(int i=0;i<n;i++){
      
       mx = max(a[i],mx);
    }
    cout<<mx<<endl;

}

    int main() {
      minMax();

	return 0;
}