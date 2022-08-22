using namespace std;

#include <iostream>
#include<vector>
#include <fstream>

int main(){
    ifstream myFile;
    cout<<"Enter File name : ";
    myFile.open("input.txt");
    int count=0;
    if(myFile.is_open()){
        double x;
        while (myFile>>x)
        {
            cout<<x<<endl;
           // arr[i++]=x;
            count++;
        }
        cout<<"Point count : "<<count<<"\n";
        myFile.close();
    }else{
        cout<<"File not found";
    }

    double arr[count];
    myFile.open("input.txt");

    if(myFile.is_open()){
        double x;
        int i=0;
        while (myFile>>x)
        {
            arr[i++]=x;
        }
        myFile.close();
    }else{
        cout<<"File not found";
    }

    for (int i = 0; i < count; i++) {
         cout<<arr[i]<<" ";
    }

    int n=count;
    cout<<"\n";
    ofstream outfile;
    outfile.open("output1.txt");
    if(outfile.is_open())
    {
        int v=6,e=6;
        cout<<v<<" "<<e<<"\n";
        vector<int> g[v+1];

        for(int i=0;i<n;++i) {
            int j=i+1,x,y;
            x=arr[i];
            y=arr[j];
            g[x].push_back(y);
            g[y].push_back(x);
            cout<<arr[i]<<" --> "<<arr[j]<<"\n";
            cout<<arr[j]<<" --> "<<arr[i]<<"\n";
            ++i;
                
            
        }
        
        for(int i=1;i<=v;i++)
        {
            cout<<i<<"--> ";
            outfile<<i<<"-->";
            for(int j=0;j<g[i].size();j++)
            {
                cout<<g[i][j]<<" ";
                outfile<<g[i][j]<<" ";
            }
            cout<<endl;
            outfile<<endl;
        }
       
        outfile.close();
    }
    cin.get();
    return 0;
}