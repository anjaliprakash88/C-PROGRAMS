# include<iostream>
# include<string>
using namespace std;
class MyClass{
    public:
    int mynum;
    string mystring;
};
int main(){
    MyClass mc;
    MyClass m1;
    mc.mynum = 45;
    mc.mystring = "hello";
    cout<<mc.mynum<<endl;
    cout<<mc.mystring;


    m1.mynum = 55;
    m1.mystring = "ello";
    cout<<m1.mynum<<endl;
    cout<<m1.mystring;
}


# include<iostream>
# include<string>
using namespace std;
class MyClass{
    public:
    void mymethod();
};

void MyClass::mymethod(){
    cout<<"hello world";
}

int main(){
    MyClass mc;
    mc.mymethod();
    
}

# include<iostream>
# include<string>
using namespace std;
class MyClass{
    public:
    int mymethod(int x){
        return x;
    }
};

int main(){
    MyClass mc;
    cout<<mc.mymethod(200);
    
}


# include<iostream>
# include<string>
using namespace std;
class MyClass{
    public:
    MyClass(){
        cout<<"hello world";
    }
};

int main(){
    MyClass mc;
    
    
}


# include<iostream>
# include<string>
using namespace std;
class MyClass{
    private:
    string brand;
    string model;
    int year;
    MyClass(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
};

int main(){
    MyClass mc("BMW", "X5", 1999);
    cout<<mc.brand;
    
    
}