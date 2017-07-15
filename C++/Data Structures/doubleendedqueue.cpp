#include <doubleendedqueue.h>


DoubleEndedQueue::DoubleEndedQueue() {

}

DoubleEndedQueue::~DoubleEndedQueue() {

}

void DoubleEndedQueue::push_back(int elem) {
    //Insert element at back
    deq.push_back(elem);
}


void DoubleEndedQueue::push_front(int elem) {
    //Insert element at front
    vector<int>::iterator it = deq.begin();
    deq.insert(it, elem);
}

int DoubleEndedQueue::pop_back() {
    //Remove and return the last element
    vector<int>::iterator it = deq.end();
    int elem = deq[size()-1];
    deq.erase(it);
    return elem;
}

int DoubleEndedQueue::pop_front() {
    //Remove and return the first element
    vector<int>::iterator it = deq.begin();
    int elem = deq[0];
    deq.erase(it);
    return elem;
}

int DoubleEndedQueue::back() {
    //Examine the last element without removing it
    return deq[size()-1];
}

int DoubleEndedQueue::front() {
    //Examine the first element without removing it
    return deq[0];
}

size_t DoubleEndedQueue::size() {
    //Return the size of the DoubleEndedQueue
    return deq.size();
}


bool DoubleEndedQueue::empty() {
    //Return whether or not the DoubleEndedQueue is empty
    return deq.size() == 0;
}
