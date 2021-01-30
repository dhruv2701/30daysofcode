#include <bits/stdc++.h> 
using namespace std; 

void FCFS(int arr[], int head, int size) 
{ 
	int head_movement = 0; 
	int distance, cur_track; 

	for (int i = 0; i < size; i++) { 
		cur_track = arr[i]; 
		distance = abs(cur_track - head);   // calculate absolute distance 
		head_movement += distance;      	   // increase the total count
		head = cur_track;                 // accessed track is now new head
	} 
    cout<<"\nTotal number of head movements = "<<head_movement<<"\n"; 
	return ;
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
    cout<<"\nRandomly generated head position: ";
	//cin>>head;
    head=rand()%m;
	cout<<head<<"\n";
    FCFS(arr, head, n); 
	
	return 0; 
} 
