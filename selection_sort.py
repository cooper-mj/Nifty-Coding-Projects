'''
File: selection_sort.py
Author: Michael Cooper
This program is a simple implementation of the selection sort algorithm in
Python.
'''

def selection_sort(input_list):
    output_list = []
    while len(input_list) > 0:
        output_list.append(min(input_list))
        input_list.remove(min(input_list))
    return output_list
