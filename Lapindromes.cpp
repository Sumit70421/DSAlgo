// #include <iostream>
// #include<map>
// using namespace std;
 
// void solve(string s, int size){
//     map<char,int>nums;
//     map<char,int> :: iterator f;
//     for(int i=0;i<size;i++){
//         for(f=nums.begin();f!=nums.end();f++){
//             if(s.at(i)==(*f).first){
//                 (*f).second = (*f).second - 1;
//                 cout<<(*f).first<<" "<<(*f).second;
//             }else{
//                 nums.insert({s.at(i),1});
//             }
//         }
//     }
//     int flag=0;
//     for(f=nums.begin();f!=nums.end();f++){
//         if((*f).second==0){
//             flag=0;
//         }
//         else{
//             flag=1;
//         }
//     }
//     flag==0 ? cout<<"YES" : cout<<"NO";

// } 
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int size = s.length();
//         cout<<size;
//         if(size%2==0){
//             solve(s,size);
//         }
//         else{
//             string y;
//             int j=0;
//             for(int i=1;i<size+1;i++){
//                 if(i==(size/2)+1){
//                     j++;
//                     continue;
//                 }
//                 else{
//                     y[j]=s[i];
//                     j++;
//                 }
//             }
//             cout<<y;
//             solve(y,size-1);
//         }

//     }
//    return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
	int f1[26]={0};
	int f2[26]={0};
	
	string s;
	cin>>s;
	int len=s.length();
	int a,b;
	b=len/2;

	for(int i=0;i<b;i++)
	{
	    a=s[i];
	    a-=97;
	    f1[a]++;
	}
	if(len%2!=0){
	    b+=1;
	}
	for(int i=b;i<len;i++)
	{
	    a=s[i];
	    a-=97;
	    f2[a]++;
	}
	int count=0;
    
	for(int i=0;i<26;i++)
	{
	    if(f1[i]!=f2[i])
	    {
	        count=1;
	        break;
	    }
	}
	if(!count){
	    cout<<"YES\n";
	}else{
	    cout<<"NO\n";
	}
    }
	
	return 0;
}
