#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int var=1;
    double r, s, t, c;
    
    s=var/2;
    cout<<"s = "<<s<<endl;
    
    r = static_cast<double>(var);
	r = r/2;
    cout<<"r = "<<r<<endl;
    
    t=(double)var/2;
    cout<<"t = "<<t<<endl;

    
}
