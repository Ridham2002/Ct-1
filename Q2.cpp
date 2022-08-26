//name-Ridham Gupta
//R.no.-2010990584
//set no.-05
//ques no.-02
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,2,-3,-1,0,4};
    int l=sizeof(arr);
    for(int i=0;i<l;i++){
        if(arr[i]==0){                                                         //checks whether zero is present in the array and prints it
            cout<<"Subarrays with zero-sum are"<<"{"<<arr[i]<<"}"<<endl;       
        }
    }
    return 0;
}