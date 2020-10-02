#include <iostream>

using namespace std;

class Trie
{
private:
    Trie *children[26] = {};
    bool valid = false;

public:
    Trie() {}

    Trie *getChild(char x)
    {
        return children[x - 'a'];
    }

    void createChild(char x)
    {
        children[x - 'a'] = new Trie();
    }

    void insert(string word)
    {
        Trie *root = this;
        for (auto x : word)
        {
            if (root->getChild(x) == NULL)
                root->createChild(x);
            root = root->getChild(x);
        }
        root->valid = true;
    }

    bool search(string word)
    {
        Trie *root = this;
        for (auto x : word)
        {
            if (root->getChild(x) == NULL)
                return false;
            root = root->getChild(x);
        }
        return root->valid;
    }
};

int main()
{
    Trie *trie = new Trie();
    trie->insert("app");
    trie->insert("apple");
    trie->insert("ball");
    if (trie->search("app"))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    if (trie->search("bag"))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}