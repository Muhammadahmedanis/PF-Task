#include <iostream>
using namespace std;

int main () {
//  Write a C++ program to add up all the digits between two given integers. Add all the digits between 11 and 16.
    // int n1, n2, i, j, p,  k{0};
    // n1 = 39;
    // n2 = 41;
    // for (i=n1; i<=n2; i++) 
    // {
    //     for ( j=i; j>0; j/=10) 
    //     {
    //         p = j % 10;
    //         k += p;
    //     }
    // }
    // cout<<"Sum is : "<<k;


    // find total leap year b/w two given range   
    // int n1, n2, i, sum{0};
    // n1 = 2000;
    // n2 = 2024;
    // for (i=n1; i<=n2; i++) {
    //   if (i % 4 == 0 || i % 400 == 0) {
    //          cout<<i<<" ";
    //         sum ++;
    //     }
    // }
    // cout<<"\nTotal leap year: "<<sum;
  


    // Print n prime number and their sum
    // int n, i, j, sum{0},p{2};
    // cout<<"Enter number: ";
    // cin>>n;
    // for (i=1; i<=n; ) {
    //     for(j=2; j<p ;j++) {
    //       if (p % j == 0) 
    //         {
    //         break;
    //         }
    //     } 
    //     if (j == p ) 
    //     {
    //     cout<<j<<" ";
    //     i++;
    //     sum += j;
    //     }
    //  p++;
    // }
    // cout<<"\nSum: "<<sum;

    
    
    // Find differnece b/w tow int
    // int n1, n2, p;
    // cout<<"Enter Number1: ";
    // cin>>n1;
    // cout<<"Enter Number2: ";
    // cin>>n2;
    // if (n1 < n2) {
    //     p  = n2 - n1;
    //     cout<<"Difference: "<<p;
    // }else {
    //     p = n1 - n2;
    //     cout<<"Difference: "<<p;
    // }    

// palindrone
//   int n, x, r, reversed{0};
//     cout<<"Enter number: ";
//     cin>>n;
//     x = n;
//      while(x > 0) {
//          r = x % 10;
//          reversed = reversed * 10 + r; 
//          x /= 10;
//      }
//      if(reversed == n) {
//          cout<<n<<" is a Palindrone";
//      }else {
//          cout<<n<<" is not a palindrone";
//      }


    // fabonacci number
    // int n, a=0, b=1; 
    // cout<<"Enter number: ";
    // cin>>n;
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<a<<" ";
    //     int c = a+b;
    //     a=b;
    //     b=c;
    // }



// lab task
// int n, i{0};
    // cout<<"Enter number: ";
    // cin>>n;
    // const int size{32};
    // array<int, size>arr;
    // while(n > 0) {
    //     arr[i] = n % 14;
    //     n /= 14;
    //     i++;
    // }
    // i--;
    // for(; i>=0; i--) {
    //     if(arr[i] > 9) {
    //         cout<<(char)(arr[i]+55)<<" ";
    //     }else {
    //         cout<<arr[i]<<" ";
    //     }
    // }
    
    
    // int l=0, mid, tosearch, r;
    // const int size{10};
    // array<int ,size>arr{19 ,17, 28, 36, 44, 54, 60, 71, 79, 88};
    // cout<<"Enter: ";
    // cin>>tosearch;
    // r = arr.size()-1;
    // while(l<=r){
    //     mid = (l+r)/2;
    //     if(tosearch == arr[mid]) {
    //         cout<<"Value found ";
    //         break;
    //     }
    //     if(tosearch < arr[mid]) {
    //         r = mid-1;
    //     }else {
    //         l = mid + 1;
    //     }
    // }
    
    // if(l > r) {
    //     cout<<"value not found";
    // }


    // SORTING Array
    // int size = 4;
    // int arr[size] = {5, 3, 2, 1};    
    // for(int p = 0; p < size; p++)
    // {
    //     cout<<arr[p]<<" ";
    // }
    // cout<<"\nAfter Sorting...."<<endl;
   
    // for(int  i = 0; i < size-1; i++)
    // {
    //     for(int j = i+1; j < size; j++)
    //     {
    //         if(arr[i] > arr[j])
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // for(int k = 0; k < size; k++)
    // {
    //     cout<<arr[k]<<" ";
    // }


    // insert element
    // int size = 4, posi = 1, num = 2;
    // int arr[size] = {1, 3, 4, 5};

    // for(int i = size;  i >= posi; i--)
    // {
    //     arr[i + 1] = arr[i];
    // }
    // arr[posi] = num;
    // for(int j = 0; j <= size; j++)
    // {
    //     cout<<arr[j]<<" ";
    // }
     
    //  REVERSE Array
    //  int size = 5;
    //  int arr[size] = {4, 3, 2, 1, 0};
    //  int arr2[size];    
     
    //  for(int i = 0; i < size; i++)
    //  {
    //      arr2[i] = arr[size-1-i];
    //  }
    
    
    // int i = 0, j = size-1;
    // while(i < j)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    
//     int j = size-1;
//     for(int i = 0; i < size/2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         j--;
//     }
 
//  for(int k = 0; k < size; k++)
//  {
//      cout<<arr[k]<<" ";
//  }
 
  
//  find element to add give sum of user output
// int size = 4;
// int arr[size] = {1, 2, 3, 4};
// int add = 7;

// for(int i = 0; i < size-1; i++)
// {
//     for(int j = i + 1; j < size; j++)
//     {
//         if(arr[i] + arr[j] == add)
//         {
//             cout<<"Number is "<<arr[i]<<" and "<<arr[j]<<endl;
//             break;
//         }
//     }
// }



// Find seond large element  inarray
// int size = 4;
// int arr[size] = {11, 6, 9 ,2};
// int large = arr[2];
// int sLarge = arr[3];

// for(int i = 0; i < size; i++)
// {
//     if(arr[i] >  large)
//     {
//         large = arr[i];
//         break;
//     }
// }

// for(int j = 0;  j < size; j++)
// {
//     if(arr[j]  > sLarge && arr[j] != large)
//     {
//         sLarge = arr[j];
//     }
// }
// cout<<sLarge;







}