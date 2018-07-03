'''
Function: hash_string

Description: Takes in a string, returns a large number. This is a simple hash I
devised today. For each character in the string, it multiplies the character's
ASCII value by its positional placement (1-indexed). The natural logarithm of
that result is then returned (to avoid overflow when hashing longer strings).
'''

import math

def hash_string(st_to_hash):

	ret_hash = 1

	char_counter = 1
	for char in st_to_hash:
		ret_hash *= (char_counter * ord(char))
		char_counter += 1

	return math.log(ret_hash)
