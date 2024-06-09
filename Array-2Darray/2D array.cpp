#include <iostream>
using namespace std;

int main() {


    // // task 1 (initialize 2D array, input, output that array) 
    // int size1 = 2, size2 = 4;
    // int arr[size1][size2];
    
    // for(int i = 0; i < size1; i++)  //row 
    // {  
    //     for(int j = 0; j < size2; j++)  //col
    //     {
    //         cout<<"Enter student "<<i+1<<" marks of subject " << 
    //         j+1<<": ";
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = 0; i < size1; i++)   
    // {  
    //     for(int j = 0; j < size2; j++)
    //     {
    //         cout<<"Student "<<i+1<<" marks of subject "<<
    //         j+1<<": " <<arr[i][j];
    //         cout<<endl;
    //     }
    // }
    
    
//    task 2 (scaling 5 numbers in each subject & sum data row
//    wise) 
//     int size1 = 2, size2 = 4;
//     int arr[size1][size2];
    
//     for(int i = 0; i < size1; i++)  //row 
//     {  
//         for(int j = 0; j < size2; j++)  //col
//         {
//             cout<<"Enter student "<<i+1<<" marks of subject " <<
//             j+1<<": ";
//             cin>>arr[i][j];
//             arr[i][j] += 5;
//         }
//         cout<<endl;
//     }
    
//     for(int i = 0; i < size1; i++)   
//     {  
//         for(int j = 0; j < size2; j++)
//         {
//             cout<<"Student "<<i+1<<" marks of subject "<<
//             j+1<<": " <<arr[i][j];
//             cout<<endl;
//         }
//     }
    
//task3  (ouput sum of data col wise) 
// int sum;    
// int row = 2, col = 4;
// int arr[row][col];

//  for(int j = 0; j<row; j++) {
//      sum = 0;
//      for(int i = 0; i<col; i++) {
//          cout<<"Enter value of student"<<j+1<<" marks of subject "
//          <<i+1<<": ";
//          cin>>arr[row][col];
//          sum += arr[row][col]; 
//      }
//      cout<<endl;
//      cout<<"Sum of student "<<j+1<<" marks in all subjects: "<<sum;
//      cout<<endl<<endl;
//  }




