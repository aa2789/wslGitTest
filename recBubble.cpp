#include <iostream>
#include <vector>
using namespace std;

void recBubble(vector<int>& vec, int n){
	if( n==1)return;
	for(int i=0;i<n-1;i++){
		if(vec[i]>vec[i+1]){
		  swap(vec[i],vec[i+1]);
		}

	}
	recBubble(vec,n-1);
     

}
int main(){
	vector<int> arr{2,7,8,4,6,13,5};
	recBubble(arr,arr.size());
	for(auto itr=arr.begin();itr!=arr.end();itr++){
		cout<<*itr<<",";
	}
	cout<<endl;
	return 0;

}
