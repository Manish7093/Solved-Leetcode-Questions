#include<iostream>
#include <vector>
#include<queue>
using namespace std;
vector<int>ksorted(vector<int>&nums,int n,int k){
    priority_queue<int,vector<int>,greater<int>>minheap;
    vector<int>res;
    for(int i=0;i<nums.size();i++){
        minheap.push(nums[i]);
        if(minheap.size()>k){
            res.push_back(minheap.top());
            minheap.pop();
        }
    }
    while(minheap.size()>0){
        res.push_back(minheap.top());
        minheap.pop();
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    int N,K;
    for(int i=0;i<n;i++){
        cin>>N>>K;
        vector<int>arr(N,0);
        for(int i=0;i<N;i++)
            cin>>arr[i];
        vector<int>res=ksorted(arr,N,K);
        for(int i=0;i<N;i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    
	return 0;
}