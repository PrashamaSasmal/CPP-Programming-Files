//Compress the Video

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int x,count=0;
	   cin>>x;
	   int arr[x];
	   for(int i=0;i<x;i++){
	   cin>>arr[i];
	   
	   }
	   for(int i=0;i<x-1;i++){
	   if(arr[i]==arr[i+1])
	   count++;
	   
	   }
	   cout<<x-count<<endl;
	}
	return 0;
}
