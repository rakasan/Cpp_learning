/* Overload operator in matrix operations */
#include <iostream>
using namespace std;

class matrix
{
    int x[100][100],m,n;

public:
    void setDimension()
    {
        cout<<"Enter the dimensions of the matrix"<<endl;
        cin >> m>>n;
    }

    int matrix_m_row()
    {
        return m;
    }

    int matrix_n_col()
    {
        return n;
    }

    void getValue()
    {
        cout<<"enter "<<m*n<<" values for the matrix"<<endl;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
              cin>>x[i][j];
            }
        }
    }

    void display()
    {
        cout<<"THe matrix is "<<endl;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    void display(int a, int b)
    {
        cout<<"The matrix is "<<endl;
        for(int i = 0;i<a;i++)
        {
            for(int j = 0;j<b;j++)
            {
                cout<<x[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    matrix operator+(matrix z)
    {
        matrix temp;
        for(int i =0;i<m;i++)
        {
         for(int j = 0;j<n;j++)
         {
             temp.x[i][j] = x[i][j] + z.x[i][j];
         }
        }
        return temp;
    }

    matrix operator-(matrix z)
    {
        matrix temp;
        for(int i =0;i<m;i++)
        {
         for(int j = 0;j<n;j++)
         {
             temp.x[i][j] = x[i][j] - z.x[i][j];
         }
        }
        return temp;
    }

};

int main()
{
    matrix obj1;
    matrix obj2;
    matrix obj3;
    matrix obj4;

   obj1.setDimension();
   obj1.getValue();
   obj1.display();
   obj2.setDimension();
   obj2.getValue();
   obj2.display();

   obj3 = obj1 + obj2;
   cout<<"The matrix after addition is: "<<endl;
   int m,n;
   m = obj1.matrix_m_row();
   n = obj1.matrix_n_col();
   obj3.display(m,n);

   obj4 = obj1 - obj2;
   cout<<"The matrix after subtraction is: "<<endl;
   obj4.display(m,n);
    return 0;
}
