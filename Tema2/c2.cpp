#include<iostream>
#include <string>
using namespace std;

int b1tob10(int n, int b1){
    int nrb10=0;
    int length=to_string(n).length();
    for(int i=0;i<length;i++){
        //convertim la baza 10 
        int num;
        num=n%10;
        n/=10;
        nrb10+=num*(pow(b1,i));
        //cout<<nrb10<<endl;
    }
    return nrb10;
}

string b10tob2(int n, int b2){
    string nrb2=" ";
    int num;
    if (n<b2) {return to_string(n);}
    else{
    while(n){
        num= n%b2;
        n/=b2;
        nrb2+=to_string(num);
    }
    reverse(nrb2.begin(), nrb2.end());
    return nrb2;}
}

void b1tob2(){
    int n,b1,b2;
    cout<<"DIN B1 IN B2"<<endl;
    cout<<"introduceti numarul: ";
    cin>>n;
    cout<<"in ce baza e n? ";
    cin>>b1;
    cout<<"introduceti baza 2: ";
    cin>>b2;
    if ((b1<2 || b1>26) &&(b2<2 || b2>27) ){
        cout<<"introduceti o baza intre 2 si 26";
    }
    else{
        n=b1tob10(n,b1);
        cout<< "raspuns: "<<b10tob2(n,b2);

    }

}

int main(){
    // int n=1111;
    // int b1=2;
    // int b2=16;
    // cout<<b10tob2(3392,8);
    b1tob2();

}