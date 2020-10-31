#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
class Node{
 public:
       string key;
       T value;
       Node<T> *next;

       Node(string key, T val) {
       	this->key = key;
       	value = val;
       	next = NULL;
       }
       //destructor-Used to destroy an object
       ~Node() {
       	if(next != NULL) {
       		delete next;
       	}
       }
};

//Now we have to make the hash-table class and then this hashtable is going 
//to use the object of linked list class and then insert it into the hash table 
//as the key value pair at the index that we get fro the hash function

template<typename T>
class HashTable { 

   Node<T>** table; //pointer to an pointer of arrays
   int current_size;
   int table_size;
                    //we have to keep it private because we wont want that anyone to be call it outside the class 
    int hashFn(string key) {
    	int idx = 0;
    	int p = 1;    //All The charecters by power of 27

    	for(int j=0;j<key.length();j++) { //traverse in the entire String
    		idx = idx + (key[j]*p)%table_size; //Add key[j] = current charecter
    		idx = idx % table_size;
    		 p  = (p * 27) % table_size;
    	}
    	return idx;
    }

    void rehash() {
    	Node<T>**oldTable = table;
    	int oldTablesize = table_size; //approximation find the next prime num
    	table_size = 2*table_size;
    	table = new Node<T>*[table_size];
    	for(int i=0;i<table_size;i++) {
    		table[i] = NULL;
    	}
        current_size = 0;
        //Shift all the elements of the old table to new table 

        for(int i=0;i<oldTablesize;i++) {
        	Node<T>* temp = oldTable[i];
        	while(temp != NULL) {
        		insert(temp->key, temp->value);
        		temp = temp->next;
        	}
        	if(oldTable[i] != NULL) {
        		delete oldTable[i];
        	}
        }
        delete [] oldTable;
    }

public:
    HashTable(int ts = 7){//we give the default size to the hash-table at the time of initialization
    table_size = ts;
   	//Here Node<T>* is the data type of each bucket in that array
   	table = new Node<T>*[table_size]; // to demonstrate this lets have an example-->
   	//if we want to make an array of students --> students *s = new student[10]
   	//Array to the studens pointer --> students **s = new Student*[10]
    
    current_size = 0;
    

    for(int i =0;i<table_size;i++) {
    	table[i] = NULL;
    }
   } 



void insert(string key, T value) { // we have the key val pair to insert into the hash table 
	                             //we have one key then pass it through the hashfn and get
	                             //the index and place the key val pair at the right index 
int idx = hashFn(key);
Node<T>* n = new Node<T>(key , value);
//INsert at the head of the Linked List with id = idx
n -> next = table[idx];
table[idx] = n;
current_size++;
}

void print() {
	for(int i =0;i<table_size;i++) {
		cout<<"Bucket "<<i<<" -> ";
		Node<T>* temp = table[i];
		while(temp != NULL) {
			cout<<temp->key<<" -> ";
			temp = temp->next;
		}
		cout<<endl;
	}
}

T* search(string key) {
	int idx = hashFn(key);
	Node<T>* temp = table[idx];
	while(temp!=NULL) {
		if(temp->key==key) {
			return &temp->value;
		}
		temp = temp->next;
	}
	return NULL;
}

};
