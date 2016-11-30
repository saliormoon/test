# include<iostream>
# include <fstream>
using namespace std;
//所谓namespace，是指标识符的各种可见范围。C＋＋标准程序库中的所有标识符都被定义于一个名为std的namespace中。

class A{
public:
 int num1;
 int num2;
 A(int a,int b){
 	num1=a;
 	num2=b;
 }
A& operator += ( const A& B){
num1+=B.num1;
num2+=B.num2;
return *this;
}
};


int main(){
	A C=A(1,2);
	cout<<C.num1<<"\t"<<C.num2<<endl;
    C+=C;
   cout<<C.num1<<"\t"<<C.num2<<endl;
	return 0;
}




