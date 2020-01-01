#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[202];
    int i;
    
    /// string array reverse.....
    scanf("%[^\n]",str);
    for ( i = strlen(str) - 1; i>=0; i--){
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}

/// character input from get and getline function use------

#include<bits/stdc++.h>
using namespace std;

int main() {

    char leter, str[100];

    /// character input from get and getline function use-----

    cin.getline(str,100);
    
    leter = cin.get();
    cout<<str<<endl;

    cout<<leter<<"\n";
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%*[\n]%[^\n]",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
