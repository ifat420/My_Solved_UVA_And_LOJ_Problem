//Allah is Almighty //
#include<bits/stdc++.h>
using namespace std;


bool primeChecker(long long n){

    if(n < 2)return true;

    for(long long  i = 2; i * i<= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<long long> primes;
    long long num, upBound, lowBoud,c,vlen, prNum;

    while((scanf("%lld %lld",&num,&c)!= EOF)){
            vlen = prNum = upBound = lowBoud = 0;
        for(long long i = 1; i <= num; i++){
            if(primeChecker(i)){
                primes.push_back(i);
            }
        }
        vlen = primes.size();
        if(vlen % 2 == 0){
            prNum = c * 2;
            if(prNum > vlen){
                upBound = vlen;
                lowBoud = 0;
            }else{
                lowBoud = ((vlen - prNum) /2);
                upBound = lowBoud + prNum;
            }
        } else{
            prNum = (c * 2) - 1;
             if(prNum > vlen){
                upBound = vlen;
                lowBoud = 0;
            }else{
                lowBoud = ((vlen - prNum) /2);
                upBound = lowBoud + prNum;
            }
        }
        cout << num << " " << c << ":";
        for(long long i = lowBoud; i < upBound; i++){
            cout << " " << primes[i];
        }

        cout << endl << endl;
         primes.clear();

    }
    return 0;
}
