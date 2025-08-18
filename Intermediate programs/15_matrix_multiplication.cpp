#include <iostream>
using namespace std;
int main() {
    int m, n, p, q;
    // Input sizes
    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;
    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    // Check compatibility
    if (n != p) {
        cout << "Matrix multiplication not possible! (Columns of A != Rows of B)";
        return 0;
    }

    int A[m][n], B[p][q], result[m][q];

    // Input A
    cout << "Enter elements of first matrix (A):\n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<"A("<<i+1<<","<<j+1<<"):";
            cin >> A[i][j];
        }
    }    

    // Input B
    cout << "Enter elements of second matrix (B):\n";
    for (int i = 0; i < p; i++){
        for (int j = 0; j < q; j++){
            cout<<"B("<<i+1<<","<<j+1<<"):";
            cin >> B[i][j];
        }
    }    

    // Multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant Matrix (A x B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
