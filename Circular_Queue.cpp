class MyCircularQueue {
    public:
        int k;
        vector<int> p;
        MyCircularQueue(int k) {
            this->k = k;
        }
        
        bool enQueue(int value) {
            if (p.size() < k) {
                p.push_back(value);
                return true;
            }
            else {
                return false;
            }
        }
        
        bool deQueue() {
            if (p.size() > 0) {
                p.erase(p.begin());
                return true;
            }
            else {
                return false;
            }
        }
        
        int Front() {
            if (p.size() > 0) {
                return p[0];
            }
            else {
                return -1;
            }
        }
        
        int Rear() {
            if (p.size() > 0) {
                return p[p.size() - 1];
            }
            else {
                return -1;
            }
        }
        
        bool isEmpty() {
            if (p.size() == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        
        bool isFull() {
            if (p.size() >= k) {
                return true;
            }
            else {
                return false;
            }
        }
    };
