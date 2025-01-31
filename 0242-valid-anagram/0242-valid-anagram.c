bool isAnagram(char* s, char* t) {
  int l = strlen(s);
  int n = strlen(t);
  if ( l !=n ){
    return false ;
  }
    else {
        int a [26]={0};
        for( int i = 0; i<l;i++){
            a[s[i]-97]++;
            a[t[i]-97]--;

        }
        for ( int i =0;i<26;i++){
            if( a[i]!=0){
                return false ;
            }
        }
    }
    return true ;
}