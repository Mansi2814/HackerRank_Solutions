void bonAppetit(vector<int> bill, int k, int b) {
int n=bill.size();
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=bill[i];
}
int actual=(sum-bill[k])/2;
if(actual == b)
cout<<"Bon Appetit"<<endl;
else 
 
cout<<b-actual;


}
