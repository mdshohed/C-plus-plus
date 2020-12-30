
// structure create  first time...

#include<bits/stdc++.h>
using namespace std;

struct student {
        int id;
        char name[100];
    };

int main()
{

    struct student one;
    scanf("%d",&one.id);
    scanf("%s",one.name);

    printf("ID : %d\n",one.id);
    printf("Name : %s\n",one.name);
    return 0;
}




// first and last name create structure.....

#include<bits/stdc++.h>
using namespace std;

struct nametype{
    char first[100];
    char last[100];
};

struct student {
        int id;
        struct nametype name;
};
/// I have used class struc of c++....
#include<bits/stdc++.h>
using namespace std;

class shape{

public:
    void setwidth(int w){
        width = w;
    }
    void setheight(int h){
        height = h;
    }

protected:
    int width;
    int height;

};

class paintcost{

public:
    int getcost(int area){
        return area* 70;
    }
};

class rectangle : public shape,public paintcost
{

public:
    int getarea(){
        return (width*height);
    }
};

int main (void)
{
    rectangle ract;
    int area;

    ract.setwidth(5);
    ract.setheight(7);

    area = ract.getarea();

    cout<<"total area: "<<ract.getarea()<<endl;
    cout<<"total pain cost: "<<ract.getcost(area)<<endl;
    return 0;

}


int main()
{
    struct student one;

    scanf("%d",&one.id);
    scanf("%s",one.name.first);
    scanf("%s",one.name.last);

    printf("ID : %d\n",one.id);
    printf("Name : %s %s\n",one.name.first,one.name.last);
    return 0;

}


// many student data input in for loop in structure....

#include<bits/stdc++.h>
using namespace std;

struct nametype{
    char first[100];
    char last[100];
};

struct studenttype {
        int id;
        struct nametype name;
};

int main()
{
    struct studenttype student[5];
    int i,n=5;
    cout<<"Input :"<<"\n";
    for( i = 0; i<n; i++){
        printf("Enter the id number for student : %d\n",i+1);
        scanf("%d",&student[i].id);
        cout<<"Name of student : ";
        scanf("%s%s",student[i].name.first,student[i].name.last);
    }
    cout<<endl;
    cout<<"Output :"<<"\n";
    for ( i = 0; i<n; i++){
            cout<<"ID : "<<student[i].id<<"\n";
            cout<<"Name : "<<student[i].name.first<<" "<<student[i].name.last<<"\n";
    }

    return 0;

}





















