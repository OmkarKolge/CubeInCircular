using namespace std;

#include <iostream>
#include <fstream>
#include <math.h>


double cal_dif(double x1,double y1);

int main(){
    ifstream myFile;
    // cout<<"Enter File name : ";
    // string file;
    // cin>>file;
    myFile.open("point.txt");//point.txt
    double arr[6];
    if(myFile.is_open()){
        double x;
        int i=0;

        while (myFile>>x)
        {
            cout<<x<<endl;
            arr[i++]=x; 
        }
        myFile.close();
    }else{
        cout<<"File not found";
    }

    double dif_arr[3],result;
    int j=0;
    cout<<"\n";

    for (int i = 0; i < 6; i++) {
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
    for(int k=0;k<3;k++) {
        for(int l=k+1;l<3;l++) {
            if(dif_arr[k]>dif_arr[l]){
                temp=dif_arr[k];
                dif_arr[k]=dif_arr[l];
                dif_arr[l]=temp;
            }
        }
    }

    cout<<"\nSorted Difference array:\n";
    
    for (int j = 0; j < 3; j++) {
        cout<<dif_arr[j]<<" ";
    }

    ofstream sfile;
    // string file1;
    // cout<<"\nEnter File name : ";
    // cin>>file1;
    sfile.open("s_point.txt");//s_point.txt

    if(sfile.is_open()){

        sfile<<"Points : "<<endl;
        for (int i = 0; i < 6; i++)
        {
            sfile<<"("<<arr[i]<<","<<arr[++i]<<")"<<endl;
        }

        sfile<<"Distance : "<<endl;

        for (int j = 0; j < 3; j++) {
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