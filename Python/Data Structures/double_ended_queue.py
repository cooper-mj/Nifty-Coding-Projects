'''
File: double_ended_queue.py
Author: Michael Cooper

Description: this file implements a double-ended queue in Python.

TODO: Add peek at last and first elements.
<obj>[-1], and <obj>[0]
'''

class DoubleEndedQueue():
    def __init__(self):
        self.queue = []
    def append(self, item):
    # Adds an item to the back of the queue.

        self.queue.append(item)
    def append_left(self, item):
    # Adds an item to the front of the queue.
        self.queue.insert(0, item)
    def eject(self):
    # Removes the last element in the queue.
        if len(self.queue) == 0:
            raise ValueError("The queue is empty!")
        else:
            item = self.queue[len(self.queue)-1]
            self.queue.remove(item)
            return item
    def pop(self):
    # Removes the first element in the queue.
        if len(self.queue) == 0:
            raise ValueError("The queue is empty!")
        else:
            item = self.queue[0]
            self.queue.remove(item)
            return item
