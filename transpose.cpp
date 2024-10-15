#include<iostream>
using namespace std;
void transposeOfMatrix(int *A[],int n,int m){
    for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < m; j++) { 
        int temp = A[i][j];
        A[i][j] = A[j][i];
        A[j][i] = temp;
    }
}
return ;

}

int main() {
    int n, m;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    cout << "Enter the number of columns (m): ";
    cin >> m;

    // Dynamic memory allocation for the matrix
    int **A = new int*[n];
    for (int i = 0; i < n; ++i) {
        A[i] = new int[m];
    }

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
        
            cin >> A[i][j];
        }
    }
    transposeOfMatrix(A,n,m);

    // Print the transposed matrix
    cout << "Transposed matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < n; ++i) {
        delete [] A[i];
    }
    delete [] A;

    return 0;
}
