bool is_fanarray(int array[], int n){
    if(n<1){
        return false;
    }
    int mid=n/2;
    for (int i=0;i<mid;i++){
        if (array[i]!=array[n-1-i]){
            return false;
        }
    }
    if (n%2!=0){
        if(array[mid-1]>array[mid]){
            return false;
        }
    }
    return true;
}