from multiprocessing import Pool
import multiprocessing

"""
def square(n):
    return n*n


if __name__ == "__main__":
    list = [1, 2, 3, 4, 5]

    result = []

    for i in list:
        result.append(square(i))

    print(result)
"""

# As we know our processor have multi-cores and usually it is not using all of them
# in order to make all core to work we have to divide the work and it is called MAP and getting the solution from all cores is called reduce

from multiprocessing import pool


def square(n):
    return n*n


if __name__ == "__main__":
    list = [1, 2, 3, 4, 5]

    result = []

    p = Pool() # creating a object of pool
    result = p.map(square, list) #mapping the work
    p.close()
    p.join()
    
    print(result)
