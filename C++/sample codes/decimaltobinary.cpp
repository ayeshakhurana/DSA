#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int bit,ans,i=0;
    while(n!=0){
        bit=n&1;
        ans=ans+(pow(10,i) * bit);
        n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}