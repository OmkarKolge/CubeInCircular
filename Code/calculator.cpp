using namespace std;

#include <iostream>

int main(){
    double a,b;
    cout<<"Enter A1 : ";
    cin>>a;
    double result=0; 
    int z=0;
    while (z!=1)
    {
        cout<<"\nChoose operations : \n'+', '-', '*', '/', '^'\n'e For Exit' : ";
        char ch;
        cin>>ch;      
        switch (ch)
        {
        case '+':
            if(result!=0){
                cout<<"Enter B : ";
                cin>>b;
                result =result+b;
            }else{
                 cout<<"Enter B1 : ";
                cin>>b;
                result=a+b;
            }
            cout<<result;
            break;
        case '-':
            if(result!=0){
                 cout<<"Enter B : ";
                cin>>b;
                result =result-b;
            }else{
                 cout<<"Enter B1 : ";
                cin>>b;
                result=a-b;
            }
            cout<<result;
            break;
        case '*':
            if(result!=0){
                 cout<<"Enter B : ";
                cin>>b;
                result =result*b;
            }else{
                 cout<<"Enter B1 : ";
                cin>>b;
                result=a*b;
            }
            cout<<result;
            break;   
        case '/':
            if(result!=0){
                cout<<"Enter B : ";
                cin>>b;
                result =result/b;
            }else{
                 cout<<"Enter B1 : ";
                cin>>b;
                result=a/b;
            }
            cout<<result;
            break;   
        case '^':
            if(result!=0){
                cout<<"Enter power : ";
                cin>>b;
                double pow=1;
                while (b>0)
                {
                    pow=pow*result;
                    --b;
                }
                 result=pow;                 
            }else{
                cout<<"Enter power : ";
                cin>>b;
                double pow=1;
                while (b>0)
                {
                    pow=pow*a;
                    --b;
                }
               result=pow; 
            }
            cout<<result;
            break;      
        case 'e':
            z=1;
            break;
        
        default:
            cout<<"Please choose correct operation";
            break;
        }
    }

    cout<<"Answer : "<<result;
    
}