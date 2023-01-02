class Solution {
public:
    bool detectCapitalUse(string word) {
        
      // checking the string is uppercase or lower case 
        int count=0;
        int n=word.size();
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))    // 
            {
                count++;
            }
        }
        if(count==1 && isupper(word[0]))   // Goofosifsofio  first letter is capital.
            return true;
        
        if(count==0  || count==word.size())    //     all are small letters.
            return true;
        
        
        
        return false;
        
        
    }
};