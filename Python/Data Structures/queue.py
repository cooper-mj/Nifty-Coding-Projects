'''
File: queue.py
Author: Michael Cooperd

Description: this file implements a queue in Python.
'''

class Queue():
    def __init__(self):
        self.queue = []
    def enqueue(self, item):
        self.queue.append(item)
    def dequeue(self):
        if len(self.queue) == 0:
            raise ValueError("The queue is empty!")
        else:
            item = self.queue[0]
            self.queue.remove(item)
            return item
