#include <bits/stdc++.h>
using namespace std;
void SSTF(int n, int head, bool done[], int arr[])
{
    int head_movement=0;
    for(int i=0;i<n;i++)
    {
        int index=0;
        int shortest=INT_MAX-1;
        for(int k=0;k<n;k++)      
        {
            if(abs(head-arr[k])<shortest && !done[k])    //for current disc head, finding the value of cylinder which is close to it.
            {
                index=k;
                shortest=abs(head-arr[k]);
            }
        }
        done[index]=true;
        head_movement += shortest;
        head=arr[index];
    }
    cout<<"Total Head Movement Cylinders = "<<head_movement<<"\n";
    return;
}

int main()
{
    int n,m,head;
    cout<<"Enter the size of disk: ";
    cin>>m;
    
    cout<<"Enter number of requests: ";
    cin>>n;
    srand(time(0));
    cout<<"Generating random requests: ";
    int arr[n];
    for(int i=0;i<n;i++){
        //cin>>arr[i];
        arr[i]=rand()%m;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            cout<<"Error, Unknown position "<<arr[i]<<"\n";
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bool done[n];
    cout<<"\nRandomly generated head position: ";
    //cin>>head;
    head=rand()%m;
	cout<<head<<"\n";
    SSTF(n, head, done, arr); 
    
	return 0; 
}