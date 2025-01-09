bool isPalindrome(long long int x) {

    long long int rev=0;
    long long int m=x;
    if(x<0){
        return false;
    } else {
        while(x!=0){
            long long int rem;

            rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        
        if(m==rev){
            return true;
        } else {
            return false;
        }
    }
}