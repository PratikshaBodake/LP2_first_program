#include<iostream> 
using namespace std; 
int main() 
{ 
    try 
    { 
        int age; 
        cout<<"\n enter the  age:-"; 
        cin>>age; 
        if(age<18) 
        { 
            throw age; 
        } 
        else 
        { 
            cout<<"\n you are allowed for voting.\n thank you for voting ."<<endl; 
        }
    }
  
catch (int a) 
{ 
    cout<<"\n not allowed for voting:- "<<endl; 
    
} 
return 0; 
}
