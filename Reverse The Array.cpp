void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int n=arr.size()-1;
    int start=m+1;
    while(start<n){
        int temp=arr[start];
        arr[start]=arr[n];
        arr[n]=temp;
        start++;
        n--;
    }
            
    
    
}
