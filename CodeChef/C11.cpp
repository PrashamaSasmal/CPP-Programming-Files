//Closest Vowels

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	   int n; cin>>n;
	   string s; cin>>s;
	   int x=1; int y=1e9+7;
	   int arr[5]={0};
	   for(int i=0; i<n; i++){
	       arr[0]= abs(s[i]-'a');
	       arr[1]= abs(s[i]-'e');
	       arr[2]= abs(s[i]-'i');
	       arr[3]= abs(s[i]-'o');
	       arr[4]= abs(s[i]-'u');
	       sort(arr,arr+5);
	       if(arr[0]==arr[1]) x= (x*2)%y;
	       
	   }
	   cout<<x<<"\n";
	}
	return 0;
}
