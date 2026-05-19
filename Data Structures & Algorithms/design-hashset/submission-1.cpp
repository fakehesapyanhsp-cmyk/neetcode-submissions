class MyHashSet {
public:
    vector<int> data;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if (!contains(key)) {
            data.push_back(key);
        }
    }
    
    void remove(int key) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i] == key) {
                data.erase(data.begin() + i);
                break;
            }
        }
    }
    
    bool contains(int key) {
        for (auto num : data) {
            if (key == num) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */