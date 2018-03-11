'''
A quine is a nonempty computer program which takes no input and outputs a
copy of its own source code. I decided to have some fun writing a quine.
This program is a quine; when run, it takes no inputs, and produces a copy
of its source code.
'''

code_source = [
"'''",
"A quine is a nonempty computer program which takes no input and outputs a",
"copy of its own source code. I decided to have some fun writing a quine.",
"This program is a quine; when run, it takes no inputs, and produces a copy",
"of its source code.",
"'''",
"",
"##",
"",
"def printSource():",
"\tfor line in code_source:",
'\t\tif line == "##":',
'\t\t\tprint("code_source = [")',
"\t\t\tfor line_2 in code_source:",
"\t\t\t\tprint(repr(line_2))",
'\t\t\tprint("]")',
"\t\telse:",
"\t\tprint(line)",
"",
"",
"def main():",
"\tprintSource()",
"",
"",
'if __name__ == "__main__":',
"\tmain()"
]
    
def printSource():
    for line in code_source:
        if line == "##":
            print("code_source = [")
            for line_2 in code_source:
                print(repr(line_2))
            print("]")
        else:
            print(line)
    

def main():
    printSource()


if __name__ == "__main__":
    main()
