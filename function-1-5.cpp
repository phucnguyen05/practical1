int count_evens(int number){
    if (number<1){
        return 0;
    }
    int even_counter=0;
    for (int i=1;i<=number;i++){
        if (i%2==0){
            even_counter++;
        }
    }
    return even_counter;
}