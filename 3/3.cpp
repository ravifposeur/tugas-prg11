#include <bits/stdc++.h>
using namespace std;

int main(){
	float p,l;												//declare float panjang dan lebar
	cin >> p >> l;											//masukan nilai p dan l
	float K = 2*(p+l);										//declare float keliling dan beri nilai sesuai rumus keliling
	float L = p*l;											//declare float luas dan beri nilai sesuai rumus luas
	cout << "Luas: " << L << "\n" << "Keliling: " << K;		//display nilai luas dan keliling persegi panjang
}
