import multiprocessing

"""
result = []
def Calculate_Square(numbers):
    for i in numbers:
        print("Square :", i * i)
        result.append(i * i)
    
    print("Inside Function :", result)


if __name__ == "__main__":    
    list = [1, 2, 3, 4, 5]

    p1 = multiprocessing.Process(target = Calculate_Square, args = (list, ))
    p1.start()
    p1.join()
    
    print("Outside Function :", result)

"""
# Now, As we saw that the answer of global variable is not the same.We can solve this issue by sharing the memory

def Calculate_Square(numbers, sharedArray):
    for idx, i in enumerate(numbers):
       sharedArray[idx] = i * i
    
    print("Inside function  :", sharedArray[:])


if __name__ == "__main__":    
    list = [1, 2, 3, 4, 5]

    # There are 2 ways of sharing a memeory (1)By value (2)By Array
    # When we use array for sharing a memeory we use 2 key words (idx, enumerate())
    # idx is simply the index and enumrate is a bulit-in function in python for iterating over list, string etc
    
    # creating a shared array
    sharedArray = multiprocessing.Array('i', 5) # Array(dataType, sizeOfArray)
    p = multiprocessing.Process(target = Calculate_Square, args = (list, sharedArray))
    p.start()
    p.join()
    
    print("Outside function  :", sharedArray[:])
    print() #shortcut for printing all the elements of array

