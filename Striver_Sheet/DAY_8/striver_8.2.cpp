int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int i=0;
    int j=1;
    int res=1;
    while(j<n){
        if(at[j]>dt[i]){
            j++;
            i++;
        }
        else{
            res++;
            j++;
        }
    }
    return res;
}