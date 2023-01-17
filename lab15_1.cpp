#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int front = 1;front<N;front++){
		for(int i=0;i<front;i++){
			if(d[front]>d[i]){
				double temp = d[front];
				d[front]=d[i];
				d[i]=temp;
			}
		}
		cout<<"Pass "<<front<<":";
			for(int k=0;k<N;k++){
				cout<<d[k]<<" ";
			}
		cout<<"\n";
		}
		
	}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}