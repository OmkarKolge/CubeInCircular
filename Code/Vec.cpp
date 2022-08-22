// #include<iostream>
// #include<vector>
// using namespace std;

// template <class T>
// void display(vector<T> &v){
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }
//     for(T vec:v)
//         cout<<vec<<" ";
//     cout<<endl;
// }
// int main(){ 
//     vector<int> vec1;
//     // int element, size;
//     // cout<<"Enter the size of your vector"<<endl;
//     // cin>>size;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout<<"Enter an element to add to this vector: ";
//     //     cin>>element;
//     //     vec1.push_back(element);
//     // }
//     // display(vec1);  
      
//     // vector<int> :: iterator iter = vec1.begin();
//     // vec1.insert(iter+1,6);
//     // display(vec1);

//     // vector<int> vec2(vec1);
//     // display(vec2);

//     // vector<int> vec3={1,5,2,4,3};
//     // display(vec3);

//     vector <float> v_1;

//     v_1.push_back(12.3);
//     v_1.push_back(1.01);
//     v_1.push_back(0.01);

//     display(v_1);

//     cout<<"\n"<<v_1[1];

//     return 0;
// }


// CPP program to rotate vector
// using rotate algorithm

#include<bits/stdc++.h>
using namespace std;

int main () {
	vector<int> vec1{1,2,3,4,5,6,7,8,9};

	// Print old vector
	cout << "Old vector :";
	for(int i=0; i < vec1.size(); i++)
		cout << " " << vec1[i];
	cout << "\n";
	// Rotate vector left 3 times.
	int rotL=3;

	// rotate function
	rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());

	// Print new vector
	cout << "New vector after left rotation :";
	for (int i=0; i < vec1.size(); i++)
		cout<<" "<<vec1[i];
	cout << "\n\n";

	vector <int> vec2{1,2,3,4,5,6,7,8,9};

	// Print old vector
	cout << "Old vector :";
	for (int i=0; i < vec2.size(); i++)
		cout << " " << vec2[i];
	cout << "\n";

	// Rotate vector right 4 times.
	int rotR = 4;

	// rotate function
	rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end());

	// Print new vector
	cout << "New vector after right rotation :";
	for (int i=0; i < vec2.size(); i++)
		cout << " " << vec2[i];
	cout << "\n";

return 0;
}
