long long merge(long long *arr,int st,int mid,int ed,long long res[]){
    int i=st;
    int j=mid+1;
    int k=st;
    int c=0;
    while(i<=mid && j<=ed){
    if(arr[i]<=arr[j]){
        res[k]=arr[i];
        k++;i++;
    }
     else{
         c+=(mid-i)+1;
         res[k]=arr[j];
         k++;j++;
     }
    }
    while(i<=mid){
        res[k]=arr[i];
        k++;i++;
    }
    while(j<=ed){
        res[k]=arr[j];
        k++;j++;
    }
    for(int i=st;i<=ed;i++){
        arr[i]=res[i];
    }
    return c;
}
long long mergesort(long long *arr,int st,int ed,long long res[]){
    if(st>=ed){
        return 0;
    }
    int mid=st+(ed-st)/2;
    int c=0;
    c+=mergesort(arr,st,mid,res);
    c+=mergesort(arr,mid+1,ed,res);
    c+=merge(arr,st,mid,ed,res);
    return c;
}
long long getInversions(long long *arr, int n){
    long long res[n];
    long long ans=mergesort(arr,0,n-1,res);
    return ans;
}