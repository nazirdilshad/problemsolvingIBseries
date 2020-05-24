int Solution::isPower(int A) {
    if(A<=1){
        return true;
    }
    for(int i=2;i*i<=A;i++){
        float val = log(A)/log(i);
        if(floor(val)==ceil(val)){
            return true;
        }
        // double val = log(A) / log(i); 
        // if ((val - (int)val) < 0.00000001) 
        //     return true; 
    }
    return false;
}