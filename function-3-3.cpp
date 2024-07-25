double weighted_average(int array[], int n){
    int one_count=0,two_count=0,three_count=0,four_count=0,five_count=0,six_count=0,seven_count=0,eight_count=0,nine_count=0;
    if (n<1){
        return 0.0;
    }
    for (int i=0;i<n;i++){
        switch (array[i]){
            case 1:
                one_count++;
                break;
            case 2:
                two_count++;
                break;
            case 3:
                three_count++;
                break;
            case 4:
                four_count ++;
                break;
            case 5:
                five_count++;
                break;
            case 6: 
                six_count++;
                break;
            case 7:
                seven_count++;
                break;
            case 8:
                eight_count++;
                break;
            case 9:
                nine_count++;
                break;
        }
    }
    double weighted_average=0.0;
    for (int j=0;j<n;j++){
        switch (array[j]){
            case 1:
                weighted_average=weighted_average+((1*one_count)/float(n));
                break;
            case 2:
                weighted_average=weighted_average+((2*two_count)/float(n));
                break;
            case 3:
                weighted_average=weighted_average+((3*three_count)/float(n));
                break;
            case 4:
                weighted_average=weighted_average+((4*four_count)/float(n));
                break;
            case 5:
                weighted_average=weighted_average+((5*five_count)/float(n));
                break;
            case 6: 
                weighted_average=weighted_average+((6*six_count)/float(n));
                break;
            case 7:
                weighted_average=weighted_average+((7*seven_count)/float(n));
                break;
            case 8:
                weighted_average=weighted_average+((8*eight_count)/float(n));
                break;
            case 9:
                weighted_average=weighted_average+((9*nine_count)/float(n));
                break;
        }
    }
    return weighted_average;
    }