#include<bits/stdc++.h>
using namespace std;

    int convertInt(int num,vector<int>val,int ind){
        int ans=0;
   int diff=val[ind+1]-val[ind];
   if(diff<0)
   return 0;
   else{
       ans=diff/2;
       
       ans++;
   }
   
    
       
        
        return ans;
    }
    
    
    
int getNum(int num,vector<int>values){

    int val=INT_MAX;
    int ans=INT_MAX;
    for(int i=num-2;i>=0;i--){
        val=convertInt(num,values,i);
       
       
        ans=min(ans,val);
   
    }
   
    return ans;
}
    
    


    int main()
{
    int T;
    
    cin>>T;
    vector<int>values;
    while(T>0){
    int num;
    cin>>num;
    int x;
    for(int i=0;i<num;i++){
 
        cin>>x;

        values.push_back(x);
    }
   
    int ans=getNum(num,values);
    cout<<ans<<endl;
    values.clear();
    T--;
    }
    return 0;

}