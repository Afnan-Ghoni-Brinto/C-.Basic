#include<iostream>
using namespace std;
int main(){
int rows = 2;
    int cols = 2;
    int scores[rows][cols];
    int transposed[cols][rows];
    cout << "Enter the number of 2 students in 2 subjects:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter score for Student " << i + 1 << ", Subject " << j + 1 << ": ";
            cin >> scores[i][j];
        }}
    cout << "Original Matrix (Scores):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << scores[i][j] << " ";
        }
        cout << endl;}
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = scores[i][j];
        }
    }
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;}
return 0;
}
