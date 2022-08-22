using namespace std;

#include<iostream>

int main()
{
   cout<<"Hello world\n";
   
    int a[5] = {1, 2, 3, 4, 5};
   int j;
   for(j=0; j<5; j++)
   {
      cout<<a[j]<<" ";
   }

   cout<<"\nEnter size of array";
   int n;
   cin>>n;
   int arr[n];
   int i;
   //int *arr=new int[n];

   cout<<"\nEnter array elements:\n";
   for(i=0; i<n; i++)
   {
      cin>>arr[i];
   }
   cout<<"\nThe array elements are: \n";
   for(i=0; i<n; i++)
   {
      cout<<arr[i]<<"  ";
   }

   return 0;
}
   // double x,y;
        // while (myFile>>x)
        // {
        //     myFile>>x;
        //    // myFile>>y;
        //     // myFile>>z;
        //     myFile>> x ;

        //     cout<<x<<" ";
        // }
        
        // double x,y;
        // myFile>>x;
        // myFile>>y;
        // // myFile>>z;
        // myFile>> x >> y ;

        // cout<<x<<" "<<y<<endl;