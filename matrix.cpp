#include <iostream>
struct Matrix {
    int data[2][2];
};
Matrix readMatrix() {
    Matrix mat;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> mat.data[i][j];
        }
    }
    return mat;
}

void printMatrix(const Matrix& mat) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << mat.data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

Matrix& addTo(Matrix& A, const Matrix& B) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            A.data[i][j] += B.data[i][j];
        }
    }
    return A;
}

int main() {
    Matrix mat1 = readMatrix();
    Matrix mat2 = readMatrix();
    Matrix mat3 = readMatrix();

    addTo(addTo(mat1, mat2), mat3);

    printMatrix(mat1);

    return 0;
}