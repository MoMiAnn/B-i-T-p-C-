//Bai 24: Liet ke tat ca cac "uoc so le� cua so nguyen duong n
#include <iostream>
#include <vector> 
using namespace std;

void ds_UocSo_Le(vector<int> &ds, int n){
	for(int i=1; i<=n; i++){
		if(n % i == 0 && i % 2 != 0){ //Dieu kien tim "uoc so le" cua so nguyen duong n. 
			ds.push_back(i);
		} 
	} 
} 

int main(){
	int n;
	cout << "Nhap so nguyen n: "; cin >> n;
	vector<int> ds; 
	ds_UocSo_Le(ds, n); 
	if(ds.empty()){
		cout << "Khong co so uoc so le nao cua n ca!" << endl; 
	}
	else{
		cout << "Cac \"uoc so le\" cua so nguyen duong n:";
		for(int uoc : ds){
		    cout << " " << uoc; 
	    } 
	    cout << endl; 
	} 
	return 0; 	 
} 
