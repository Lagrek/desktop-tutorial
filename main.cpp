//24.03.2020

/*
#include <iostream>
using namespace std;
class MyClass{
public:
int n;
int m;
int c;
void show(){
cout<<"m = "<<this->m<<endl;
cout<<"n = "<<this->n<<endl;
cout<<"c = "<<this->c<<endl;}
void setmn(int m,int n,int c){
this->m=m;
this->n=n;
this->c=c;}
MyClass change(){
int k;
k=m;
m=n;
n=c;
c=k;
return *this;}
};
int main(){
MyClass a,b,f;
a.setmn(10,20,30);
b=a.change();
a.show();
b.show();
f.show();
return 0;
}
*/



/*
#include <iostream>
using namespace std;
class MyClass{
public:
int n;
void show(){
cout<<"n = "<<n<<endl;
}
};
int main(){
MyClass a,b,d;
MyClass *p,*q,*f;
p=&a;
q=&b;
f=&d;
p->n=10;
(*q).n=20;
f->n=223;
p->show();
(*q).show();
f->show();
return 0;
}
*/
