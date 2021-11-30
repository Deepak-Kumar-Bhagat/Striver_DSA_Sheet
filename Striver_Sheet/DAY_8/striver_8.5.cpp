int findMinimumCoins(int V) 
{
    int coins[]={1000,500,100,50,20,10,5,2,1};
     int M=9;
     int i=0;
	    int c=0;
	    while(i<M){
	        if(coins[i]<=V){
	            c++;
	            V=V-coins[i];
	            if(V==0){
	                break;
	            }
	        }
	        else{
	            i++;
	        }
	    }
	    return c;
}
