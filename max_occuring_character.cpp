//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        int number=0;
        int i;
        
        for(i=0;i<str.length();i++)
        {
            char ch=str[i];
            
            if(ch>='a' && ch<='z')
            {
                number=ch-'a';
            }
            if(ch>='A' && ch<='Z')
            {
                number = ch -'A';
            }
            arr[number]++;
        }
        
        
        int maxi=-1,ans=0;
        for(i=0;i<26;i++)
        {
            if(maxi<arr[i])
            {
                ans=i;
                maxi=arr[i];
            }
        }
        
        char finalanswer='a'+ans;
        return finalanswer;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends