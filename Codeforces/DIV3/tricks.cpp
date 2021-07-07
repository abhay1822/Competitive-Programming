#include <bits/stdc++.h>
using namespace std;
int main(){
    ////////////////////NUMBER THEORY////////////////////////////////

	// >> left shift
	//3>>1
	//11->1//binary con
	// << right shift
	/*  3<<1
	11->110 */
	//power
	//1<<n=2^n
	//methods
	cout<<(5>>1);//5/2(int)
	cout<<(5<<1);//5*2
	//(1<<5)//ascii of space 32 
	//upper case to lower case
	char uc='A';
	char ab= uc | (1<<5);//since its 5 bit is unset(uppercase)
	cout<<char(uc&(~(1<<5)));//5 bit is set(lowercase)

	//***alternative method*****
	char al=(uc | ' ');//UC tO LC
	char lc=(uc & '_');//LC to UC
    int i=0;
    //swapping without extra variable
	int a=4,b=6;
	a=a ^ b;
	b=b ^ a;
    a=a  ^ b;

    cout<<__gcd(a,b);
    cout<<(a*b/__gcd(a,b));//LCM

    //SET bit check
    if((a&(1<<i))!=0);
    //odd even check
    if(b&1)
        cout<<"out";
    
        
}