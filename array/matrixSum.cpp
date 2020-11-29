#include<iostream>
using namespace std;

int main() {

   int a[10][10];
   int R,C;
   int rsum;
   int csum;
   int msumr = 0;
   int msumc = 0;
   int msum = 0;
   cin>>R>>C;

   // Reading the matrix
   for(int i=0;i<R;i++) {
   	for(int j =0;j<C;j++) {
   		cin>>a[i][j];
   	}
   }

   //printing the matrix
   for(int i =0;i<R;i++) {
   	for(int j=0;j<C;j++) {
   		cout<<a[i][j];
    }
    cout<<endl;
   }

   //max sum in row wise
    for(int i=0;i<R;i++) {
    rsum = 0;
    for(int j=0;j<C;j++) {
    	rsum += a[i][j];

    }
        if(rsum>msumr) {
           msumr = rsum;
        } 

    }
    cout<<"Max row sum "<<msumr;
    cout<<endl;

    //col wise print max sum
    for(int i=0;i<C;i++) {
    csum = 0;
    for(int j=0;j<R;j++) {
    	csum += a[j][i];

    }
        if(csum>msumc) {
           msumc = csum;
        } 

    }
    cout<<"Max col sum "<<msumc<<endl;

    msum = max(msumr, msumc);
    cout<<"max sum in row or col is "<<msum;

	return 0;
}