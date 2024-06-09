// int n = 2552;
    // int a, b = 0, sum;
    // while(n > 0)
    // {
    //     a = n % 10;
    //     b = b * 10 + a;
    //     n /= 10;
    // }
    //     cout<<b<<endl;
    
    // Palidrone  
    // if(n == b)
    // {
    //     cout<<"Palindrone";
    // }
    // else {
    //     cout<<"not a palindrone";
    // }
    
    
    // float a = 1.3;
    // float b = 2.5;
    // if(a > b)
    // {
    //     cout<<a;
    // }
    // else if(b > a)
    // {
    //     cout<<b;
    // }
    
    // LEAP YEAR
    // int n = 2004;
    // if(n % 4 == 0 && n % 100 != 0)
    // {
    //     cout<<"Leap year";
    // }
    // else if (n % 400 == 0) 
    // {
    //     cout<<"Leap year";
    // }
    // else 
    // {
    //     cout<<"Not a leap year";
    // }
    // int r;
    
    
    
    // ATTENDENCER
    // float tClass = 200;
    // float attendClass = 140;
    // float r = (attendClass/tClass)*100;
    // if (r >= 75)
    // {
    //     cout<<r<<"%"<<" allow to sit in exam";
    // }
    // else 
    // {
    //     cout<<"Less than 75 %";
    // }
    
    
    // ARMSTRONG NUMBER
    // int n = 371;
    // int x = n;
    // int a, b = 0;
    // while(n > 0)
    // {
    //     a = n % 10;
    //     b = b + (a*a*a);
    //     n /= 10;
    // }
    // cout<<x<<endl;
    // if(x == b)
    // {
    //     cout<<b<<" Armstrong number";
    // }
    // else
    // {
    //     cout<<b<<" Not armstrong number";
    // }
    
    
    // Check VALID TRIANGLE
    // int a = 1, b = 4, c = 7;
    // if ( a + b > c && b + c > a && c + a > b)
    // {
    //     cout<<"Valid triangle";
    // }else
    // {
    //     cout<<"Not valid triangle";
    // }
    
    
    // int n1 = 11, n2 = 13;
    // int a, b, sum = 0;
    // while(n1 <= n2)
    // {
    //     a = n1 % 10;
    //     b = n1 / 10;
    //     sum += a + b;
    //     n1++;
    // }
    // cout<<sum;
    
    
    // COUNT NUMBER OF DIGIT AND SUM
    // int n1 = 1000, n2 = 135, a = 0;
    // int sum = n1 + n2;
    // int x = sum;
    // while (sum > 0)
    // {
    //     sum = sum / 10;
    //     a++;
    // }
    // cout<<x<<endl<<a;


        // Factorial
    // int n = 4, a = 1;
    // while(n > 0)
    // {
    //     a = a * n;
    //     n--;
    // }
    // cout<<a;
    
    
    // Power of given number
    // int n = 2, a = 4, power = 1;
    // while(a > 0)
    // {
    //     power = power * n;
    //     a--;
    // }
    // cout<<power;
    
    
            //   Character Print:     
    // char ch = 'B';
    // cout<<(int)(ch);
    
    // int x = 65;
    // cout<<(char)(x);
    
    
    // Print A to Z
    // for(char i = 'A'; i <= 'Z'; i++)
    // {
    //     cout<<i<<" ";
    // }
    
    
    // Change Uppercase to Lowercase or viseversa
    // char n;
    // cout<<"Enter a Character: ";
    // cin>>n;
    // if(n >= 'A' && n <= 'Z')
    // {
    //     cout<<"Previous Char: "<<n;
    //     cout<<"\nUpdated Char: "<<char(n + 32);
    // }
    //     else if(n >= 'a' && n <= 'z')
    //     {
    //         cout<<"Previou Char: "<<n;
    //         cout<<"\nUpdated Char: "<<char(n-32);
    //     }
    //         else 
    //         {
    //             cout<<"Invalid";
    //         }
    
    // Prime number
    // int n = 4, i;
    // for(i = 2; i < n; i++)
    // {
    //     if(n % i == 0)
    //     {
    //         break;
    //     }
    // }
    // if(i == n)
    // {
    //     cout<<"Prime Number";
    // }
    // else
    // {
    //     cout<<"Not Prime number";
    // }

    
    
    // print prime number b/w n1 & n2 snd their sum
    // int n1 = 11, n2 = 20, j, sum = 0;
    // for(int i = n1; i <= n2; i++)
    // {
    //     for(j = 2; j < n1; j++)
    //     {
    //         if(i % j == 0)
    //         {
    //             break;
    //         }
    //     }
    //     if(j == n1)
    //     {
    //         cout<<i<<" ";
    //         sum += i;
    //     }
    // }
    // cout<<endl<<sum; 
    
    
    // Print N prime number and their sum
    // int n = 5, j, p = 2, sum = 0;
    // for(int i = 1; i <= n; )
    // {
    //     for(j = 2; j < p; j++)
    //     {
    //         if(p % j == 0)
    //         {
    //             break;
    //         }
    //     }
    //     if(p == j)
    //     {
    //         cout<<p<<" ";
    //         sum += p;
    //         i++;
    //     }
    //     p++;
    // }
    // cout<<endl<<sum;


    // Fabonacci Series
    // int  n = 5, a = 0, b = 1, c;
    // while(n > 0)
    // {
    //     cout<<a<<" ";
    //     c = a + b;
    //     a = b;
    //     b = c;
    //     n--;
    // }
    
    
    // conversion decimal to binary
    // int arr[32], num, base, i{0};
    // cout<<"Enter number: ";
    // cin>>num;
    // cout<<"Enter base: ";
    // cin>>base;
    //  while(num > 0)
    //  {
    //      arr[i] = num % base;
    //      num /= base;
    //      i++;
    //  }
    //  i--;
    
    // for(; i >=0; i--)
    // {
    //     if(arr[i] > 9)
    //     {
    //         cout<<(char)(arr[i] + 55)<<" ";
    //     }
    //         else
    //         {
    //             cout<<arr[i]<<" ";
    //         }
    // }

     
     
     // print element of array which is greater than all right element
    // int size = 6, large;
    // int arr[size] = {16, 17, 4, 18, 5, 2};
    // int arr[size] = {2, 12, 34, 7, 3, 4};
    // for(int i = 0; i < size-1; i++)
    // {
    //     for(int j = i; j < size; j++)
    //     {
    //         if(i!=j)
    //         {
    //             if(arr[i] > arr[j])
    //             {
    //                 large = arr[i];
    //             }
                
    //             if(arr[i] < arr[j])
    //             {
    //                 large  = 0;
    //                 break;
    //             }
    //         }
    //     }
    //     if(large != 0)
    //     {
    //         cout<<large<<" ";
    //     }
    // }









