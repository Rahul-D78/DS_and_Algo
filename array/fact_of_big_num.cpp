#include<iostream>
#define MAX 500
using namespace std;

//This function multiplies x with the number
//represented by res[]

int multiply(int x, int *res, int res_size) {

	int carry = 0; //Initialize carry

	//one by one multiply n with individual digits of res[]
	for(int i =0;i<res_size;i++) {
		int prod = res[i]*x + carry;

        //store last digit of 'prod' in res[]
		res[i] = prod % 10;
	    
	    //put the rest of the digit as carry
	    carry = prod / 10;

	}
    //put carry in res and increase result size
	while(carry) {
       res[res_size] = carry%10;
       carry = carry/10;
       res_size++;
	}
	return res_size;
}

void factorial(int n) {

   //This function returns the factorial of a given number
	int res[MAX];

	//Initialize result
	res[0] = 1;
	int res_size = 1;

	//simple factorial formula
	for(int x = 2;x<=n;x++) {
		res_size = multiply(x, res, res_size); 
	}

	cout<<"factorial of a given number is"<<endl;

	for(int i = res_size-1;i>=0;i--) {
		cout<<res[i];
	}

}



int main(){

	int n;
	cin>>n;

	cout<<factorial(n);

  return 0;
}