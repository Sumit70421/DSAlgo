// #include <bits/stdc++.h> // header file includes every Standard library
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
// 		cin>>n>>k;
// 		if(n<k){
// 			cout<<"-1";
// 		}
// 		else{
// 			char res[n];
// 			int diff = n - k ;
// 			char intital = 'a';
// 			int loc = 0;
// 			for(int i=0;i<k;i++){
// 				// res.append(intital + i);
// 				res[i] = intital + i;
// 				loc++;
// 			}
// 			for (int j=0;j<diff;j++){
// 				res[loc] = intital + j;
//                 loc++;
// 			}

// 			for(int k=0; k <n;k++){
// 				cout<<res[k];
// 			}

// 		}
//     }
	
		
	
	
// 	// Your code here
// 	return 0;
// }
#include <bits/stdc++.h>
 using namespace std;
string ok(){
	int n,k;cin>>n>>k;
	if(n<k || (k==1 && n>k)) return "-1";
	if(n==1 && k==1) return "a";
	string r="a";
	int t=n-k+1,i=1;char c='c';
	while(i<=t){
		if(r[i-1]=='a') r+='b';
		else r+='a';
		i++;
	}
	while(i<n){
		
		r+=(c);
		c++;
		i++;
	}return r;
}
int main() {
	int t;cin>>t;while(t--){
		cout<<ok()<<"\n";
	}
	// Your code here
	return 0;
}