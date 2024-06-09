    // void process(vector<char> &v)
// void process(vector<int> &v)
// {
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    // for(int &x : v)
    // {
    //     cout<<x<<" ";
    //     x++;
    // }
    
// }
    
// by pointer
// vector<int>v1 = {1, 2, 3, 4, 5};
// vector<char>v1 = {'a', 'b', 'c', 'f'};
// process(v1);



    //  vector<int>v1 = {1, 2, 3, 4, 5};
    // vector<char>v1 = {'a', 'b', 'c', 'd', 'e'};
    // vector<int>v1(5, 10);
    
    // for(int i = 0; i < v1.size(); i++)
    // {
        // cout<<v1[i]<<" ";
    //     cout<<v1.at(i)<<" ";
    // }


    // input
    // vector<int>v1;
    // int ele;
    // for(int i = 0; i < 4; i++)
    // {
    //     cout<<"Enter number: ";
    //     cin>>ele;
    //     v1.push_back(ele);
    // }
    
    // for(int i = 0; i < v1.size(); i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    
    
    // remove
    // vector<int>v1 = {1, 2, 3, 4, 5};
    // for(int i = 0; i < v1.size(); i++)
    // {
    //     v1.pop_back();
    //     cout<<v1[i]<<" ";
    // }
    // cout<<"\n"<<v1.size();
    
    
    // remove another method  
    // vector<int>v1 = {1, 2, 3, 4, 5};
    // for(int i = v1.size(); i > 0; i--)
    // {
    //     v1.pop_back();
    // }
    //  cout<<v1.size(); 
    //  if(v1.empty())
    //  {
    //      cout<<"\nVector is empty";
    //  }
    //  else
    //  {
    //      cout<<"\nVector not empty";
    //  }
    
    // method
    // vector<int>v1 = {1, 2, 3, 4, 5};
    // v1.clear();   
    // v1.erase(v1.begin(), v1.begin()+2); 
    // cout<<v1.size();

    



    
    // loop method
    // vector<int>v1 = {1, 2, 3, 4, 5};
    // vector<int>::iterator itr;
    // for(itr = v1.begin(); itr < v1.end(); itr++)
    // {
    //     cout<<*itr<<" ";
    // }
    
    // for(auto i = v1.begin(); i < v1.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }





        
    // vector<int> arr = {1, 2, 3};
    // int n = 2;
    // vector<int>replicateArr;
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         replicateArr.push_back(arr[i]);
    //     }
    // }
    // for(int k =0; k < replicateArr.size(); k++)
    // {
    //     cout<<replicateArr[k]<<" ";
    // }

     



    //  void process(vector<int> &arr)
    // {
    //     for(int j = 0; j < arr.size(); j++)
    //     {
    //         arr[j] *= 2;
    //     }
    // }
//   *************  
    // vector<int>arr = {2, 4, 6, 8};
    // process(arr);
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


    //  ********************
