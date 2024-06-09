    
    
// pass by reference
// void swap(int& a, int& b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }


// main()
// {
// int a = 5, b = 10;
// swap(a, b);
// cout<<a<<" "<<b;    
// }    
    
    
    
    //  double x;
    //  x= 22/7 + 2*8;
    //  cout<<x;
    
    // int x = 5, a = 7;
    // int* ptr1{&x};
    // int* ptr2{&a};
    // ptr1 = ptr2;
    // cout<<&ptr1<<endl;
    // cout<<ptr1<<endl;
    // cout<<&a;
    // cout<<*ptr1<<endl;
    // *ptr1++;
    // cout<<*ptr1<<endl;
    // *++ptr1;
    // cout<<*ptr1;
    // ++*ptr1; // 8
    // cout<<*ptr1;
    // *(ptr1++);
    // (*ptr1)++;
    // *ptr2--;
    // cout<<*ptr1;
    
    // *(ptr1)++;
    // *(ptr1++);
    // cout<<*ptr1;




   

   // void process(int *ptr, int size1, int size2)
// {
//     for(int i = 0; i < size1; i++)
//     {
//         for(int j = 0; j < size2; j++)
//         {
//             cout<<*ptr<<" ";
//             ptr++;
//         }
//         cout<<endl;
//     }
// }


// int *ptr; 
// int arr[2][2] = {{1, 2}, {3, 4}};
// ptr = arr[0];
// process(arr[0], 2, 2);
// process(&arr[0][0], 2, 2);


// outoput of two matrix using one func
// void process(int *ptr, int size1, int size2)
// {
//     for(int i = 0; i < size1; i++)
//     {
//         for(int j = 0; j < size2; j++)
//         {
//             cout<<*ptr<<" ";
//             ptr++;
//         }
//         cout<<endl;
//     }
// }

    // int *ptr1;
    // int arr1[2][2] = {{1, 2}, {3, 4}};
    // ptr1 = arr1[0];
    // process(arr1[0], 2, 2);
    
    // int arr2[2][2] = {{5, 6}, {7, 8}};
    // ptr1 = arr2[0];
    // process(arr2[0], 2, 2);
    

    
// matrix addition    
// void process(int *ptr1, int *ptr2, int *ptr3, int s1, int s2)
// {
//     for(int i = 0; i < s1; i++)
//     {
//         for(int j = 0; j < s2; j++)
//         {
//             *ptr3 = *ptr1 + *ptr2;
//             cout<<*ptr3<<" ";
//             ptr1++;
//             ptr2++;
//         }
//         cout<<endl;
//     }
// }
    
    // int *ptr3;
    // int result[2][2];
    // ptr3 = result[0];  store here
    
    // int *ptr1;
    // int arr1[2][2] = {{1, 2}, {3, 4}};
    // ptr1 = arr1[0];
    
    // int *ptr2;
    // int arr2[2][2] = {{1, 2}, {3, 4}};
    // ptr2 = arr2[0];
    
    // process(arr1[0], arr2[0], result[0], 2, 2);
    
    
    
// matrix addition using another method
// void process(int arr1[][2], int arr2[][2],int sum[][2], int s1, int s2)    
// {
    // for(int i = 0; i < s1; i++)
    // {
    //     for(int j = 0; j < s2; j++)
    //     {
    //         sum[i][j] = arr1[i][j] + arr2[i][j];
    //         cout<<sum[i][j]<<" ";
            // cout<<arr1[i][j] + arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
    
    // int sum[2][2]; store here 
    // int arr1[2][2] = {{1, 2}, {3, 4}};
    // int arr2[2][2] = {{1, 2}, {3, 4}};
    
    // process(arr1, arr2, sum, 2, 2);



    
//     void process(array<array<int, 2>, 2> &myArr)
// {
//     for(int i = 0; i < myArr.size(); i++)
//     {
//         for(int j = 0; j < myArr.size(); j++)
//         {
//             cout<<myArr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
//     array<array<int, 2>, 2>arr1{1, 2, {3, 4}};
//     process(arr1);
 