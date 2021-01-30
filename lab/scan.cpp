#include <bits/stdc++.h>
using namespace std;
void SCAN(int arr[], int head, string direction, int size, int disc_size)
{
	int seek_count = 0;
	int distance, cur_track;
	vector<int> left, right;
	vector<int> seek_sequence;

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
				seek_count += distance;               // increase the total count
				head = cur_track;                    // accessed track is now the new head
			}
			direction = "right";
		}
		else if (direction == "right") {
			for (int i = 0; i < right.size(); i++) {
				cur_track = right[i];
				distance = abs(cur_track - head);        // calculate absolute distance
				seek_count += distance;                 // increase the total count
				head = cur_track;                      // accessed track is now new head
			}
			direction = "left";
		}
	}

	cout<<"\nTotal number of seek operations = "<<seek_count<<"\n";
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
    cout<<"\nRandomly generated head position: ";
	//cin>>head;
    head=rand()%m;
	cout<<head<<"\n";

    string direction;
    cout<<"Enter the direction (left or right): ";
    cin>>direction;                      // if(direction==left)head is moving towards left to right;    else head moves towards right to left
    SCAN(arr, head, direction, n, m); 
	
	return 0; 
}
