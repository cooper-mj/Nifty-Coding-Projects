/* File: doubleendedqueue.cpp
 * Author: Michael Cooper
 *
 * Description: An implementation of an integer-based double ended queue structure.
 * A double ended queue is a container that permits the insertion and removal of
 * elements at either the front or back of the container. Double ended queues support
 * six main operations, all of which are implemented in this file:
 *    - push_back(elem) - adds the element "elem" to the back of the queue.
 *    - push_front(elem) - adds the element "elem" to the front of the queue.
 *    - pop_back() - removes the last element in the queue, returns it.
 *    - pop_front() - removes the first element in the queue, returns it.
 *    - back() - returns the last element in the queue without removing it.
 *    - front() - returns the first element in the queue without removing it.
 *
 */

#ifndef DoubleEndedQueue_H
#define DoubleEndedQueue_H

#include <vector>

using namespace std;

// Class Definition
class DoubleEndedQueue {
public:
    size_t kInitialSize = 2;

  /* Constructor: DoubleEndedQueue()
   * Usage: DoubleEndedQueue deq;
   * -------------------------------------------------------
   * Constructs a new empty double ended queue.
   */
    DoubleEndedQueue();
    
  /* Destructor: ~DoubleEndedQueue()
   * Usage: Automatically called.
   * -------------------------------------------------------
   * Deallocates memory from the DoubleEndedQueue object.
   */
    ~DoubleEndedQueue();

  /* Insertion Operators: push_back(int elem);
   *                      push_front(int elem);
   * Usage: deq.push_back(5);
   * -------------------------------------------------------
   * push_back adds a new element, elem, to the end of the DoubleEndedQueue.
   * push_front adds a new element, elem, to the front of the DoubleEndedQueue.
   */
    void push_back(int elem);
    void push_front(int elem);

  /* Removal Operators: pop_back();
   *                    pop_front();
   * Usage: deq.pop_back();
   * -------------------------------------------------------
   * pop_back removes and returns the element at the end of the DoubleEndedQueue.
   * pop_front removes and returns the element at the front of the DoubleEndedQueue.
   */
    int pop_back();
    int pop_front();

  /* Inspection Operators: back();
   *                       front();
   * Usage: deq.front();
   * -------------------------------------------------------
   * back() returns the element at the end of the DoubleEndedQueue without removing it.
   * front() returns the element at the front of the DoubleEndedQueue without removing it.
   */
    int back();
    int front();
    
private:
    // size() returns the number of elements in the DoubleEndedQueue object.
    size_t size();
    // empty() returns whether or not the DoubleEndedQueue object contains no elements.
    bool empty();
    
    // Initializing the vector backing the DoubleEndedQueue.
    std::vector<int> deq;
};

#endif

/* ---------- Implementation Below this Point ---------- */

DoubleEndedQueue::DoubleEndedQueue() {
    //No initialization of variables is needed.
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
    return size() == 0;
}
