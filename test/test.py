import numpy as np

a = """
0       1       1       0       1       0       1

0       1       0       1       0       0       7

0       1       1       0       0       1       0

0       0       0       0       1       1       0

0       1       0       0       0       0       1

1       0       0       1       1       1       0

0       1       1       0       0       1       0

"""

"""
            x-1, y
    x, y-1   x, y    x, y+1
            x+1, y
"""
def find_way(row, column):
    pass


matrix = ''.join(a.split())
matrix = [int(i) for i in matrix]
matrix = np.array(matrix).reshape((7, 7))
find_way(6, 6)





