#include <iostream>;
using namespace std;

//prototype
int pangkat(int a,int b);



int main(){

int angka,kuadrat,hasil;

cout<<" masukan angka : ";
cin>>angka;
cout<<"nilai pangkat : ";
cin>>kuadrat;

hasil=pangkat(angka,kuadrat);

cout<<" hasil nya adalah : "<<hasil;


return 0;
}

//definisi prototype
int pangkat(int a, int b)
{
if(b==0)
{
return 1;
}

else if(b==1)
{
    cout<<a;
    return a;
}

else{
cout<<a<<" * ";
return a*pangkat(a,b-1);
}

}
