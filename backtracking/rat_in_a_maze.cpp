/* Given a n * m matrix , with some cells as blocked you have to -
1. Find path from src to destination 
2. Count the number paths from src to destination 
3. Print all the possible paths given the rat can move only forward and 
downward .

description :
* we can go down / go right so how could we know when to go down or when 
  to go right .

* If we want to find a single path or check for the existing path then we 
  first call on the left and then call on the down .

  */

#include<iostream>
using namespace std;

bool ratInMage(char maze[][10], int sol[][10], int i, int j , int m, int n) {

   //base case
	if(i == m || j == n) {
        //print the path
        for(int i =0; i<m;i++) {
            for(int j =0;j<m;j++) {
        		cout<<maze[i][j]<<" ";

        	}
        	cout<<endl;
        }
        cout<<endl;
		return true;
	}

	//self work
    //side cases (if the rat goes out of the maze)
    if(i > m || j > n) {
    	return false;
    }
    //if the maze is blocked
    if(maze[i][j] == 'X') {
    	return false;
    }

    // Assume the solution exists through the current cell
    maze[i][j] = '1';

    //Rec case 
    bool right = ratInMage(maze, sol, i, j+1, m, n);
    bool down  = ratInMage(maze, sol, i+1, j, m, n);

    //After the fuction call backtrack steps 
    maze[i][j] = '0';

    if(right || down) return true;

    return false;

}



int main() {
 
 char maze[10][10] = {"0000",
                      "00X0",
                      "000X",
                      "0X00"};

 int sol[10][10] = {0};
 int m = 4, n = 4;

 bool ans = ratInMage(maze, sol, 0, 0, m-1, n-1);

 if(ans == false) {
 	cout<<"Path does not exist";
 }

  return 0;
}  