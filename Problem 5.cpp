#include <iostream>
using namespace std;

int main() {

    int a[10][10],b[10][10],mult[10][10];
    int n,m;
    int i,j,k,l;

    cout <<"Enter your (n x m) matrix : ";
    cin >> n >> m;

    cout <<"\nEnter your first matrix of elements : "<< endl;

    for ( i = 0; i < n ; i++) {
        for ( j = 0; j < m ; j++) {
            cin >> a[i][j];
        }
    }

    cout <<"\nEnter your second matrix of elements : "<< endl;

    for ( i = 0; i < n ; i++) {
        for ( j = 0; j < m ; j++) {
            cin >> b[i][j];
        }
    }


    cout <<"\nYour matrix Multiplication : \n"<< endl;

    for ( i = 0; i < n ; i++) {
        for ( j = 0; j < m ; j++) {
            mult[i][j] = 0;
            for (k = 0; k < m ; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for ( l = 0; l < n; l++) {
        for (i = 0; i < m ; i++) {
            cout << mult[l][i] <<"  ";
        }
        cout <<"\n";
    }
    return 0;
}

