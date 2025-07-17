#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
     void backtrack(string curr, int open, int close, int n, vector<string>& res){
       if(curr.size()==2*n) {
         res.push_back(curr); 
         return ; 
       }
       if(open<n) backtrack(curr+'(', open+1, close, n, res); 
       if(close(<open) backtrack(curr+')', open, close+1, n, res); 
       
     }
     vector<string> generateParenthesis(int n) {
       vector<string> res; 
       backtrack("", 0,0, n, res);
       return res;
     }
};
int main(){
  int n=3; 
  Solution sol; 
  vector<string> res= sol.generateParenthesis(n); 
  for(string s:res){
    cout << s << "," << endl; 
  }
  return 0; 
}
