/*
There are two choices:

The user chooses the ith coin with value Vi: The opponent either chooses (i+1)th coin or jth coin. The opponent intends to choose the coin which leaves the user with minimum value.
i.e. The user can collect the value Vi + min(F(i+2, j), F(i+1, j-1) )
2.The user chooses the jth coin with value Vj: The opponent either chooses ith coin or (j-1)th coin. The opponent intends to choose the coin which leaves the user with minimum value.
i.e. The user can collect the value Vj + min(F(i+1, j-1), F(i, j-2) )
*/

int chooseMax(int * a, int i , int j) {

	//base case 
	if(i > j) {
		return 0;
	}

	int opt1 = a[i] + min(chooseMax(a, i+2,j), chooseMax(i+1, j-1));
	int opt2 = a[j] + min(chooseMax(a, i+1, j-1), chooseMax(i, j-2));

	return max(opt1, opt2);
}

int main() {

	int arr[] = {7, 3,, 1, 6, 2, 8, 1, 0, 11};
	int n = sizeof(arr)/sizeof(arr);
}