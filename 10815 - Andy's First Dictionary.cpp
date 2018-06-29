#include<bits/stdc++.h>

using namespace std;

char ss[1000009];

int main()
{
    //freopen("inp.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<string> tr;
    while(gets(ss)){
        string pp = "";
        for(int i = 0; ss[i]; i++){
            if(isalpha(ss[i]))pp += tolower(ss[i]);
            else pp += " ";
        }
        stringstream sin(pp);
        string token;

        while(sin >> token){
            tr.insert(token);
        }

    }
     for(set<string> :: iterator it = tr.begin(); it != tr.end(); it++){
            cout << *(it) << endl;
        }
}

