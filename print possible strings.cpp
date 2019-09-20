#include<iostream>
#include<string.h>
using namespace std;

void formstring(string s,string choosen,int k){
    
    //base condition:
    
    if(choosen.length()==k){
        cout<<choosen<<endl;
        return;
    }
        
    //general case:
    
    else{
        for(int i=0;i<s.length();i++){
            choosen+=s[i]; //choose a string 
            formstring(s,choosen,k); //explore 
            choosen.erase(choosen.length()-1,1); //unchoose
            //formstring(s,choosen,k);
        }
    }
}

int main(){
    string s;
    int k;
    cin>>s;
    cin>>k;
    
    formstring(s,"",k);
}