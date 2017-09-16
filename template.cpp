#include<iostream>#include<list>#include<vector>
using namespace std;
typedef vector<int >test;typedef list<int >listtest;
template <class Type>
class baoqingti{ public: baoqingti(Type param){cout<<"param:"<<param<<endl;}; int set(Type parm); int get(Type &parm)const; private: mutable Type i;};
template <class Type>int baoqingti<Type>::set(Type parmo){ i = parmo;  return 0;}template <class Type>int baoqingti<Type>::get(Type &parm)const{ cout<<i<<endl; parm = i; return 0;}template<typename T >void show(T &type){ cout<<"type:"<<type<<endl; return ;}template <typename T,typename T1>void show(T &type, T1 &type1){ cout<<"two param type:"<<type<<" type1:"<<type1<<endl; return ;}template < > void show<string >(string &type){ cout<<"string:"<<type<<endl; return ;}int main(void ){
 int x; double y; baoqingti<int> base(1); baoqingti<double> base1(2.0); base.set(3); base.get(x); cout<<"x:"<<x<<endl; base1.set(4545.324); base1.get(y); cout<<"y:"<<y<<endl; show(x); string string1("sdfsdf"); show(string1); show(y); show(x,y); auto z=2; z=1; cout<<"z:"<<z<<endl; return 0;}
