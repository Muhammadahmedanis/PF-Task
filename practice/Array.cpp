// Array
    
    // int size = 5;
    // int i;
    // char toSearch;
    // cout<<"Enter value: ";
    // cin>>toSearch;
    // char arr[size] = {'a', 'e', 'i', 'o', 'u'};
    
    // for(i = 0; i < size; i++)
    // {
    //     if(arr[i] == toSearch)
    //     {
    //         cout<<"Value found";
    //         break;
    //     }
    // }
    // if(arr[i] != toSearch)
    // {
    //     cout<<"Value not found";
    // }
    
    
    // Count vowel & consonent
    // int size = 5, vowel{0}, consont{0};
    // char arr[size] = {'a', 'b', 'e', 'd', 'i'};
    // char arr2[size] = {'a', 'e', 'i', 'o', 'u'};
    // for(int i = 0; i < size; i++)
    // {
    //     for(int j = 0; j < size; j++)
    //     {
    //         if(arr[i] == arr2[j])
    //         {
    //             vowel++;
    //             // cout<<arr[i]<<" ";
    //             break;
    //         }
    //     }
    //         if(arr[i] != arr2[j])
    //         {
    //             consont++;
    //         // cout<<arr[i];
    //         }
    // }
    // cout<<vowel<<" "<<consont;
    

     
    // int size = 4;
    // int arr[4];
    // for(int i = 0; i < size; i++)
    // {
    //     cout<<"Enter value of index "<<i<<": ";
    //     cin>>arr[i];
    // }
    // for(int j = 0; j < size; j++)
    // {
    //     cout<<arr[j]<<" ";
    // }
    
    
    // linear Search
    // int size = 4, toSearch, i;
    // int arr[4] = {1, 2, 3, 4};
    // bool flag = false;
    // cout<<"Enter value you want to search: ";
    // cin>>toSearch;
    // for(i = 0; i < size; i++)
    // {
    //     if(arr[i] == toSearch)
    //     {
    //         cout<<"Value found at index "<<i;
    //         flag = true;
    //         break;
    //     }
    // }
    // if(size == i)
    // {
    //     cout<<"Value not found";
    // }
    // if(flag == false)
    // {
    //     cout<<"Value not found";
    // }
    
    // *********** check
    // int size = 4, arr[size], sum1, sum2;
    // for(int i = 0; i < size; i++)
    // {
    //     cout<<"Value for index "<<i<<": ";
    //     cin>>arr[i];
    // }
    // for(int j = 0; j < size; j++)
    // {
    //     if(j % 2 == 0)
    //     {
    //         sum1 += arr[j];
    //     }
    //         else //if(j % 2 != 0)
    //         // {
    //             sum2 += arr[j];
    //         // }
    // }
    //cout<<"Sum of even index: "<<sum1 << " Sum of odd index: "<<sum2;
    
    
    
    // Binary Search
    // int toSearch;
    // cout<<"Enter value you want to search: ";
    // cin>>toSearch;
    // int size = 8;
    // int arr[size] = {1, 2, 3, 6, 8, 9, 11, 34, 12};
    // int l = 0, r = size-1, mid;
    // while(l<=r)
    // {
    //     mid = (l+r)/2;
    //     if(toSearch == arr[mid])
    //     {
    //         cout<<"Value found";
    //         break;
    //     }
    //         if(toSearch < arr[mid])
    //         {
    //             r = mid-1;
    //         }
    //             else
    //             {
    //                 l = mid+1;
    //             }
    // }
    // if(l > r)
    // {
    //     cout<<"Value not found";
    // }
    
    

     //  binary serach

    // void process(array<int, 6> &myArr, int a)
// {
//     int l = 0, mid, r = 5;
    
//     while(l<=r)
//     {
//         mid = (l+r)/2;
//         if(a == myArr[mid])
//         {
//             cout<<"Value found";
//             break;
//         }
        
//         if(a < myArr[mid])
//         {
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
    
