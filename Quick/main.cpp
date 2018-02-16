#include<iostream>
using namespace std;

class matrix {

	int a[3][3], b[3][3], ans[3][3];
	int r ;
	int c;

	public:
		matrix() {
		    cout << "Enter Row and Colum: ";
		    cin >> r >> c ;
			cout << "Enter data for first Matrix:" << endl;
			for(int i = 0; i < r; i++)
				for(int j = 0; j < c; j++)
					cin >> a[i][j];
			cout << "Enter data for second Matrix:" << endl;
			for(int i = 0; i < r; i++)
				for(int j = 0; j < c; j++)
					cin >> b[i][j];
		}

		void addition() {
			cout << "After matrix addition" << endl;
			for(int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					ans[i][j]= a[i][j] + b[i][j];
					cout << ans[i][j] << "\t";
				}
				cout << endl;
			}
		}
};

int main() {
	cout << "Program for calculation of Matrix Addition" << endl;
	matrix mtAdd = matrix();   //object
	mtAdd.addition();
	return 0;
}
