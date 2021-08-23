import multiprocessing
import time

"""
def Deposit(balance):
    for i in range(100):
        time.sleep(0.01)
        balance.value = balance.value + 1

def Withdraw(balance):
    for i in range(100):
        time.sleep(0.01)
        balance.value = balance.value - 1

if __name__ == "__main__":
    balance = multiprocessing.Value('i', 500)
    
    p1 = multiprocessing.Process(target=Deposit, args=(balance, ))
    p2 = multiprocessing.Process(target=Withdraw, args=(balance, ))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print(balance.value)
"""
# Above Code have a probelm, we can easily solve it by using lock

def Deposit(balance, lock):
    for i in range(100):
        time.sleep(0.01)
        lock.acquire()
        balance.value = balance.value + 1
        lock.release()

def Withdraw(balance, lock):
    for i in range(100):
        time.sleep(0.01)
        lock.acquire()
        balance.value = balance.value - 1
        lock.release()

if __name__ == "__main__":
    balance = multiprocessing.Value('i', 500)
    
    lock = multiprocessing.Lock()
    p1 = multiprocessing.Process(target=Deposit, args=(balance, lock))
    p2 = multiprocessing.Process(target=Withdraw, args=(balance, lock))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print(balance.value)