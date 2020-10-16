int countingValleys(int n, string s) {
int sea_level=0;
int Ans=0; 
 for(int i=0;i<n;i++)
  {if(s[i]=='U')
            ++sea_level;
        if(s[i]=='D')
            --sea_level;
        if(sea_level==0 && s[i]=='U')
            ++Ans;
        }
        return Ans;
}
