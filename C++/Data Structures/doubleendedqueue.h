#ifndef DoubleEndedQueue_H
#define DoubleEndedQueue_H

#include <vector>

using namespace std;

class DoubleEndedQueue {
public:
    size_t kInitialSize = 2;

    DoubleEndedQueue();
    ~DoubleEndedQueue();

    void push_back(int elem);
    void push_front(int elem);

    int pop_back();
    int pop_front();

    int back();
    int front();

    size_t size();
    bool empty();

private:
    std::vector<int> deq;
};

#endif // DoubleEndedQueue_H


