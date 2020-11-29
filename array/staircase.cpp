#include<iostream>
using  namespace std;


int staircase(int a[][10],int R, int C,int key) {

	//stairing from 0 to c-1
	

	for(int i=0;i<R;) {
		for(int j=C-1;j>=0;) {
        if(a[i][j]==key) {
        
        
        return 1;
        break;
        }

		else if(a[i][j] > key) {
			j--;
		}else {
			i++;
		}
	}
		
	}
	
	return 0;
}

int main() {

    int a[10][10];
    int R,C,key;

    cin>>R>>C;
 
    for (int i = 0; i < R; i++) {
		for(int j =0;j<C;j++) {
			cin>>a[i][j];
		}
	}
   
    cin>>key;
    cout<<staircase(a,R,C,key);
    

	return 0;
}