// task 4  (scaling 5 numbers in each subject except subject no. 3)
    // int size1 = 2, size2 = 4;
    // int arr[size1][size2];
    
    // for(int i = 0; i < size1; i++)  //row 
    // {  
    //     for(int j = 0; j < size2; j++)  //col
    //     {
    //         cout<<"Enter student "<<i+1<<" marks of subject " <<
    //         j+1<<": ";
    //         cin>>arr[i][j];
    //             if(j != 2) 
    //             {
    //                 arr[i][j] += 5;
    //             }
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = 0; i < size1; i++)   
    // {  
    //     for(int j = 0; j < size2; j++)
    //     {
    //         cout<<"Student "<<i+1<<" marks of subject "<<
    //         j+1<<": " <<arr[i][j];
    //         cout<<endl;
    //     }
    // }    
    
    
    
    // task 5 (sum all students marks)
    // int sum;
    // int size1 = 2, size2 = 4;
    // int arr[size1][size2];
    
    // for(int i = 0; i < size1; i++)  //row 
    // {  
    //     sum = 0;
    //     for(int j = 0; j < size2; j++)  //col
    //     {
    //         cout<<"Enter student "<<i+1<<" marks of subject " <<
    //         j+1<<": ";
    //         cin>>arr[i][j];
    //         sum += arr[i][j];
    //     }
    //     cout<<"stuedent"<<i+1<<" marks in all subjectts= "<<sum;
    //     cout<<endl<<endl;;
    // }
    
    // method(2)
    // int sum;
    // int size1 = 2, size2 = 4;
    // int arr[size1][size2];
    
    // for(int i = 0; i < size1; i++)  //row 
    // {  
    //     for(int j = 0; j < size2; j++)  //col
    //     {
    //         cout<<"Enter student "<<i+1<<" marks of subject " <<
    //         j+1<<": ";
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = 0; i < size1; i++)  //row 
    // {  
    //     sum = 0;
    //     for(int j = 0; j < size2; j++)  //col
    //     {
    //         cout<<"Enter student "<<i+1<<" marks of subject " <<
    //         j+1<<": "<<arr[i][j];
    //         sum += arr[i][i];
    //         cout<<endl;
    //     }
    //     cout<<"Total marks of student "<<i+1<<"= "<<sum;
    //     cout<<endl;
    // }
    
    
    
    // task 6 (sum of those values that have same rows and same 
    // columns)
    // int row = 2, col = 4;
    // int arr[row][col];
    // int sum, p{0};
    
    // for(int i = 0; i<row; i++) 
    // {
    //     sum = 0;
    //     for(int j = 0; j<col; j++)
    //     {
    //         cout<<"Enter student "<<i+1<<" marks of subject "
    //         << j+1<<": ";
    //         cin>>arr[row][col];
    //             if (i == j) 
    //             {
    //                 sum += arr[row][col];
    //             }
    //     }
    //     p += sum;
    //     cout<<endl;
    // }
    // cout<<"Sum of those values that have same rows and coloumns
    // = " <<P;
    
    // sorting*****************************************
    // const int size{7};
    // array<int, size>arr;
    // for(int i=0; i<size; i++) 
    // {
    //     cout<<"Enter value you want: ";
    //     cin>>arr[i];
    // }
    // for(int i=0; i<size; i++) 
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    
    // sorted array
    // const int size{4};
    // array<int, size>arr{8, 5, 2, 1};
    // for(int i=0; i<size; i++) 
    // {
    //     for(int j=i+1; j<size; j++) 
    //     {                          
    //         if(arr[i] > arr[j]) 
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    //     // cout<<arr[i]<<" ";
    // }
    // cout<<"sorted array: "<<endl;
    // for(int i=0; i<size; i++) {
    //     cout<<arr[i]<<" ";
    // }
    

    
    // reverse array
    // const int size{4};
    // array<int, size>arr{7, 5, 9, 3};
    
    // array<int, size>arr2;
    // for(int i=0; i<size; i++) {
    //     int j = size-i-1;
    //     arr2[i] = arr[j];
    //     cout<<arr2[i]<<" ";
    // }
    
    
    // cout<<"Previous array: ";
    // for(int i=0; i<size; i++) 
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // int i=0;
    // int j = size-1;
    
    //  while(i<j) 
    //  {
    //      int temp = arr[i];
    //      arr[i] = arr[j];
    //      arr[j] = temp;
    //      i++;
    //      j--;
    //  }
    //  cout<<endl;
    //  cout<<"Current array: ";
    //  for(int i=0; i<size; i++) 
    //  {
    //      cout<<arr[i]<<" ";
    //  }


    // const int size{4};
    // array<int, size>arr{2, 9, 3, 8};
    // array<int, size>arr2;
    // for(int i=0; i<size; i++) 
    // {
    //     arr2[i] = arr[i];
    //     cout<<arr2[i]<<" ";
    // } 
    

    // duplicate array
    // const int size{5};
    // array<int, size>arr{2, 3, 2, 2, 2};
    // int count{0};
    // for(int i=0; i<size-1; i++) 
    // {
    //     if(arr[0] == arr[i+1])
    //     {
    //         count++;
    //     }
    // }
    // cout<<"Duplicate number in array: "<<count;

    // MATRICES ******************************************
    // Matrix adition
    // int row = 2, col = 2;
    // int m1[row][col], m2[row][col], sum[row][col];
    
    // for(int i = 0; i < row; i++) 
    // {
    //     for(int j = 0; j < col; j++) 
    //     {
    //         cout<<"Enter value for m1 "<<i<<j<<": ";
    //         cin>>m1[i][j];
    //     }
    // }
    // for(int i = 0; i < row; i++) 
    // {
    //     for(int j = 0; j < col; j++) 
    //     {
    //         cout<<"Enter value for m2 "<<i<<j<<": ";
    //         cin>>m2[i][j];
    //     }
    // }
    
    // for(int r = 0; r < row; r++) 
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         sum[r][c] = m1[r][c] + m2[r][c];
    //         cout<<setw(3)<<sum[r][c];
    //     }
    //     cout<<endl;
    // }
    
    
    // ************************************
    // int row = 2, col = 2;
    // int m1[row][col], trans[col][row];
    
    // for(int i = 0; i < row; i++) 
    // {
    //     for(int j = 0; j < col; j++) 
    //     {
    //         cout<<"Enter value for m1 "<<i<<j<<": ";
    //         cin>>m1[i][j];
    //     }
    // }
    
    // for(int r = 0; r < row; r++) 
    // {
    //     for(int c = 0;  c < row; c++)
    //     {
    //         trans[c][r] = m1[r][c];
    //         cout<<setw(3)<<trans[c][r];
    //     }
    //     cout<<endl;
    // }
    
    
    // check matrix is diagonal
    // int row = 3, col = 3, f = 0;
    // int m1[row][col];
    
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++) 
    //     {
    //         cout<<"Enter m1 "<<i<<j<<": ";
    //         cin>>m1[i][j];
    //     }
    // }
    
    // for(int r = 0; r < row; r++) 
    // {
    //     for(int c = 0; c < col; c++) 
    //     {
    //         cout<<m1[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // for(int r = 0; r < row; r++) 
    // {
    //     for(int c = 0; c < col; c++) 
    //     {
    //         if (r == c  &&  m1[r][c] == 0)
    //         {
    //             f = 1; 
    //             break;
    //         }
    //         else if (r != c && m1[r][c] != 0)
    //         {
    //             f = 1;
    //             break;
    //         }
    //     }
    // }
    
    // if (f == 0) 
    // {
    //     cout<<"matrix is unit";
    // }else 
    // {
    //     cout<<"matrix is not unit";
    // }
    
    
    // unit matrix
    // int row = 3, col = 3, f = 0, diag;
    // int m1[row][col];
    
    // for(int i = 0; i < row; i++) 
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<"Enter value for m1 "<<i<<j<<": ";
    //         cin>>m1[i][j];
    //     }
    // }
    
    // for(int r = 0; r < row; r++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         cout<<m1[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // diag = m1[0][0];
    // for(int r = 0; r < row; r++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         if (r == c && m1[r][c] != diag)
    //         {
    //             f = 1; 
    //             break;
    //         }
    //         else if (r != c && m1[r][c] != 0)
    //         {
    //             f = 1;
    //             break;
    //         }
    //     }
    // }
    
    //  if (f == 0)
    //  {
    //      cout<<"Unit matrix";
    //  }
    //  else 
    //  {
    //      cout<<"Not a Unit matrix";
    //  }



    // matrix multiplication
    // int r1 = 2, c1 = 2, r2 = 2, c2 = 2, sum = 0;
    // int m1[r1][c1], m2[r2][c2];
    
    // for(int i = 0; i < r1; i++) 
    // {
    //     for(int j = 0; j < c1; j++)
    //     {
    //         cout<<"Enter m1 "<<i<<j<<": ";
    //         cin>>m1[i][j];
    //     }
    // }
    
    // for(int i = 0; i < r2; i++) 
    // {
    //     for(int j = 0; j < c2; j++)
    //     {
    //         cout<<"Enter m2 "<<i<<j<<": ";
    //         cin>>m2[i][j];
    //     }
    // }


    
    // if (c1 != r2) 
    // {
    //     cout<<"Connot possible!";
    // }
    // else 
    // {
    //     int prod [r1][c2];
    //     for(int r = 0; r < r1; r++)
    //     {
    //         for(int c = 0; c < c2; c++)
    //         {
    //             sum = 0;
    //             for(int k = 0; k < c1; k++ )
    //             {
    //                 sum += m1[r][k] * m2[k][c];
    //             }
    //             prod[r][c] = sum;
    //             cout<<prod[r][c]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }


    // int row = 3, col = 3;
    // int m1[row][col], trans[col][row];
    // int i, j, r, c;
    
    // for(i = 0; i < row; i++)
    // {
    //     for(j = 0; j < col; j++) 
    //     {
    //         cout<<"Enter value for m1 "<<i<<j<<": ";
    //         cin>>m1[i][j];
    //     }
    // }
    
    // for(i = 0; i < row; i++)
    // {
    //     for(j = 0; j < col; j++) 
    //     {
    //         cout<<m1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<endl;
    
    // for(r = 0; r < row; r++) 
    // {
    //     for(c = 0; c < col; c++)
    //     {
    //         trans[r][c] = m1[c][r];
    //         cout<<trans[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<endl;
    
    // if(m1[i][j] == trans[r][c]) 
    // {
    //     cout<<"Symmetric matrix";
    // }else 
    // {
    //     cout<<"Not a symmetric matrix";
    // }

  
