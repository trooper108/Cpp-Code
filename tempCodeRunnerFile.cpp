f(sum[0] == 0){
        for(int i = 1 ; i < sum.size(); i++){
            sum[i-1] = sum[i];
        }
        sum.pop_back();
    }