long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
     long long int sum=0;
    long long int mul=1;
     const unsigned int M = 1000000007;


    if(q==1){
    for(int i=1;i<=n;i++){
        sum+=i;
    }
     return sum;   
    }
   else if(q == 2){

       for(int i=1; i<=n; i++){

           mul = (mul*i)%M;

       }

       return mul;

   }

}


