import time, threading, math

def Calculate_Square(numbers):
    print("Calculate_Square() \n")
    for i in numbers:
        time.sleep(0.4)
        print("Square :", i * i)


def Calculate_Cube(numbers):
    print("Calculate_Cube() \n")
    for i in numbers:
        time.sleep(0.4)
        print("Cube :", i * i * i)

if __name__ == "__main__":  
  
    list = [1, 2, 3, 4, 5]
    # first we will calculate time without using any thread's
    totalTime = time.time()

    Calculate_Square(list)
    Calculate_Cube(list)

    print("Total Execution Time without thread's: ", round(time.time() - totalTime, 2))


    # Now, Thread Part
    totalTime = time.time()

    # Creating two thread by using threading libraray
    t1 = threading.Thread(target = Calculate_Square, args=(list, ))
    t2 = threading.Thread(target = Calculate_Cube, args=(list, ))
        
    # Now, Start them
    t1.start()
    t2.start()

    # Now join them. what join does is it will wait until these respective thread complete their execution

    t1.join()
    t2.join()

    print("Total Execution Time using thread's: ", round(time.time() - totalTime, 2))

