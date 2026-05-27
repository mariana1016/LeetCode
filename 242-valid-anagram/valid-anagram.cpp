class Solution {
public:
    bool isAnagram(string s, string t) {
        //if the length of each word is not equal, automatically not an anagram
        if(s.length() != t.length()){
            return false;
        }
        //creating array for the amount of letters in the alphabet and setting it to beginning of list, a-z, 0-26
        int count[26] = {0};
    //created the for loop to go through both strings at the same time
        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++; //increment for values in s starting at letter a
            count[t[i] - 'a']--; //decrement for values in t starting at letter a
        }
        //second for loop, count to check how many times in range, so create for loop to check if value is non-zero, not an anagram
        for(int u : count)
            if (u != 0) 
                return false; 

                return true;    
    }
};