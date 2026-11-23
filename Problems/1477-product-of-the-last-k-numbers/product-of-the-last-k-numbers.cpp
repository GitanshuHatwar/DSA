class ProductOfNumbers {
public:
    vector<int> vec;
    ProductOfNumbers() {}

    void add(int num) { vec.push_back(num); }

    int getProduct(int k) {
        int prod = 1;
        int n = vec.size();
        for (int i = n - 1; i >= n - k; i--) {
            prod = prod * vec[i];
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */