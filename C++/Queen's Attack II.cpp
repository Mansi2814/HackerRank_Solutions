#include <iostream>
#include<limits.h> 
using namespace std;

int x, y, n, k, obsx[10] = {-1,-1,-1,-1,-1,-1,-1,-1},obsy[10] = {-1,-1,-1,-1,-1,-1,-1,-1}, sum=0, i, j,a[100000],b[100000];

int check(int k, int x, int y, int *obsx, int *obsy, int &c)
{
    c = 0;
    for(int i=0; i<8; i++)
        {
            if((x == obsx[i]) && (y ==  obsy[i]))
                c = 1;
        }
    return 0;
}

int rdd(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    
    int c=0;
    while(((x < n) && (y != 1)) || ((y > 1) && (x != n)))
    {
        
        x = x+1;
        y = y-1;
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    
    return 0;
}

int rdu(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    int c=0;
    while(((y < n) && (x != 1)) || ((x > 1) && (y != n)))
    {
        x = x-1;
        y = y+1;
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    return 0;
}

int ldd(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    int c=0;
    while(x < n && y < n)
    {
        x = x+1;
        y = y+1;
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    return 0;
}

int ldu(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    int c=0;
    while(x > 1 && y > 1)
    {
        x = x-1;
        y = y-1;
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    return 0;
}

int hb(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    int c=0;
    while(y > 1)
    {
        
        y = y-1;
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    return 0;
}

int ha(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    int c=0;
    while(y < n)
    {
        
        y = y+1;
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    return 0;
}

int vd(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    int c=0;
    while(x < n)
    {
        x = x+1;
        
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    return 0;
}

int vu(int x,int y, int k, int *obsx, int *obsy, int &sum, int n)
{
    int c=0;
    while(x > 1)
    {
        x = x-1;
    
        check(k,x,y,obsx,obsy,c);
    
        if(c == 0)
            sum++;
        else 
            break;
    }
    return 0;
}

int main()
{
    
    cin >> n >> k;
    cin >> x >> y;
    for(i=0; i<k; i++)
        cin >> a[i] >> b[i];

    int min = INT_MAX, max = INT_MAX;
    
    for(i=0; i<k; i++)
    {
        if(a[i] == x)
        {
            if(b[i] > y)
            {
                if(abs(b[i]-y) < min)
                {
                    min = abs(b[i]-y);
                    obsx[0] = x;
                    obsy[0] = b[i];
                }
            }
            else if(b[i] < y)
            {
                if(abs(b[i]-y) < max)
                {
                    max = abs(b[i]-y);
                    obsx[1] = x;
                    obsy[1] = b[i];
                }
            }
        }
    }
        min = INT_MAX, max = INT_MAX;
    for(i=0; i<k; i++)
    {
        if(b[i] == y)
        {
            if(a[i] < x)
            {
                if(abs(a[i]-x) < min)
                {
                    min = abs(a[i]-x);
                    obsx[2] = a[i];
                    obsy[2] = y;
                }
            }
            else if(a[i] > x)
            {
                if(abs(a[i]-x) < max)
                {
                    max = abs(a[i]-x);
                    obsx[3] = a[i];
                    obsy[3] = y;
                }
            }
        }
    }
        min = INT_MAX, max = INT_MAX;

    for(i=0; i<k; i++)
    {
        if((a[i]-x) == (b[i]-y))
        {
            if(b[i] > y)
            {
                if(abs(b[i]-y) < min)
                {
                    min = abs(b[i]-y);
                    obsx[4] = a[i];
                    obsy[4] = b[i];
                }
            }
            else if(b[i] < y)
            {
                if(abs(b[i]-y) < max)
                {
                    max = abs(b[i]-y);
                    obsx[5] = a[i];
                    obsy[5] = b[i];
                }
            }
        }
    }
        min = INT_MAX, max = INT_MAX;
    for(i=0; i<k; i++)
    {
        if((a[i] + b[i]) == (x + y))
        {
            if(b[i] > y)
            {
                if(abs(b[i]-y) < min)
                {
                    min = abs(b[i]-y);
                    obsx[6] = a[i];
                    obsy[6] = b[i];
                }
            }
            else if(b[i] < y)
            {
                if(abs(b[i]-y) < max)
                {
                    max = abs(b[i]-y);
                    obsx[7] = a[i];
                    obsy[7] = b[i];
                }
            }
        }
    }
    // for(i=0; i<8; i++)
    // {
    //     cout << obsx[i] << " " << obsy[i] << endl;
    // }
    rdd(x,y,k,obsx,obsy,sum,n);
    rdu(x,y,k,obsx,obsy,sum,n);
    ldd(x,y,k,obsx,obsy,sum,n);
    ldu(x,y,k,obsx,obsy,sum,n);
    hb(x,y,k,obsx,obsy,sum,n);
    ha(x,y,k,obsx,obsy,sum,n);
    vd(x,y,k,obsx,obsy,sum,n);
    vu(x,y,k,obsx,obsy,sum,n);

    //ans = rd(x,y,obsx,obsy,sum,i,j,k) + ld(x,y,obsx,obsy,sum,i,j,k) + hor(x,y,obsx,obsy,sum,i,j,k) + ver(x,y,obsx,obsy,sum,i,j,k);
    cout << sum;
    return 0;
}
