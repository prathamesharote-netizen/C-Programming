print("Prathamesh, 251C022")

def check_prime(n):
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

num = int(input("Enter a number: "))

if check_prime(num):
    print("Number is Prime")
else:
    print("Number is Not Prime")
