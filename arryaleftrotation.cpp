#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,r;
        scanf("%d %d",&n,&r);
    int arr[n],arr1[r],j=0,marge[n],rever[r],x=0,arr2[n-r],z=0,k=0;
    vector<int> v;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<r;i++)
            arr1[j++]=arr[i];
        for (int i=r;i<n;i++)
                v.push_back(arr[i]);
        for(int i=0;i<r;i++)
            v.push_back(arr1[i]);
        for(int i=0;i<v.size();i++){
            printf("%d ",v[i]);
        }
        cout<<endl;

    }

}
