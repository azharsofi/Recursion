//Given a string S. The task is to print all unique permutations of the given string in lexicographically sorted order.
class Solution


{     
      void solve( string s,int index, vector<string> &ans){
          //base
          if(index>=s.length()){
              ans.push_back(s);
              return ;
              
          }
         for(int j=index;j<s.length();j++){
          swap(s[index],s[j]);
           solve(s,index+1,ans);
           swap(s[index],s[j]);
      }
          
      }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    	vector<string> ans;
		    	int index=0;
		    		 solve(S,index,ans);
		    		 sort(ans.begin(),ans.end());
       return ans;
		}
};
