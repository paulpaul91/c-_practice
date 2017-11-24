[Eigen 的class快速浏览](https://eigen.tuxfamily.org/dox/group__QuickRefPage.html#QuickRef_Types)

只需要头文件，不需要链接库

```bash
g++ -I /path/to/eigen/ my_program.cpp -o my_program
//要是Linux的Eigen的头文件放在/usr/include ，就不需要链接路径
```

提供Array ,Matrix, Vector(其实就是Matrix的行为1或者是列为1)三种类型

```c++
typedef Matrix<Scalar, RowsAtCompileTime, ColsAtCompileTime, Options> MyMatrixType;
typedef Array<Scalar, RowsAtCompileTime, ColsAtCompileTime, Options> MyArrayType;
//Scalar 是数据类型(int float double bool )
//RowsAtCompileTime 是行数，可以是compile time确定的或者是Dynamic
//Options 是ColMajor 还是 RowMajor,默认是ColMajor

Matrix<double, 6, Dynamic>                  // Dynamic number of columns (heap allocation)
Matrix<double, Dynamic, 2>                  // Dynamic number of rows (heap allocation)
Matrix<double, Dynamic, Dynamic, RowMajor>  // Fully dynamic, row major (heap allocation)
Matrix<double, 13, 3>                       // Fully fixed (usually allocated on stack)
```

有一些已经定义的简单的类型：

```c++
Matrix<float,Dynamic,Dynamic>   <=>   MatrixXf
Matrix<double,Dynamic,1>        <=>   VectorXd
Matrix<int,1,Dynamic>           <=>   RowVectorXi
Matrix<float,3,3>               <=>   Matrix3f
Matrix<float,4,1>               <=>   Vector4f

Array<float,Dynamic,Dynamic>    <=>   ArrayXXf
Array<double,Dynamic,1>         <=>   ArrayXd
Array<int,1,Dynamic>            <=>   RowArrayXi
Array<float,3,3>                <=>   Array33f
Array<float,4,1>                <=>   Array4f
```

array和matrix的转换
```c++
Array44f a1, a1;
Matrix4f m1, m2;
m1 = a1 * a2;                     // coeffwise product, implicit conversion from array to matrix.
a1 = m1 * m2;                     // matrix product, implicit conversion from matrix to array.
a2 = a1 + m1.array();             // mixing array and matrix is forbidden,不建议这么做，但是好像没有错误
m2 = a1.matrix() + m1;            // and explicit conversion is required.
ArrayWrapper<Matrix4f> m1a(m1);   // m1a is an alias for m1.array(), they share the same coefficients
MatrixWrapper<Array44f> a1m(a1);
```

