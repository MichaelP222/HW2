// complete the function definitions
#include "../include/matrix.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <sstream>
using namespace std;

void fileIO(string filename, int A[][AR_CAP], int& n1, int& m1, int B[][AR_CAP], int& n2, int& m2){
    ifstream infile;
    infile.open(filename);
    if (!infile.is_open()){
        cout << "Error: Cannot open file "+filename;
        return;
    }

    string line;

    if (getline(infile, line)) {
        n1 = stoi(line);
    }
    if (getline(infile, line)) {
        m1 = stoi(line);
    }
    
    getline(infile, line);

    for (int i = 0; i < n1; i++) {
        if (getline(infile, line)) {
            stringstream currentline(line);
            for (int j = 0; j < m1; j++) {
                currentline >> A[i][j];
            }
        }
    }

    getline(infile, line);

    if (getline(infile, line)) {
        n2 = stoi(line);
    }
    if (getline(infile, line)) {
        m2 = stoi(line);
    }

    getline(infile, line);

    for (int i = 0; i < n2; i++) {
        if (getline(infile, line)) {
            stringstream currentline(line);
            for (int j = 0; j < m2; j++) {
                currentline >> B[i][j];
            }
        }
    }

    infile.close();
    return;
}

void matrixAddition(const int A[][AR_CAP], int n1, int m1, const int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
    if (!(n1 == n2 && m1 == m2)){
        for (int i = 0; i < AR_CAP; i++) {
            for (int j = 0; j < AR_CAP; j++) {
                res[i][j] = 0;
            }
        }
        return;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            res[i][j] = A[i][j] + B[i][j];
        }
    }
}

void matrixSubtraction(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
        if (!(n1 == n2 && m1 == m2)){
        for (int i = 0; i < AR_CAP; i++) {
            for (int j = 0; j < AR_CAP; j++) {
                res[i][j] = 0;
            }
        }
        return;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            res[i][j] = A[i][j] - B[i][j];
        }
    }
}

void matrixMultiplication(int A[][AR_CAP], int n1, int m1, int B[][AR_CAP], int n2, int m2, int res[][AR_CAP]){
    if (m1 != n2) {
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m2; j++) {
                res[i][j] = 0;
            }
        }
        return;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < m1; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void matrixTranspose(int M[][AR_CAP], int n, int m, int res[][AR_CAP]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            res[i][j] = M[j][i];
        }
    }
}

double matrixDeterminant3D(int M[3][3]){
    double result = M[0][0] * (M[1][1] * M[2][2] - M[1][2] * M[2][1]) - M[0][1] * (M[1][0] * M[2][2] - M[1][2] * M[2][0]) + M[0][2] * (M[1][0] * M[2][1] - M[1][1] * M[2][0]);
    return result;
}

void print2DMatrix(const int M[][AR_CAP], int n1, int m1){
    for (int i = 0; i < n1; i++){
        for (int j = 0; j < m1; j++){
            cout << M[i][j] << ' ';
        }
        cout << endl;
    }
    return;
}