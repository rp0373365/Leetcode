class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        vector<string> words;
        string word;

        // split words (removes extra spaces automatically)
        while (ss >> word) {
            words.push_back(word);
        }

        // build reversed string
        string result = "";

        for (int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if (i != 0) result += " ";
        }

        return result;
    }
};