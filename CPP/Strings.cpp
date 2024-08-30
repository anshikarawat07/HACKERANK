#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1,str2,str3;
    getline(cin,str1);
    getline(cin,str2);
    cout<<str1.size()<<" "<<str2.size()<<endl;
    str3=str1+str2;
    cout<<str3<<endl;
    char temp=str1[0];
    str1[0]=str2[0];
    str2[0]=temp;
    cout<<str1<<" "<<str2<<endl;
    return 0;
}
