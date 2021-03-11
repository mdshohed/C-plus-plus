#include<bits/stdc++.h>
using namespace std;

struct node {
    int id;
    string name;
    string email;
    string password;
    int active;
};


struct node2{
    int id;
    string name;
}ara[100];

int main() {
    node s;
    s.id = 3;
    s.name = "Tusar";
    s.email = "xyz@gmail.com";
    s.password = "abc123";

    cout << s.id << " " << s.name << " " <<  s.email << " " << s.password << endl;

    for (int i = 0; i<3; i++) {
        cin >> ara[i].id >> ara[i].name;
    }
    for (int i = 0; i<3; i++ ) {
        cout << ara[i].id << " " << ara[i].name << endl;
    }
    cout << endl;

    vector<node> v(3); 

}





