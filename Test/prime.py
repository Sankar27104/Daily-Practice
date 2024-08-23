def prime(n):
    if n<=1:
        return False
    if n==2:
        return True
    if n%2==0:
        return False
    for i in range(3,int(n**0.5)+1,2):
        if n%i==0:
            return False
    return True
number = int(input("Enter the number: "))
if prime(number):
    print(f"{number} is prime number.")
else:
    print(f"{number} is not a prime number.")
