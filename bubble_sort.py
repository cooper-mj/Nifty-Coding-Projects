'''
File: bubble_sort.py
Author: Michael Cooper

Implementation of the bubble sort algorithm from this page:
https://brilliant.org/wiki/bubble-sort/

'''

def bubble_sort(input_list):
    for i in range(len(input_list)):
        #Move along hte array swapping elements
        n = 0
        m = 1
        while m < len(input_list):
            elem_one = input_list[n]
            elem_two = input_list[m]
            if elem_two < elem_one:
                temp = elem_one
                input_list[n] = elem_two
                input_list[m] = elem_one
            m += 1
            n += 1
    return input_list
