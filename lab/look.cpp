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
void SSTF(int arr[], int head, bool done[], int n)
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
    cout<<"\nTotal number of head movements = "<<head_movement<<"\n";
    return;
}
void SCAN(int arr[], int head, string direction, int size, int disc_size)
{
	int head_movement = 0;
	int distance, cur_track;
	vector<int> left, right;

	// appending end values which has to be visited before reversing the direction
	if (direction == "left")
		left.push_back(0);
	else if (direction == "right")
		right.push_back(disc_size-1);

	for (int i = 0; i < size; i++) {
		if (arr[i] < head)
			left.push_back(arr[i]);
		if (arr[i] > head)
			right.push_back(arr[i]);
	}

	// sorting left and right vectors
	sort(left.begin(), left.end());
	sort(right.begin(), right.end());

	// run the while loop two times one by one scanning right and left of the head
	int run = 2;
	while (run--) {
		if (direction == "left") {
			for (int i = left.size() - 1; i >= 0; i--) {
				cur_track = left[i];			
				distance = abs(cur_track - head);      // calculate absolute distance
				head_movement += distance;               // increase the total count
				head = cur_track;                    // accessed track is now the new head
			}
			direction = "right";
		}
		else if (direction == "right") {
			for (int i = 0; i < right.size(); i++) {
				cur_track = right[i];
				distance = abs(cur_track - head);        // calculate absolute distance
				head_movement += distance;                 // increase the total count
				head = cur_track;                      // accessed track is now new head
			}
			direction = "left";
		}
	}

	cout<<"\nTotal number of head movements= "<<head_movement<<"\n";
	return;
}

void LOOK(int arr[], int head, string direction, int size)
{
	int head_movement = 0;
	int distance, cur_track;
	vector<int> left, right;

	// appending values which are currently at left and right direction from the head.
	for (int i = 0; i < size; i++) {
		if (arr[i] < head)
			left.push_back(arr[i]);
		if (arr[i] > head)
			right.push_back(arr[i]);
	}

	// sorting left and right vectors for servicing tracks in the correct sequence.
	sort(left.begin(), left.end());
	sort(right.begin(), right.end());

	// run the while loop two times.one by one scanning right and left side of the head
	int run = 2;
	while (run--) {
		if (direction == "left") {
			for (int i = left.size() - 1; i >= 0; i--) {
				cur_track = left[i];			
				distance = abs(cur_track - head);      // calculate absolute distance
				head_movement += distance;               // increase the total count
				head = cur_track;                    // accessed track is now the new head
			}
			direction = "right";                    // reversing the direction
		}
		else if (direction == "right") {
			for (int i = 0; i < right.size(); i++) {
				cur_track = right[i];
				distance = abs(cur_track - head);           // calculate absolute distance
				head_movement += distance;                    // increase the total count
				head = cur_track;                         // accessed track is now new head
			}
			direction = "left";                         // reversing the direction
		}
	}

	cout << "\nTotal number of head movements = "<< head_movement << endl;
    return ;
}

// Driver code
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
    bool done[n];
    string direction;

    cout<<"\n\n----------------------------FCFS Disk Scheduling Algorithm--------------------\n";
    FCFS(arr, head, n); 

    cout<<"\n\n---------------------------SSTF Disk Scheduling Algorithm---------------------\n";
    SSTF(arr, head, done, n);

    cout<<"\n\n---------------------------SCAN Disk Scheduling Algorithm---------------------\n";
    cout<<"\nEnter the direction (left or right): ";
    cin>>direction;                      // if(direction==left)head is moving towards left to right;    else head moves towards right to left
    SCAN(arr, head, direction, n, m);

    cout<<"\n\n---------------------------LOOK Disk Scheduling Algorithm---------------------\n";
    cout<<"\nEnter the direction (left or right): ";
    cin>>direction;                      // if(direction==left)head is moving towards left to right;    else head moves towards right to left
    LOOK(arr, head, direction, n);

	return 0; 
}
