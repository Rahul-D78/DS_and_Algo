#include<iostream>
#include<cstring>
#include "hashtable.h"
using namespace std;

int main() {
	HashTable<int> price_menu; //object


	price_menu.insert("Berger", 120);
    price_menu.insert("pizza" , 80);
    price_menu.insert("oreo"  , 130);
    price_menu.insert("juice" , 20);

    // int* price = price_menu.search("juice");
    // if(price == NULL) {
    // 	cout<<"Not present"<<endl;
    // }else{
    // 	cout<<"price is "<<*price<<endl;
    // }


	price_menu.print();


	return 0;
}