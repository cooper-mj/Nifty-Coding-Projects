'''
File: stack.py
Author: Michael Cooper

Description: This file implements a stack in Python.
'''

class Stack():
    def __init__(self):
        self.stack = []
    def push(self, item):
        self.stack.append(item)
    def pop(self):
        if len(self.stack) == 0:
            raise ValueError("The stack is empty!")
        else:
            item = self.stack[len(self.stack)-1]
            self.stack.remove(item)
            return item
