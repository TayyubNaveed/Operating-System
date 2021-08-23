import time
import multiprocessing

def Calculate_Square(numbers):
    print("Calculate_Square() \n")
    for i in numbers:
        time.sleep(3)
        print("Square :", i * i)


def Calculate_Cube(numbers):
    print("Calculate_Cube() \n")
    for i in numbers:
        time.sleep(3)
        print("Cube :", i * i * i)

if __name__ == "__main__":    
    list = [1, 2, 3, 4, 5]

    # Creating two processes by using multiprocessing libraray
    p1 = multiprocessing.Process(target = Calculate_Square, args = (list, ))
    p2 = multiprocessing.Process(target = Calculate_Square, args = (list, ))
    
    # Now, Start them
    p1.start()
    p2.start()

    # Now join them. what join does is it will wait until these processes complete their execution

    p1.join()
    p2.join()


