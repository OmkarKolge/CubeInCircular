using namespace std;

#include <iostream>
#include <fstream>
#include <math.h>


double cal_dif(double x1,double y1);

int main(){
    ifstream myFile;
    cout<<"Enter File name : ";
    string file;
    cin>>file;
    myFile.open(file);//point.txt
    //myFile.open("point.txt");
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
    myFile.open(file);//point.txt
    //myFile.open("point.txt");

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

    int n=count/2;
    double dif_arr[n],result;
    int j=0;
    cout<<"\n";

    for (int i = 0; i < count; i++) {
        result=cal_dif(arr[i],arr[++i]);
        cout<<result<<" ";
        dif_arr[j]=result;
        ++j;
    }

    // cout<<"\n";
    // for (int j = 0; j < 3; j++) {
    //     cout<<dif_arr[j]<<" ";
    // }

    double temp;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(dif_arr[i]>dif_arr[j]){
                temp=dif_arr[i];
                dif_arr[i]=dif_arr[j];
                dif_arr[j]=temp;
            }
        }
    }

    // cout<<"\nSorted Difference array:\n";
    
    // for (int j = 0; j < n; j++) {
    //     cout<<dif_arr[j]<<" ";
    // }

    ofstream sfile;
    string file1;
    cout<<"\nEnter File name : ";
    cin>>file1;
    sfile.open(file1);//s_point.txt
    //sfile.open("s_point.txt");

    if(sfile.is_open()){

        sfile<<"Points : "<<endl;
        for (int i = 0; i < count; i++) {
            sfile<<"("<<arr[i]<<","<<arr[++i]<<")"<<endl;
        }        

        sfile<<"Sorted Distance : "<<endl;

        for (int j = 0; j < n; j++) {
            sfile<<dif_arr[j]<<endl;
        }
        cout<<"\nValue Store successfully\n";
        sfile.close();
    }else{
        cout<<"File not found";
    }

    cin.get();
    return 0;
}

double cal_dif(double x1,double y1){
    double x=0,y=0;
    return sqrt(pow(x1 - x, 2) + pow(y1 - y, 2) * 1.0);
}