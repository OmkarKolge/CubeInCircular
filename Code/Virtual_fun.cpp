// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Animal {
// //    private:
// //     string type;

// //    public:
// //     // constructor to initialize type
// //     Animal() : type("Animal") {}

// //     // declare virtual function
// //     virtual string getType() {
// //         return type;
// //     }
// // };

// // class Dog : public Animal {
// //    private:
// //     string type;

// //    public:
// //     // constructor to initialize type
// //     Dog() : type("Dog") {}

// //     string getType() {
// //         return type;
// //     }
// // };

// // class Cat : public Animal {
// //    private:
// //     string type;

// //    public:
// //     // constructor to initialize type
// //     Cat() : type("Cat") {}

// //     string getType() {
// //         return type;
// //     }
// // };

// // void print(Animal* ani) {
// //     cout << "Animal: " << ani->getType() << endl;
// // }

// // int main() {
// //     Animal* animal1 = new Animal();
// //     Animal* dog1 = new Dog();
// //     Animal* cat1 = new Cat();

// //     print(animal1);
// //     print(dog1);
// //     print(cat1);

// //     return 0;
// // }



// // CPP program to illustrate
// // working of Virtual Functions


// // #include <iostream>
// // using namespace std;

// // class base
// // {
// // public:
// //     void fun_1() { 
// //         cout << "base-1\n"; 
// //     }

// //     virtual void fun_2() {
// //         cout << "base-2\n"; 
// //     }

// //     virtual void fun_3() { 
// //         cout << "base-3\n"; 
// //     }

// //     virtual void fun_4() { 
// //         cout << "base-4\n"; 
// //     }
// // };

// // class derived : public base
// // {
// // public:
// //     void fun_1() { 
// //         cout << "derived-1\n"; 
// //     }

// //     void fun_2() { 
// //         cout << "derived-2\n"; 
// //     }
    
// //     void fun_4(int x) { 
// //         cout << "derived-4\n"; 
// //     }
// // };

// // int main()
// // {
// //     base *p;
// //     derived obj1;
// //     p = &obj1;

// //     // Early binding because fun1() is non-virtual
// //     // in base
// //     p->fun_1();

// //     // Late binding (RTP)
// //     p->fun_2();

// //     // Late binding (RTP)
// //     p->fun_3();

// //     // Late binding (RTP)
// //     p->fun_4();

// //     // Early binding but this function call is
// //     // illegal (produces error) because pointer
// //     // is of base type and function is of 
// //     // derived class
// //     // p->fun_4(5);

// //     return 0;
// // }


#include <iostream>
using namespace std;

class WAP{
    protected:
    string name;
    float rate;
    public:
    WAP(string name, float rate){
        this->name=name;
        this->rate=rate;
    }

    virtual void display()=0;
};

class WAPVideo: public WAP{
    float duration;
    public:
    WAPVideo(string name, float rate, float duration):WAP(name,rate){
        this->duration=duration;
    }

    void display(){
        cout<<"WhatsAPP Name : "<<name<<endl<<"Ratings : "<<rate<<endl;
        cout<<"Duration : "<<duration<<endl;
    }    
};

class WAPChat: public WAP{
    int text;
    public:
    WAPChat(string name, float rate, int text):WAP(name,rate){
        this->text=text;
    }

    void display(){
        cout<<"WhatsAPP Name : "<<name<<endl<<"Ratings : "<<rate<<endl;
        cout<<"Duration : "<<text<<endl;
    }   
};

int main() {
    string name;
    float rate,duration;
    int text;
    name="Raju";
    rate=4.89;
    duration=22.15;
    WAPVideo mv(name,rate,duration);
    // mv.display();

    WAPChat wc("Rinku",4.52,10.12);
    // wc.display();

    WAP* wap[2];
    wap[0]=&mv;
    wap[1]=&wc;

    wap[0]->display();
    wap[1]->display();
    return 0;
}


// #include <iostream>
// #include <cstring>
// using namespace std;

// class CWH{
//     protected:
//         string title;
//         float rating;
//     public:
//         CWH(string s, float r){
//             title =  s;
//             rating = r;
//         }
//         virtual void display(){}
// };

// class CWHVideo: public CWH
// {
//     float videoLength;
//     public:
//         CWHVideo(string s, float r, float vl): CWH(s, r){
//             videoLength = vl;
//         }
//         void display(){
//             cout<<"This is an amazing video with title "<<title<<endl;
//             cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
//             cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
//         }
// };    

// class CWHText: public CWH
// {
//     int words;
//     public:
//         CWHText(string s, float r, int wc): CWH(s, r){
//             words = wc;
//         }
//      void display(){
//       cout<<"This is an amazing text tutorial with title "<<title<<endl;
//       cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
//       cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
//          }
// };

// int main(){
//     string title;
//     float rating, vlen;
//     int words;

//     // for Code With Harry Video
//     title = "Django tutorial";
//     vlen = 4.56;
//     rating = 4.89;
//     CWHVideo djVideo(title, rating, vlen);

//     // for Code With Harry Text
//     title = "Django tutorial Text";
//     words = 433;
//     rating = 4.19;
//     CWHText djText(title, rating, words);

//     CWH* tuts[2];
//     tuts[0] = &djVideo;
//     tuts[1] = &djText;

//     tuts[0]->display();
//     tuts[1]->display();

//     return 0;
// }