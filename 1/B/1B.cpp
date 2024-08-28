#include <bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c,d;						//declare float a, b, c, d
	cin >> a >> b >> c >> d;			//input nilai a, b, c, d
	float m = (a-b)/3*a*c*(1-b/c*d);	//declare m dan memasukan nilai persamaan dari soal ke float m
	cout << m;							//display nilai dari m
}
