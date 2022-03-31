// constructor call two function...
#include <bits/stdc++.h>
using namespace std;

class details {
private:
    int age;
    string first, last;

public:
    details() {
        cout << "first called" << endl;
        age = 20;
        first = "shohedul";
        last = "islam";

    }

    details(int a, string f, string l) {
        cout << "second called" << endl;
        age =  a;
        first = f;
        last = l;
    }

    void input() {
        cout << age << endl << first << " " << last << endl;
    }
};


int main() {

//    details info;
//    info.input();
    details info(30, "akash" ,"khan" );
    info.input();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class details {
private:
    int age;
    string first, last;

public:
    details() {
        cout << "constructor called" << endl;
    }

    ~details() {
        cout << "distructor called" << endl;
    }

};
int main() {
    details *info;
    info = new details();
    delete info;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class information {
private:
    int *age;
    string *name;
public:
    information(int a, string s) {
        name  = new string;
        age = new int ;
        *name = s;
        *age = a;
    }
    void output(){
        cout << age << endl << name << endl;
    }
    ~information() {
        delete age;
        delete name;
        cout << "all mamory delete" << endl;
    }
};
int main() {
    information *myinfo = new information(20 , "mdshohed");
    myinfo->output();
    delete myinfo;
    return 0;
}


