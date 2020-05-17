vector<string> Solution::fizzBuzz(int A) {
    vector<string>v(A);
    for(int i=0;i<A;i++){
        if((i+1)%3==0 &&(i+1)%5==0){
            v[i]="FizzBuzz";
        }
        else if((i+1)%3==0){
            v[i]="Fizz";
        }
        else if((i+1)%5==0){
            v[i]="Buzz";
        }
        else{
            v[i]=to_string(i+1);
        }
    }
    return v;
}
