/*WAP a program to print if a pattern is present orr not in a given string using Kmp Algorithm .*/

#include<iostream>
using namespace std;

void lpsarray(string pattern,int n,int lps[]){

int len=0;
int i=1;
lps[0]=0;
int k=pattern.length();
while(i<k){
    if(pattern[i]==pattern[len]){
        lps[i]==len+1;
        len=len+1;
        i=i+1;
    }else{
        if(len!=0){
            len=lps[len-1];
            
        }else{
            lps[i]=0;
            i=i+1;
        }
    }
}

}


bool KMP(string text,string pattern){
int m=text.length();
int n=pattern.length();

int lps[n];

lpsarray(pattern,n,lps);
int i=0;
int j=0;

while(i<m-n+1){
        if(text[i]==pattern[j]){
            i+=1;
            j+=1;
        }else{
            if(j!=0){
                j=lps[j-1];

            }else{
                i=i+1;
            }
        }
        if(j==n){
            //cout<<i<<" to "<<j;
            return 1;
            lps[j-1];
            
        }
}
return 0;
}

int main(){
    string text,pattern;
    cin>>text;
    cin>>pattern;

    if(KMP(text,pattern)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}
