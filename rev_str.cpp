string reverseWord(string str){
    
  //Your code here]
  string s="";
  int n=str.length();
  for(int i=n-1;i>=0;i--)
  {
      s=s+str[i];
  }
  return s;
}