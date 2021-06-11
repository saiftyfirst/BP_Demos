// New initialization with pointers, new, delete
class Demo {

protected:
    std::vector<int>* arrayOfvects;

public:
    Demo(int vsize) {
        vect = new std::vector<int>[vsize];
    }

    ~demo() {
        delete [] vect;
    }
};

// Improvement: Let std::vector deal with all the mess of resource allocation/deallocation
class Demo {

protected:
    std::vector<std::vector<int>> vect;

public:
    // initialize using memeber initializer list to void call to resize
    Demo(int vsize) : vect(vsize) {
    }

    ~demo() {
    }
};
