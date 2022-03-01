#include <iostream>
using namespace std;
 
bool chekrem(int rem,int arr[]):
	for i in range(0,len(arr)):
		if(rem==arr[i]):
			return True
	return False 
int main(){
   int arr[3];
   for(int i=0; i<3;i++){
      cin>>arr[i];
   }
   int maxint = 0;
   for(int i=0; i<3;i++){
       maxint = max(maxint , arr[i]);
   }
   bool flag = false;
   int j=1;
   while(j<3):
   
	maxelem=maxelem+j
	for k in range(0,len(inarr)):
		reminder = maxelem%inarr[k]
		if(chekrem(reminder,inarr)):
			flag = True
		else:
			flag = False
			outnum = maxelem
	j+=1

   return 0;
}