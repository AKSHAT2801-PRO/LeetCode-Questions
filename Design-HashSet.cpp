1class MyHashSet {
2    vector<int> arr;
3public:
4    MyHashSet() {
5        
6    }
7    
8    void add(int key) {
9        for (int i=0;i<arr.size();i++){
10            if (arr[i]==key){
11                return;
12            }
13        }
14        arr.push_back(key);
15    }
16    
17    void remove(int key) {
18        for (int i=0;i<arr.size();i++){
19            if (arr[i]==key){
20                arr.erase(arr.begin()+i);
21            }
22        }
23    }
24    
25    bool contains(int key) {
26       for (int i=0;i<arr.size();i++){
27            if (arr[i]==key){
28                return true;
29            }
30        } 
31        return false;
32    }
33};
34
35/**
36 * Your MyHashSet object will be instantiated and called as such:
37 * MyHashSet* obj = new MyHashSet();
38 * obj->add(key);
39 * obj->remove(key);
40 * bool param_3 = obj->contains(key);
41 */