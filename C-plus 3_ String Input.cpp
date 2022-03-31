#include<bits/stdc++.h>
using namespace std;

int main() {

    // C language...
    char str[202];
    scanf("%[^\n]",str);
    printf( "%s\n",str);

    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%*[\n]%[^\n]",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);


    // c++ Language...
    string str2;
    getline(cin, str2);

    char str1[100];
    // cin.get(str1, 100);
    cin.get(str1, 100,'\n');

    cout << str2 << endl;
    cout << str1 << endl;
}



