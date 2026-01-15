bool isHappy(int n) {
    int rem ;
    do{
        int sum =0 ;
        while(n>0){
        rem = n%10 ;
        sum =sum+(rem*rem);
        n=n/10;}
         n= sum ;
    }
    while(n>9);
    if(n==1||n==7)return true ;
    return false ;

    

}