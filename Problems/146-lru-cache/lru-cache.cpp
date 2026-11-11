#include <unordered_map>
using namespace std;

class LRUCache {
public:
    class Node {
    public:
        int key, value;
        Node* prev;
        Node* next;
        Node(int k, int v) {
            key = k;
            value = v;
            prev = next = nullptr;
        }
    };

    // Dummy Head & Tail pointers
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> m;
    int limit;

    void addNode(Node* newNode) {
        Node* oldNode = head->next;

        head->next = newNode;
        newNode->prev = head;

        newNode->next = oldNode;
        oldNode->prev = newNode;
    }
    void delNode(Node* oldNode) {
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

   

    int get(int key) {
        // Correct way to search inside an unordered_map
        if (m.find(key) == m.end()) {
            return -1;
        }

        Node* ansNode = m[key];

        // Move the accessed node to the front (Most Recently Used)
        delNode(ansNode);
        addNode(ansNode);

        return ansNode->value;
    }

    void put(int key, int value) {

        if (m.find(key) != m.end()) {
            Node* oldNode = m[key];
            oldNode->value = value;
            delNode(oldNode);
            addNode(oldNode);
            return;
        }

        // If cache capacity reached, evict the Least Recently Used (tail->prev)
        if (m.size() == limit) {
            Node* lruNode = tail->prev;
            m.erase(lruNode->key);
            delNode(lruNode);
            delete lruNode;
        }

        // Add brand new node
        Node* newNode = new Node(key, value);
        addNode(newNode);
        m[key] = newNode;
    }
};
