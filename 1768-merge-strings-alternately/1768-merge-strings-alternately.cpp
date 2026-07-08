class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string p="";
      
        int len= min(word1.size(),word2.size());
        for ( int i =0; i <len;i++)
        {
            p+=word1[i];
            p+=word2[i];
        }
         if ( word1.size()>=word2.size())
        {
            p.append(word1,len,word1.size()-1);
        }
        else
        {
            p.append(word2,len,word2.size()-1);
        }
        return p;

    }
};