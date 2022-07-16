#include<bits/stdc++.h>
#include <exception>
using namespace std;

void add(string str)
{
    int count=0,n=str.length(),sum=0;
    bool b=false;
    vector<int>v;
    try {
        for(int i=0;i<n;i++)
        {
            if((str[i]>='0'&& str[i]<='9') )
            {
                if(str[i-1]=='-')
                {
                    count++;
                    v.push_back(-1*(str[i]-'0'));
                }
                else{
                sum+=(str[i]-'0');
                }

            }
            
        }
        if(count)
        {
             
            throw v;  

        }
    }

      
 catch (const vector<int>v) {
    b=true;
     cout<< "negatives not allowed"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i] << endl;

    }
     
   }
   if(b==false)
   {
    cout<<"Sum is"<<" "<<sum;
   }
   

}
int main()
{
    string str;
    cout<<"Enter string";
    getline(cin,str);
    add(str);
    
}