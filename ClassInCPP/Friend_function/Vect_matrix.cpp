/*
    Vector * Matrix Example
    >>create vector class
    >>create matrix class
    >> create global function to multiply vector and matrix
    >> we have to access the private members of the class of vector and matrix, so we use friend function.

 */

#include <iostream>
using namespace std;
class Vector
{
    int e_[3];
    int n_;

public:
    Vector(int e1, int e2, int e3)
    {
        e_[0] = e1;
        e_[1] = e2;
        e_[2] = e3;
        n_ = 3;
    }
    void Clear()
    {
        for (int i = 0; i < n_; i++)
            e_[i] = 0;
    }
    void Show()
    {
        for (int i = 0; i < n_; i++)
            cout << e_[i] << " ";
        cout << endl;
    }
    //-------------add friend function-----------------
    friend Vector operator*(const Matrix &mat, const Vector &vec);
    //-------------------------------------------------
};

class Matrix
{
    int e_[3][3];
    int n_, m_;

public:
    Matrix(const int mat[3][3], int n, int m)
    {
        n_ = n;
        m_ = m;
        for (int i = 0; i < n_; i++)
            for (int j = 0; j < m_; j++)
                e_[i][j] = mat[i][j];
    }
    void Display()
    {
        for (int i = 0; i < n_; i++)
        {
            for (int j = 0; j < m_; j++)
                cout << e_[i][j] << " ";
            cout << endl;
        }
    }
    //-------------add friend function-----------------
    friend Vector operator*(const Matrix &ma, const Vector &ve);
    //-------------------------------------------------
};

Vector operator*(const Matrix &ma, const Vector &ve)
{
    Vector result(0, 0, 0);
    for (int i = 0; i < ma.n_; i++)
        for (int j = 0; j < ma.m_; j++)
            result.e_[i] += ma.e_[i][j] * ve.e_[j];
    return result;
}

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix m(mat, 3, 3);
    m.Display();
    Vector v(1, 2, 3);
    v.Show();
    Vector r = m * v;
    r.Show();
    return 0;
}
