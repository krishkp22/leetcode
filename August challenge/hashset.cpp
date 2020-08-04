//Used inbuilt methods of hashset given in the problem statement and solved in c++.
class MyHashSet {
public:
    /** Initialize your data structure here. */
    bool a[1000000]{false};
    MyHashSet() {
        
    }
    
    void add(int key) {
        a[key]=true;
    }
    
    void remove(int key) {
        a[key]=false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return a[key];
    }
};