// matrix  multiplication   
//    int row = 3, col = 3, t;
//     int m1[row][col];
//     for(int i = 0; i < row; i++)
//     {
//         for(int j = 0; j < col; j++)
//         {
//             cout<<"Enter value m1 "<<i<<j<<": ";
//             cin>>m1[i][j];
//         }
//     }
    
//     for(int c = 0; c < row; c++)
//     {
//         t = m1[c][2];
//         m1[c][2] = m1[c][0];
//         m1[c][0] = t;
//     }
    
//     for(int r = 0; r < row; r++)
//     {
//         for(int c = 0; c < col; c++)
//         {
//             cout<<m1[r][c]<<" ";
//         }
//         cout<<endl;
//     }


// int row = 2, col = 2;    
// int sum[row][col];
// int m1[row][col] = {{1, 2}, {3 ,4}};
// int m2[row][col] = {{5, 6}, {7, 8}};
    
// for(int i = 0; i < row; i++)
// {
//     for(int j = 0; j < col; j++)
//     {
//         sum[i][j] = m1[i][j] + m2[i][j];
//         cout<<sum[i][j]<<" ";
//     }
//     cout<<endl;
// }


 // int arr[4] = {1, 2, 3, 4};
    // int arr2[4];
    // for(int i = 0; i < 4; i++ )
    // {
    //         arr2[i] = arr[4-i-1];
    //         cout<<arr2[i]<<" ";
    // }


}