//Allah is Almighty //
#include<bits/stdc++.h>
using namespace std;

int addDigit(int num){
    if(num <= 9){
        return num * num;
    }

   int q, r, ans,check;
    q = r = ans = 0;
    while(1){
        q = num / 10;
        r = num % 10;
        ans = ans + (r*r);
        num = q;
        if(q == 0)break;

    }
    return ans;
}


int main()
{
    int num, item, t, test;
    test = item = 0;
    scanf("%d",&t);
    while(t--){
        test++;
        scanf("%d",&num);
        item = num;
        while(1){
        item = addDigit(item);
        if(item == 1){
            printf("Case #%d: %d is a Happy number.\n",test,num);
            break;
        } else if (item <= 9){
            printf("Case #%d: %d is an Unhappy number.\n",test,num);
            break;
        }
    }
  }
  return 0;
}
