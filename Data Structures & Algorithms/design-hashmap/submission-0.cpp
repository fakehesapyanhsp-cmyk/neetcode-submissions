class MyHashMap {
public:
    pair<int ,int> data;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i].first == key) {
                data[i].second = value;
                return;
            }
        }
        data.push_back({key, value});
    }
    
    int get(int key) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i].first == key) {
                return data[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i].first == key) {
                data.erase(data.begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */