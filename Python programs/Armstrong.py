def is_armstrong(num):
    c=0
    for i in num:
        c+=int(i)**len(num)
    if (int(num)==c):
        return True
    else:
        return False
    return False
num=input("Enter the number: ")
if(is_armstrong(num)):
    print(num,"is an armstrong number")
else:
    print(num,"is not an armstrong number")