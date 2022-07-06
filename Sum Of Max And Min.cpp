int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    int a=arr[0];
    int b=arr[0];
    for(int i=1;i<n;i++){
        if(a<=arr[i])
            a=arr[i];
    }
    for(int i=1;i<n;i++){
        if(b>=arr[i])
            b=arr[i];
    }
    return a+b;
}
