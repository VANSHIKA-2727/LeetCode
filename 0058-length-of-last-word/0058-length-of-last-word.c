int lengthOfLastWord(char* s) {
    int l = strlen(s)-1;
    int i = l;
    while(i>=0&& s[i]== ' '){
        i--;
    }
    int c = 0;
    while(i>=0 && s[i]!= ' '){
        c++ ;
        i --;
    }
    return c ; 
}