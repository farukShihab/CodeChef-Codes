#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
	ios_base:: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool x=false;
        for(int i=0;i<n;i++){
            int c=0;
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                c++;
                for(i++;;i++){
                    if(i>n-1)break;
                    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')c++;
                    else break;
                }
                if(c>=4){
                    x=true;
                    cout<<"NO"<<endl;
                    break;
                }

            }
        }
        if(x==false)cout<< "YES"<<endl;
	}













    return 0;
}
