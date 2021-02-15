#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        /*string s;cin.ignore();getline(cin,s);
        string hour;string tme;
        istringstream X(s);
        while(X>>hour)
        tme+=hour;*/
        
        string tme="";
        char c;
        for(int i=0;i<7;i++)
        {cin>>c;tme.push_back(c);}

        int h = (tme[0]-'0')*10 + (tme[1]-'0');
        if(tme[5]=='P')
        h = (h + 12);
        else if(tme[5]=='A' && h==12)
        h = 0;
    
        int mins = h*60 + (tme[3]-'0')*10 + (tme[4]-'0');
    
        int n;cin>>n;
        string jabab;
        while(n--)
        {
            /*string s1;cin.ignore();getline(cin,s1);
            string hour1;string tme1;
            istringstream X1(s1);
            while(X1>>hour1)
            tme1+=hour1;

            string s2;getline(cin,s2);
            string hour2;string tme2;
            istringstream X2(s2);
            while(X2>>hour2)
            tme2+=hour2;*/

            string tme1="";
            string tme2="";
            char c;
            for(int i=0;i<7;i++)
            {cin>>c;tme1.push_back(c);}

            for(int i=0;i<7;i++)
            {cin>>c;tme2.push_back(c);}

            int h1 = (tme1[0]-'0')*10 + (tme1[1]-'0');
            if(tme1[5]=='P' && h1!=12)
            h1 = (h1 + 12);
            else if(tme1[5]=='A' && h1==12)
            h1 = 0;
            int mins1 = h1*60 + (tme1[3]-'0')*10 + (tme1[4]-'0');

            int h2 = (tme2[0]-'0')*10 + (tme2[1]-'0');
            if(tme2[5]=='P')
            h2 = (h2 + 12);
            else if(tme2[5]=='A' && h2==12)
            h2 = 0;
    
            int mins2 = h2*60 + (tme2[3]-'0')*10 + (tme2[4]-'0');

            cout<<mins<<" "<<mins1<<" "<<mins2<<"\n";
            if(mins>=mins1 && mins<=mins2)
            jabab.push_back('1');
            else jabab.push_back('0');
        }
        cout<<jabab<<"\n";       
    }
    return 0;
}