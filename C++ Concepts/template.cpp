#include<iostream>
using namespace std;
template <class T>
class Arithmetic{
    private:
    T a;
    T b;
    public:
    Arithmetic(T a,T b){
        this->a=a;
        this->b=b;
    }
    T add(){
        T c;
        c=a+b;
        return c;
    }
    T sub(){
        T c;
        c=a-b;
        return c;
    }
};
int main(){
    Arithmetic<float> ar(10.1,5.1);
    cout<<ar.add()<<endl<<ar.sub();
}