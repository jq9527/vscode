#include"JQ_LIB.h"

#ifndef CAL
#define CAL

void cal (stack<int> &nums,stack<char> &ops){
        if(nums.empty()||nums.size()<2||ops.empty()) return;
        int b=nums.top(); nums.pop();
        int a=nums.top(); nums.pop();
        char op=ops.top(); ops.pop();
        if(op=='+') nums.push(a+b);
        else if(op=='-') nums.push(a-b);
        else if(op=='*') nums.push(a*b);     
}

int solve(string s) {

    map<char,int> mp;
    mp['+']=1;
    mp['-']=1;
    mp['*']=2;   

    int n=s.size();
    stack<int> nums;
    stack<char> ops;

    for(int i=0;i<n;i++){
        char c=s[i];
        if(c=='(') ops.push(c);

        else if(c==')'){
            while(!ops.empty()){
                if(ops.top()!='(') cal(nums,ops);
                else {ops.pop();break;}
            }
         }

        else {
            if(c>='0'&&c<='9') {
                int u=0;
                int j=i;
                while(j<n&&s[j]>='0'&&s[j]<='9') u=u*10+(s[j++]-'0');
                nums.push(u);
                i=j-1;
            }
            else{
                while(!ops.empty()){
                    char prev=ops.top();
                    if(mp[prev]>=mp[c]) cal(nums,ops);
                    else break;
                }
                ops.push(c);
            }
        }
    }

    while(!ops.empty()) cal(nums,ops);
    return nums.top();
}

#endif