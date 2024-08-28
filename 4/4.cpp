#include <bits/stdc++.h>
using namespace std;

int main(){
	float x1, x2, y1, y2;									//declare float x1, x2, y1, y2
	cout << "Masukkan koordinat titik A:";				
	cin >> x1 >> y1;										//input koordinat x dan y titik A
	cout << "Masukkan koordinat titik B:";					//input koordinat x dan y titik B
	cin >> x2 >> y2;
	float d = pow(pow(x1 -x2, 2)+pow(y1 -y2, 2), 1/2);		//hitung jarak dengan variabel d
	cout << "Jarak: " << d << endl;							//display nilai d
}
