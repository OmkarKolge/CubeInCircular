using namespace std;

#include <iostream>
#include <bits/stdc++.h>

int pre(char ch){
    if(ch=='+'){
        return 1;
    }else if(ch=='-'){
        return 1;
    }else if(ch=='*'){
        return 2;
    }else if(ch=='/'){
        return 2;
    }
    return 0;
}

int solve(int v1,int v2,char ch){
    if(ch=='+'){
        return v1+v2;
    }else if(ch=='-'){
        return v1-v2;
    }else if(ch=='*'){
        return v1*v2;
    }else if(ch=='/'){
        return v1/v2;
    }
    return 0;
}

int main(void){
    string str;
    //cin>>str;
    str="2+(5-3*6/2)";
// cout<<str;
    stack<int> i;
    stack<char> op;
    for (int j = 0; j < str.length(); j++) {
        char ch=str[j];

        if(isdigit(ch)){
            i.push(ch-'0');
        }else if(ch=='('){
            op.push(ch);
        }else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            while (op.size()>0 && op.top() !='(' && pre(ch) <= pre(op.top()))
            {
                int v2=i.top();
                i.pop();
                int v1=i.top();
                i.pop();
                char op1=op.top();
                op.pop();

                int ans=solve(v1,v2,op1);
                i.push(ans);
            }
            op.push(ch);
        }else if(ch==')'){
            while (op.size()>0 && op.top() !='(')
            {
                int v2=i.top();
                i.pop();
                int v1=i.top();
                i.pop();
                char op1=op.top();
                op.pop();

                int ans=solve(v1,v2,op1);
                i.push(ans);
            }
            if(op.size()>0){
                op.pop();
            }
        }
       
    }

    while (op.size()>0)
    {
        int v2=i.top();
        i.pop();
        int v1=i.top();
        i.pop();
        char op1=op.top();
        op.pop();

        int ans=solve(v1,v2,op1);
        i.push(ans);
    }
    
    int ans=i.top();
    i.pop();

    cout<<ans;

    return 0;
}
