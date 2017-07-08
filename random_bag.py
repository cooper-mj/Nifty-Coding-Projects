'''
File: random_bag.py
Author: Michael Cooper

A simple implementation of the random bag data structure in Python.
'''

import random

class RandomBag:
    def __init__(self):
        self.bag = []
    def push(self, item):
        self.bag.append(item)
    def pop(self):
        if len(self.bag) == 0:
            raise ValueError("The random bag is empty!")
        else:
            item = random.choice(self.bag)
            self.bag.remove(item)
            return item
