
// int prime(int num, int i)
// {
//     if(i == 1)
//     return 1;
//     if(num % i == 0)
//     return 0;
//     return prime(num, i-1);
// }


// int linear_S(int arr[], int indx, int value)
// {
//     if(indx < 0)
//     return -1;
//     if(arr[indx] == value)
//     return indx;
//     return linear_S(arr, indx-1, value);
// }


// int binary_S(int arr[], int right, int left, int value)
// {
//     if(left > right)
//     return -1;
    
//     int mid = left + right / 2;
//     if(arr[mid] == value)
//     return  mid;
//     else if(arr[mid] < value)
//     return binary_S(arr, right+1, left, value);
    
//     else
//     return binary_S(arr, right-1, left, value);
// }


// palidrone
// bool palidrone(string str, int start, int end)
// {
//     if(str[start] != str[end] || start > end)
//     return false;
//     if(str[start] == str[end])
//     return true;
//     return palidrone(str, start+1, end-1);
// }


// void process(string &str, int start, int end)
// {
//     if(start > end)
//     return;
//     char ch = str[start];
//     str[start] = str[end];
//     str[end] = ch;
//     process(str, start+1, end-1);
// }
  


// int fab(int num)
// {
//     if (num <= 1)
//     return num;
    
//     return fab(num-1) + fab(num-2);
// }


// main()

    // prime number
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // prime(n, n /2);
    // if(prime(n, n /2) == 1) cout<<"prime";
    // else cout<<"Not prime";
    
    
    // linear search
    // int size = 5;
    // int arr[size] = {1, 3, 5, 8, 9};
    // int search = 3;
    // int indx = linear_S(arr, size, search);
    // if(indx != -1) cout<<"Value found at "<<indx;
    // else cout<<"Not found";
    
    
    // binary search
    // int size = 5;
    // int arr[size] = {11, 23, 45, 67, 87};
    // int search = 67;
    // int ind = binary_S(arr, size-1, 0, search);
    // if(ind != -1) cout<<"value found " <<ind;
    // else cout<<"value not found";
    
    
    // palidrone
    // string str = "madam";
    // int check = palidrone(str, 0, str.length()-1);
    // if(check == true)
    // cout<<"Palindrone";
    // else 
    // cout<<"Not palidrone";


    // reverse string
    //   string str = "world";
    //   process(str, 0, str.length()-1);
    //   cout<<str;    
   
     
     // print n fabonacci series
    // int n = 5;
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<fab(i)<<" ";
    // }