#include<iostream>
using namespace std;

int median(int *a, int *b, int n) {

	int lo1 = 0, hi1 = n-1;
	int lo2 = 0,hi2 = n-1;

    int temp[2010];
    int k = 0;

	while(lo1 < n and lo2 < n) {
		if(a[lo1] < b[lo2]) {
          temp[k++] = a[lo1++];
		}else{
			temp[k++] = b[lo2++];
		}
	}

	while(lo1 < n) {
		temp[k++] = a[lo1++];
	}
	while(lo2 < n) {
		temp[k++] = b[lo2++];
	}

	return temp[n-1];
}

int main() {

   int a[1010];
   int b[1010];

   int n;
   cin>>n;

   for(int i=0;i<n;i++) {
   	cin>>a[i];
   }

   for (int i = 0; i < n; i++)
   {
   	 cin>>b[i];
   }

   cout<<median(a, b, n);

   return 0;
}