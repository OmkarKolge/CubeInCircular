#include <iostream>
#include <thread>

using namespace std;

void run(int count){
    while(count-->0)
        cout<<count<<" OM "<<endl;
     this_thread::sleep_for(chrono::seconds(5));
}
int main() {
    thread t1(run,10);
    cout<<"main()"<<endl;

    t1.detach();

    cout<<"Main() end"<<endl;

   
    return 0;
}