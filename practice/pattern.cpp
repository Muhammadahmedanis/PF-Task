    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4
    // int row = 4 , col = 4;
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j <= i; j++)
    //     {
    //         cout<<j + 1<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 1 
    // 2 3 
    // 3 4 5 
    // 4 5 6 7 
    
    
    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // int a = 1;
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0; j <=i; j++)
    //     {
    //         // cout<<i + j + 1<<" ";
    //         cout<<a++<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 2 
    // 2 4 
    // 2 4 6 
    // 2 4 6 8 
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0;  j <=i; j++)
    //     {
    //         cout<<2*j + 2<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 1 
    // 1 3 
    // 1 3 5 
    // 1 3 5 7
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0; j <=i; j++)
    //     {
    //         cout<<2*j + 1<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 1 2 3 4 
    // 1 2 3 
    // 1 2 
    // 1
    // A B C D 
    // A B C 
    // A B 
    // A 
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0; j <4 -i; j++)
    //     {
    //         // cout<<j+1<<" ";
    //         cout<<(char)(j+65)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 4 3 2 1 
    // 4 3 2 
    // 4 3 
    // 4 
    // E D C B 
    // E D C 
    // E D 
    // E 
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 4; j >i+0; j--)
    //     {
            // cout<<j<<" ";
    //         cout<<(char)(j+65)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 4 3 2 1 
    // 3 2 1 
    // 2 1 
    // 1 
    // D C B A 
    // C B A 
    // B A 
    // A 
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 4-i; j>0; j--)
    //     {
    //         // cout<<j<<" ";
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    // 1 
    // 2 1 
    // 3 2 1 
    // 4 3 2 1 
    // A 
    // B A 
    // C B A 
    // D C B A
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = i+1; j > 0; j--)
    //     {
    //         // cout<<j<<" ";
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    
    // D C B A 
    // C B A 
    // B A 
    // A 
    // B A 
    // C B A 
    // D C B A
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 4-i; j>0; j--)
    //     {
    //         // cout<<j<<" ";
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = 1; i < 4; i++)
    // {
    //     for(int j = i+1; j > 0; j--)
    //     {
    //         // cout<<j<<" ";
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    //     1
    //   12
    //  123
    // 1234
    //     A
    //   AB
    //  ABC
    // ABCD
    // for(int i = 0; i<4; i++)
    // {
    //     for(int s = 0; s<4-i-1; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<=i; j++)
    //     {
    //         // cout<<j+1;
    //         cout<<(char)(j+65);
    //     }
    //     cout<<endl;
    // }
    
    
    
    // 1234
    //  123
    //   12
    //   1
    // ABCD
    //  ABC
    //   AB
    //   A
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int s = 0; s<i; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<4-i; j++)
    //     {
    //         // cout<<j+1;
    //         cout<<(char)(j+65);
    //     }
    //     cout<<endl;
    // }
    
    
    //    A A
    //   AB AB
    //  ABC ABC
    // ABCD ABCD
    //   1 1
    //   12 12
    //  123 123
    // 1234 1234
    // for(int i = 0; i<4; i++)
    // {
    //     for(int s = 0; s<4-i-1; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<=i; j++)
    //     {
    //         cout<<j+1;
    //         // cout<<(char)(j+65);
    //     }
    //     cout<<" ";
    //     for(int j = 0; j <= i; j++)
    //     {
    //         cout<<j + 1;
    //         // cout<<(char)(j+65);
    //     }
    //     cout<<endl;
    // }
    
    
    //    1
    //   23
    //  345
    // 4567
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int s = 0; s < 4-i-1; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<=i; j++)
    //     {
    //         cout<<j+i+1;
    //     }
    //     cout<<endl;
    // }
    
    
    // 2 
    // 4 3 
    // 6 5 4
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = i; j>0; j--)
    //     {
    //         cout<<i+j<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    //    1
    //   232
    //  34543
    // 4567654
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int s = 0; s < 4-i-1; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<=i; j++)
    //     {
    //         cout<<j+i+1;
    //     }
    //     for(int j = i; j>0; j--)
    //     {
    //         cout<<i+j;
    //     }
    //     cout<<endl;
    // }

    
    // 12344321
    // 123  321
    // 12    21
    // 1      1
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0; j <4 -i; j++)
    //     {
    //         cout<<j+1;
    //         // cout<<(char)(j+65)<<" ";
    //     }
    //     for(int s = 0; s<i+i; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 4-i; j>0; j--)
    //     {
    //         cout<<j;
    //         // cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }



    //   1
    //   232
    //  34543
    // 4567654
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int s = 0; s <4-i-1; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int k = 0; k<=i; k++)
    //     {
    //         cout<<k+i+1;
    //     }
    //     for(int j = i; j >0 ; j--)
    //     {
    //         cout<<i+j;
    //     }
    //     cout<<endl;
    // }
    
    
    
    //     1
    //    1 1
    //   1   1
    //  1     1
    // for(int i = 0; i < 4; i++)
    // {
    //     for(int s = 0; s<4-i; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<=i; j++)
    //     {
    //         if(j == 0)
    //         cout<<1;
    //         else
    //         cout<<" ";
    //     }
    //     for(int k = i; k>0; k--)
    //     {
    //         if(k == 1)
    //         cout<<1;
    //         else
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
