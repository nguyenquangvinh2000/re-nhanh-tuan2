#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"nhap so thu 1:"<<endl;
    cin>>a;
    cout<<"nhap so thu 2:"<<endl;
    cin>>b;
    cout<<"nhap so thu 3:"<<endl;
    cin>>c;
	if ((a>b)&&(b>c))
		cout<<c<<","<<b<<","<<a<<endl;
	else if((a>c)&&(c>b))
		cout<<b<<","<<c<<","<<a<<endl;
	else if((b>a)&&(a>c))
		cout<<c<<","<<a<<","<<b<<endl;
	else if((b>c)&&(c>a))
		cout<<a<<","<<c<<","<<b<<endl;
	else if((c>b)&&(b>a))
		cout<<a<<","<<b<<","<<c<<endl;
	else if((c>a)&&(a>b))
		cout<<b<<","<<a<<","<<c<<endl;
	return 0;

}