//     if(l > r)
//     {
//         cout<<"Value not found";
//     }
// }  

    // int toSearch;
    // cout<<"Enter value: ";
    // cin>>toSearch;
    // array<int, 6>arr = {17, 19, 56, 72, 81, 99};
    // process(arr, toSearch);
    


    
    
    







    // Find largest and Smallest value
    // int size = 4;
    // int arr[size] = {11, 22, 33, 4};
    // int large = arr[0];
    // for(int i = 0; i<size; i++)
    // {
    //     if(arr[i] < large)
    //     {
    //         large = arr[i];
    //     }
    // }
    // cout<<"Largest value in array: "<<large;
    // cout<<"Smallet value in array: "<<large;
    
    
    // Sorting Array
    // int size = 5, arr[size] = {6, 1, 4, 5, 3}, temp;
    // for(int i = 0; i < size-1; i++)
    // {
    //     for(int j = 0; j < size-1-i; j++)
    //     {
    //             if(arr[j] > arr[j+1])
    //             {
    //                 temp = arr[j];
    //                 arr[j] = arr[j+1];
    //                 arr[j+1] = temp;
    //         }
    //     }
    // }
    // cout<<"Sorting Array: ";
    // for(int k = 0; k < size; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    
    
    
    // Reverse Array
    // int size = 4, arr[size] = {2, 4, 6, 8};
    // // int arr2[size];
    // for(int i = 0; i < size; i++)
    // {
    //     arr2[i] = arr[size-1-i];
    // }
    // for(int j = 0; j < size; j++)
    // {
    //     cout<<arr2[j]<<" ";
    // }
    
    
    // 2nd Method
    // int size = 4, arr[size] = {2, 4, 6, 8}, temp;
    // for(int i = 0; i < size/2; i++)
    // {
    //     temp = arr[size-1-i];
    //     arr[size-1-i] = arr[i];
    //     arr[i] = temp;
    // }
    // for(int j = 0; j < size; j++)
    // {
    //     cout<<arr[j]<<" ";
    // }
    
    
    // Copy element
    // int size = 4, arr[size] = {1, 3, 5, 7};
    // int arr2[size];
    // for(int i = 0; i < size; i++)
    // {
    //     arr2[i] = arr[i];
    // }
    // for(int k = 0; k < size; k++)
    // {
    //     cout<<arr2[k]<<" ";
    // }
    
    
    // Delete Element of Array at given indx
    // int size = 4, arr[size] = {1, 3, 5, 7};
    // int indx = 1;
    // for(int i = indx; i < size; i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // for(int k = 0; k < size-1; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    
    
    // Insert Element in Array
    // int size = 5, arr[size] = {1, 2, 5, 6};
    // int indx = 2, value = 4; 
    // for(int i = 3; i >= indx; i--)
    // {
    //     arr[i+1] = arr[i];
    // }
    // arr[indx] = value;
    // for(int k = 0; k <size; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }

  
    // ****************** 2D Array *************************
    // Transpose Matrix 
    // int row = 2, col = 2;
    // int matrix_1[row][col], transpose[row][col];
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<"Enter value for matrix1 "<<i<<j<<": ";
    //         cin>>matrix_1[i][j];
    //     }
    // }
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<"\nTranspose"<<endl;
    
    // for(int r = 0; r < row; r++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         transpose[r][c] = matrix_1[c][r];
    //         cout<<transpose[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // Diagonal; Matrix
    // int row = 3, col = 3;
    // bool flag = true;
    // int matrix_1[row][col] ={{1, 0, 0}, {3, 2, 0}, {0, 0, 3}};
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int r = 0; r < row; r++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         if(r == c && matrix_1[r][c] == 0)
    //         {
    //             flag = false;
    //             break;
    //         }
    //         else if(r != c && matrix_1[r][c] != 0)
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    
    // if(flag == true)
    // {
    //     cout<<"Diagonal Matrix";
    // }
    // else
    // {
    //     cout<<"Not diagonal Matrix";
    // }
    
    
    
    // Unit Matrix
    // int row = 3, col = 3;
    // bool flag = true;
    // int matrix_1[row][col] ={{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int r = 0; r < row; r++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         if(r == c && matrix_1[r][c] > 1)
    //         {
    //             flag = false;
    //             break;
    //         }
    //         else if(r != c && matrix_1[r][c] != 0)
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    
    // if(flag == true)
    // {
    //     cout<<"Unit Matrix";
    // }
    // else
    // {
    //     cout<<"Not unit Matrix";
    // }  

    

     // Symmetric Matrix
    // int row = 3, col = 3;
    // bool flag = true;
    // int matrix_1[row][col], transpose[row][col];
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<"Enter value for matrix1 "<<i<<j<<": ";
    //         cin>>matrix_1[i][j];
    //     }
    // }
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<"\nTranspose"<<endl;
    
    // for(int r = 0; r < row; r++)
    // {
    //     for(int c = 0; c < col; c++)
    //     {
    //         transpose[r][c] = matrix_1[c][r];
    //         cout<<transpose[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int k = 0; k < row; k++)
    // {
    //     for(int l = 0; l < col; l++)
    //     {
    //         if(transpose[k][l] != matrix_1[l][k])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    
    // if(flag == true)
    // {
    //     cout<<"Symmetric matrix";
    // }
    // else
    // {
    //     cout<<"Not Symmetric matrix";
    // }
    

    // Matrix Multiplication
    // int r1 = 2, c1 = 2, r2 =2, c2 = 2, sum;
    // int matrix_1[r1][c1] = {{3, 7}, {4, 9}}; 
    // int matrix_2[r2][c2] = {{6, 2},{5, 8}};
    // if(c1 != r2)
    // {
    //     cout<<"Cannot Possible";
    // }
    // else
    // {
    //     for(int k = 0; k < r1; k++)
    //     {
    //         for(int l = 0; l < c2; l++)
    //         {
    //             sum = 0;
    //             for(int m = 0; m < c1; m++)
    //             {
    //                 sum += matrix_1[k][m] * matrix_2[m][l];
    //             }
    //             cout<<sum<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    
    
    // Second Largest Element 
    // int size = 5;
    // int arr[5] = {1, 4, 7, 9, 43};
    // int large = arr[0], sLarge = arr[1];
    // for(int i = 0; i <size; i++)
    // {
    //     if(arr[i] > large)
    //     {
    //         large = arr[i];
    //     }
    // }
    // cout<<"Largest: "<<large;
    
    // for(int j = 0; j<size; j++)
    // {
    //     if(arr[j] > sLarge && arr[j] != large)
    //     {
    //         sLarge = arr[j];
    //     }
    // }
    // cout<<"\nSecond Largest: "<<sLarge;


         // Find Upper & Lower triangular matrix
    // int row = 3, col = 3;
    // bool flag = true;
    //int matrix_1[row][col]={{33, 92, 18}, {92, 77, 15}, {18, 15, 89}};
    
    // cout<<"Upper Triangular Matrix: "<<endl;
    // for(int i = 0; i < row-1; i++)
    // {
    //     for(int j =1+i; j<col; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<"Lower triangular matrix: "<<endl;
    // for(int i = 1; i < row; i++)
    // {
    //     for(int j = 0; j<i; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Upper triangular matrix: "<<endl;
    // for(int i = 1; i < row; i++)
    // {
    //     for(int j = 0; j<i; j++)
    //     {
    //         cout<<matrix_1[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int r = 1; r < row; r++)
    // {
    //     for(int c = 0; c<r; c++)
    //     {
    //         if(matrix_1[r][c] != matrix_1[c][r])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    //     cout<<endl;
    // }
    
    // if(flag == true)
    // {
    //     cout<<"Good";
    // }
    // else
    // {
    //     cout<<"Not Good";
    // }





    // ################   Using Array library #############################
    // const int size1 = 4;
    // array<int , size1>arr = {1, 2, 3, 4};
    // for(size_t i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i];
    // }
    
    
    // linear search
    // int toSearch;
    // bool flag = false;
    // size_t j;
    // const int size1 = 4;
    // array<int , size1>arr;
    // for(size_t i = 0; i < arr.size(); i++)
    // {
    //     cout<<"Value of index "<<i<<": ";
    //     cin>>arr[i];
    // }
    // cout<<"Enter value you want to search: ";
    // cin>>toSearch;
    // for(j = 0; j < arr.size(); j++)
    // {
    //     if(arr[j] == toSearch)
    //     {
    //         cout<<"Value found ";
    //         flag = true;
    //         break;
    //     }
    // }
    
    // if(j == size1)
    // {
    //     cout<<"Value not found";
    // }
    // if(flag == false)
    // {
    //     cout<<"Value not found";
    // }
    
    
    // print sum  of even index and odd index
    // int sum1, sum2;
    // const int size1{4};
    // array<int , size1>arr{2, 3, 5, 7};
    // for(size_t i{0}; i < arr.size(); i++)
    // {
    //     if(i % 2 == 0)
    //     {
    //         sum1 += arr[i];
    //     }
    //         else
    //         {
    //             sum2 += arr[i];
    //         }
    // }
    //cout<<"Sum of even index: "<<sum1 << " Sum of odd index: "<<sum2;
    
    
    
    // print sum of even value and odd value of arr
    // int sum1, sum2;
    // const int size1{4};
    // array<int , size1>arr{2, 3, 5, 7};
    // for(size_t i{0}; i < arr.size(); i++)
    // {
    //     if(arr[i] % 2 == 0)
    //     {
    //         sum1 += arr[i];
    //     }
    //         else
    //         {
    //             sum2 += arr[i];
    //         }
    // }
    // cout<<"Sum of even value of arr: "<<sum1 << " Sum of odd value of arr: "<<sum2;


    // print sum  of even index and odd index but increment of even index
    // int sum1, sum2;
    // const int size1{4};
    // array<int , size1>arr{2, 3, 5, 7};
    // for(size_t i{0}; i < arr.size(); i++)
    // {
    //     if(i % 2 == 0)
    //     {
    //         sum1 += arr[i] + 5;
    //         cout<<sum1<<" ";
    //     }
    //         else
    //         {
    //             sum2 += arr[i];
    //         }
    // }
    // cout<<endl;
    //cout<<"Sum of even index: "<<sum1 << " Sum of odd index: "<<sum2;


    //  Binary Search
    // const int size1 = 8; 
    // array<int , size1>arr{1, 2, 56, 32, 78, 21, 54};
    // int r = arr.size()-1, toSearch, l{0}, mid;
    // cout<<"Enter value you want to search: ";
    // cin>>toSearch;
    // while(l<=r)
    // {
    //     mid = (l+r)/2; 
    //     if(toSearch == arr[mid])
    //     {
    //         cout<<"Value found";
    //         break;
    //     }
    //         if(toSearch < arr[mid])
    //         {
    //             r = mid-1;
    //         }
    //             else
    //             {
    //                 l = mid+1;
    //             }
    // }
    // if(l > r)
    // {
    //     cout<<"Value not found";
    // }
    
    
    // Find largest and smallest value in array
    // const int size1 = 4;
    // array<float , size1>arr{11, 22, 3, 2.4};
    // float large = arr[0];
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     if(arr[i] < large)
    //     {
    //         large = arr[i];
    //     }
    // }
    // cout<<"Largest value in array: "<<large;
    // cout<<"Smalest value in array: "<<large;


    //  Sorting Array
    // int temp;
    // array<int, 5>arr{2, 4, 8, 1, 5};
    // for(int i = 0; i < arr.size()-1; i++)
    // {
    //     for(int j = 0; j < arr.size()-1-i; j++)
    //     {
    //         if(arr[j] > arr[j+1])
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    // cout<<"Sorting array: ";
    // for(int k = 0; k < arr.size(); k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    
    
    
    
    // Reverse Array
    // array<int , 4>arr{2, 4, 6, 8};
    // array<int , 4>arr2;
    // for(size_t i{0}; i < arr.size(); i++)
    // {
    //     arr2[i] = arr[size1 - 1 - i];
    // }
    // for(size_t k{0}; k < arr.size(); k++)
    // {
    //     cout<<arr2[k]<<" ";
    // }
    
    
    // 2nd Method
    // int temp;
    // array<int , 4>arr{2, 4, 6, 8};
    // for(size_t i{0}; i < arr.size()/2; i++)
    // {
    //     temp = arr[arr.size()-1-i];
    //     arr[arr.size()-1-i] = arr[i];
    //     arr[i] = temp;
    // }
    // for(size_t k{0}; k < arr.size(); k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    
    
    // Delete Element of Array at given indx
    // const int size1 = 4;
    // int indx = 0;
    // array<int , size1>arr{1, 3, 5, 7};
    // for(size_t i = indx; i < arr.size(); i++)
    // {
    //     arr[i] = arr[i+1];
    // }
    // for(size_t k{0}; k < arr.size()-1; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }
    
    
    
    // Insert Element in Array
    // const int size1 = 5;
    // array<int, size1>arr{1, 2, 3, 6};
    // int indx = 3, value = 5; 
    // for(size_t i = 3; i>=indx; i--)
    // {
    //     arr[i+1] = arr[i];
    // }
    // arr[indx] = value;
    
    // for(size_t k{0}; k<arr.size(); k++)
    // {
    //     cout<<arr[k]<<" ";
    // }


    // ************************** 2D ARRAY *******************************
    //  Matrix Addition     
    // const int row = 2, col = 2;
    // array<array<int, col>,row>matrix_1;
    // array<array<int, col>,row>matrix_2;
    // array<array<int, col>,row>sum;
    // for(size_t i = 0; i < matrix_1.size(); i++)
    // {
    //     for(size_t j = 0; j < matrix_1.size(); j++)
    //     {
    //         cout<<"Enter value for matrix1 "<<i<<j<<": ";
    //         cin>>matrix_1[i][j];
    //     }
    // }
    // for(size_t i = 0; i < matrix_2.size(); i++)
    // {
    //     for(size_t j = 0; j < matrix_2.size(); j++)
    //     {
    //         cout<<"Enter value for matrix2 "<<i<<j<<": ";
    //         cin>>matrix_2[i][j];
    //     }
    // }
    
    // for(size_t r = 0; r < sum.size(); r++)
    // {
    //     for(size_t c = 0; c < sum.size(); c++)
    //     {
    //         sum[r][c] = matrix_1[r][c] + matrix_2[r][c];
    //         cout<<sum[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // Transpose Matrix
    // const int row = 3, col = 3;
    // array<array<int, col>,row>matrix_1;
    // array<array<int, col>,row>transpose;
    // for(size_t i = 0; i < matrix_1.size(); i++)
    // {
    //     for(int j = 0; j < matrix_1.size(); j++)
    //     {
    //         cout<<"Enter value for matrix1 "<<i<<j<<": ";
    //         cin>>matrix_1[i][j];
    //     }
    // }
    // for(size_t i = 0; i < matrix_1.size(); i++)
    // {
    //     for(size_t j = 0; j < matrix_1.size(); j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<"\nTranspose"<<endl;
    
    // for(size_t r = 0; r < transpose.size(); r++)
    // {
    //     for(size_t c = 0; c < transpose.size(); c++)
    //     {
    //         transpose[r][c] = matrix_1[c][r];
    //         cout<<transpose[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // Diagonal; Matrix
    // const int row = 3, col = 3;
    // bool flag = true;
    //array<array<int,col>,row>matrix_1{1, 0, 0, {0, 2, 0}, {0, 0, 3}};
    // for(size_t i = 0; i < matrix_1.size(); i++)
    // {
    //     for(size_t j = 0; j < matrix_1.size(); j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(size_t r = 0; r < matrix_1.size(); r++)
    // {
    //     for(size_t c = 0; c < matrix_1.size(); c++)
    //     {
    //         if(r == c && matrix_1[r][c] == 0)
    //         {
    //             flag = false;
    //             break;
    //         }
    //         else if(r != c && matrix_1[r][c] != 0)
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    
    // if(flag == true)
    // {
    //     cout<<"Diagonal Matrix";
    // }
    // else
    // {
    //     cout<<"Not diagonal Matrix";
    // }
    


    // Unit Matrix
    // const int row = 3, col = 3;
    // bool flag = true;
    //array<array<int,col>,row>matrix_1{1, 0, 0, {0, 1, 0}, {0, 0, 1}};
    // for(size_t i = 0; i < matrix_1.size(); i++)
    // {
    //     for(size_t j = 0; j < matrix_1.size(); j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(size_t r = 0; r < matrix_1.size(); r++)
    // {
    //     for(size_t c = 0; c < matrix_1.size(); c++)
    //     {
    //         if(r == c && matrix_1[r][c] > 1)
    //         {
    //             flag = false;
    //             break;
    //         }
    //         else if(r != c && matrix_1[r][c] != 0)
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    
    // if(flag == true)
    // {
    //     cout<<"Unit Matrix";
    // }
    // else
    // {
    //     cout<<"Not unit Matrix";
    // }


    // SYMMETRIC MATRIX
    // const int row = 3, col = 3;
    // bool flag = true;
    // array<array<int, col>, row>matrix_1;
    // array<array<int, col>, row>transpose;
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<"Enter value for matrix1 "<<i<<j<<": ";
    //         cin>>matrix_1[i][j];
    //     }
    // }
    // for(size_t i = 0; i < row; i++)
    // {
    //     for(size_t j = 0; j < col; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<"\nTranspose"<<endl;
    // for(size_t r = 0; r < row; r++)
    // {
    //     for(size_t c = 0; c < col; c++)
    //     {
    //         transpose[r][c] = matrix_1[c][r];
    //         cout<<transpose[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(size_t k = 0; k < row; k++)
    // {
    //     for(size_t l = 0; l < col; l++)
    //     {
    //         if(transpose[k][l] != matrix_1[k][l])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    // if(flag == true)
    // {
    //     cout<<"Symmetric matrix";
    // }
    // else
    // {
    //     cout<<"Not Symmetric matrix";
    // }


    // Matrix Multiplication
    // const int r1 = 2, c1 = 2, r2 =2, c2 = 2;
    // int sum;
    // array<array<int, c1>, r1>matrix_1{3, 7, {4, 9}}; 
    // array<array<int, c2>, r2>matrix_2{6, 2, {5, 8}};
    // if(c1 != r2)
    // {
    //     cout<<"Cannot Possible";
    // }
    // else
    // {
    //     for(size_t k = 0; k < r1; k++)
    //     {
    //         for(size_t l = 0; l < c2; l++)
    //         {
    //             sum = 0;
    //             for(size_t m = 0; m < c1; m++)
    //             {
    //                 sum += matrix_1[k][m] * matrix_2[m][l];
    //             }
    //             cout<<sum<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    
    
    // Second largest Element
    // const int size = 5;
    // array<int, 5>arr{1, 4, 7, 9, 43};
    // int large = arr[0], sLarge = arr[1];
    // for(int i = 0; i <arr.size(); i++)
    // {
    //     if(arr[i] > large)
    //     {
    //         large = arr[i];
    //     }
    // }
    // cout<<"Largest: "<<large;
    
    // for(int j = 0; j<arr.size(); j++)
    // {
    //     if(arr[j] > sLarge && arr[j] != large)
    //     {
    //         sLarge = arr[j];
    //     }
    // }
    // cout<<"\nSecond Largest: "<<sLarge;



    // const int row = 3, col = 3;
    // bool flag = true;
    // array<array<int, col>,row>matrix_1{33,92,18,{92,77,15},{18,15,89}};
    // cout<<"Lower triangular matrix: "<<endl;
    // for(size_t i = 1; i < row; i++)
    // {
    //     for(size_t j = 0; j<i; j++)
    //     {
    //         cout<<matrix_1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Upper triangular matrix: "<<endl;
    // for(size_t i = 1; i < row; i++)
    // {
    //     for(size_t j = 0; j<i; j++)
    //     {
    //         cout<<matrix_1[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for(size_t r = 1; r < row; r++)
    // {
    //     for(size_t c = 0; c<r; c++)
    //     {
    //         if(matrix_1[r][c] != matrix_1[c][r])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    //     cout<<endl;
    // }

    // if(flag == true)
    // {
    //     cout<<"Good";
    // }
    // else
    // {
    //     cout<<"Not Good";
    // }