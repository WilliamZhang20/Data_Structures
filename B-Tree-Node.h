#include <vector>

template <typename T>
class BTreeNode {
    friend class BTree;
public:
    BTreeNode() {
        n = 0;
        leaf = true;
    }
    int n;
    std::vector<T> keys;
    std::vector<BTreeNode*> children;
    bool leaf;
    void printKeys() {
        for(int i=0; i<keys.size(); i++) {
            std::cout << keys[i] << " ";
        }
    }
};