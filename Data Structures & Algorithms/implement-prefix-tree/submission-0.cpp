class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;

        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class PrefixTree {
public:
    TrieNode* root;

    PrefixTree() {
        root = new TrieNode(); 
    }
    
    void insert(string word) {

        TrieNode* current = root;

        for (char ch : word) {

            int index = ch - 'a';

            if (current->children[index] == nullptr) {
                current->children[index] = new TrieNode();
            }

            current = current->children[index];
        }

        current->isEndOfWord = true;
        
    }
    
    bool search(string word) {
        TrieNode* current = root;

        for (char ch : word) {

            int index = ch - 'a';

            if (current->children[index] == nullptr) {
                return false;
            }

            current = current->children[index];
        }

        return current->isEndOfWord;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* current = root;

        for (char ch : prefix) {

            int index = ch - 'a';

            if (current->children[index] == nullptr) {
                return false;
            }

            current = current->children[index];
        }

        return true;
        
    }
};
