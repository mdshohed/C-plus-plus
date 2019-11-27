/*#include<iostream>
using namespace std;

class myclass{
    public:
    int a;
};

int main()
{
    myclass ob1,ob2;
    ob1.a = 40;
    ob2.a = 50;
    cout<< ob1.a<<"\n";
    cout<< ob2.a<<"\n";
    return 0;

}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *input,*output;
    char *input_file = "photo.jpg";
    char *output_file = "photo2.jpg";
    int ch;
    input = fopen(input_file, "rb");
    if ( input == NULL){
        perror("file opening failed");
        return EXIT_FAILURE;
    }
    output = fopen(output_file,"wb");
    while (1){
        ch = fgetc(input);
        if ( ch == EOF){
            break;
        }
        fputc(ch,output);
    }
    fclose(input);
    fclose(output);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

struct nametype{
    char first[200],last[300];
};
struct student{
    int id;
    struct nametype name;
};
main()
{
    struct student one;
    scanf("%d",&one.id);
    scanf("%s",one.name.first);
    scanf("%s",one.name.last);
    printf("ID: %d\n",one.id);
    printf("name: %s %s\n",one.name.first,one.name.last);
    return 0;

}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int **ara, i,n,total_class,j,num[13];
    cin>>total_class;
    ara = (int ** )malloc(sizeof(int *) * total_class);

    if ( ara == NULL){
        cout<<"memory allocation failed\n"<<endl;
        return 1;
    }
    for ( i = 0; i< total_class; i++){
        cout<<"enter tha class student number: ";
        cin>>n;
        num[i] = n;
        ara[i] = (int * ) malloc (sizeof(int)*n);
        if( ara[i] == NULL){
            cout<<"memory allocation failed\n";
            return 1;
        }
        for ( j = 0; j<n; j++){
            cout<<"enter marks for student "<<j+1<<endl;
            cin>>ara[i][j];
        }
    }

    //now print the results
    cout<<"output"<<endl;
    for ( i = 0; i<total_class ; i++){
        cout<<"class : "<<i+1<<endl;
        for ( j = 0; j<num[i] ; j++){
                cout<<ara[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,t,i,j;

    cin>>t;
    while(t--){

        cin>>n1;
        int ara[n1];

        for ( i = 0; i<n1; i++ ) cin>>ara[i];

        cin>>n2;
        int ara2[n2];

        for( i = 0; i<n2; i++ ) cin>>ara2[i];

        int k = n1+n2;
        int ara3[k];

        for( i = 0; i<k; i++){

            if ( ara[i] < ara2[i]){
                ara3[i] = ara[i];
            }
            else{
                ara3[i] = ara2[i];
            }
        }

        cout<<ara[0];
        for ( i = 1; i<k; i++){

            cout<<" "<<ara3[i];
        }

    }

    return 0;

}









