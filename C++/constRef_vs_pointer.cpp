class Demo {

private:
    vector<int> spikers;

    //...//

public:
    // Current Implementation:
    vector<int>* getSpikers() {
        return &spikers;
    }

    // Suggested solution:
    const vector<int>& getSpikers() const {
        return spikers;
    }

    // Advantages of using const reference:
    // 1. Safe against undeseriable changes to private members
    // 2. Avoid unnecessary pointer reference/dereference in calling function
}
