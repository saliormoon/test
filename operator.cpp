# include<iostream>
# include <fstream>
using namespace std;
                                  //��νnamespace����ָ��ʶ���ĸ��ֿɼ���Χ��C������׼������е����б�ʶ������������һ����Ϊstd��namespace�С�

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




