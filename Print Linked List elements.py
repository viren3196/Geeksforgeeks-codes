'''Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.'''


#Your task is to complete this function
#Your function should print the data in one line only
#You need not to print new line
def printlist(node):
    while(node!=None):
        print(node.data,end=' ')
        node=node.next
