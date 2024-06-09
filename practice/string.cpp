
    // *****************STRING****************************

    // UpperCse to LowerCase or viseversa
    // string str = "pROGRAMMING fUNDAMENTAL-306";
    // for(int i = 0; i < str.length(); i++)
    // {
    //     if(str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         cout<<(char)(str[i]-32);
    //     }
    //         else if(str[i] >= 'A' && str[i] <= 'Z')
    //         {
    //             cout<<(char)(str[i] + 32);
    //         }
    //         else
    //         {
    //             cout<<str[i];
    //         }
    // }


    // Palindrome
    // string str = "Madam";
    // bool flag = true;
    // for(int i = 0; i < str.length()/2; i++)
    // {
    //     if(str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] = (char)(str[i]+32);
    //         if( str[i] != str[str.length()-1-i] )
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    // if(flag == true)
    // {
    //     cout<<"Palindrome";
    // }
    // else
    // {
    //     cout<<"Not palindrome";
    // }
    
    
    // Reverse string
    // string str = "bad";
    // char temp;
    // for(int i = 0; i < str.length()/2; i++)
    // {
    //     temp = str[str.length()-i-1];
    //     str[str.length()-i-1] = str[i];
    //     str[i] = temp;
    // }
    // cout<<str;


     
    // remove duplicate string 
    // string str = "happy year yes";
    // int j;
    // for(int i = 0; i < str.length(); i++)
    // {
    //     for(j = 0; j < str.length(); j++)
    //     {
    //         if(str[i] == str[j])
    //         {
    //             break;
    //         }
    //     }
    //     if(i == j)
    //     cout<<str[i];
    // }




    // Angram number     
    // string str1 = "fast";
    // string str2 = "fats";
    // int l1 = str1.length();
    // int l2 = 0;
    // int j;
    // for(int i = 0; i < str1.length(); i++)
    // {
    //     for(j = 0; j < str2.length(); j++)
    //     {
    //         if(str1[i] == str2[j])
    //         {
    //             l2++;
    //             break;
    //         }
    //     }
    //         if(str1[i] != str2[j])
    //         {
    //             l2 = 0;
    //         }
    // }
    // if(l1 == l2) cout<<"Anagram Number";
    // else cout<<"Not anagram number";



    // char arr[] = "Coolege wala is best";
    // char arr[] = {'h', 'o', 's', 'q'}; // mojood ha '\0'
    // int i = 0;
    // while(arr[i] != '\0')
    // {
    //     cout<<arr[i];
    //     i++;
    // }
    
    // char*ptr = "college wala";
    // cout<<*ptr;
       
        
    // char str[] = "college wala";
    // char*ptr = str; 
    // int i = 0;
    // while(*ptr != '\0')
    // {
        // cout<<ptr;
    //     ptr++;
    //     i++;
    // }
    
    
    
    // char str[] = "college";
    // str = "pollgee";
    // str[0] = 'p';
    // cout<<str;
    
    // const char *ptr = "collge";
    // ptr = "pollege";
    // cout<<ptr;
    
    // char str[] = "college";
    // char*ptr = str;
    // *ptr = "lop";
    // cout<<ptr<<str;
    
    
    // char str[7] = "collge";
    // char str2[7];
    // char *str = "collge";
    // cout<<strlen(str);
    // strcpy(str2, str);
    // cout<<str2;
    
    
    // char str3[] = "Col";
    // char str4[] = "col";
    // char *str1 = "College";
    // char *str2 = "Wala";
    // strcat(str1, str2);
    // cout<<str1;
    
    // int res = strcmp(str3, str4);
    // cout<<res;

   

    //  addition using pinter
    // 2d array 
    // void process(array<array<int,2>,2> &matrix, array<array<int,2>,2> &matrix2)
    // {
    //     for(int i = 0; i < 2; i++)
    //     {
    //         for(int j = 0; j < 2; j++)
    //         {
    //             cout<<matrix[i][j] + matrix[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
   

    // array<array<int, 2>, 2>arr = {1, 2, {3, 4}};
    // array<array<int, 2>, 2>arr2 = {1, 2, {3, 4}};
    // process(arr, arr2);  





// char str[] = "college";
// str[0] = 'p';
// cout<<str;

// const int length = 20;
// char str[length];
// cout<<"Emter msg: ";
// cin>>str;
// cin.getline(str, length);
// cout<<str;