#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
   int n;
   long long a;
   cin>>n>>a;
   int left=0,right=0;
   for(int i=0;i<n;i++){
      long long x;
      cin>>x;
      if (x<a) left++;
      else if(x>a) right++;
}
if(right>=left){
  cout<<a+1<<endl;
}
else{
  cout<<a-1<<endl;
}
}
return 0;
}