class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

          unordered_map<string, int> wordCount;

    // Split the sentences into words and count their occurrences
    for (string word : split(s1)) {
        wordCount[word]++;
    }
    for (string word : split(s2)) {
        wordCount[word]++;
    }

    // Collect uncommon words
    vector<string> uncommonWords;
    for (auto& entry : wordCount) {
        if (entry.second == 1) {
            uncommonWords.push_back(entry.first);
        }
    }

    return uncommonWords;
}

// Helper function to split a string into words
vector<string> split(const string& str) {
    vector<string> words;
    string word;
    for (char c : str) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;

  }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

        
    
};