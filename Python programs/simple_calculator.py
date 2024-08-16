def calculator(a,b,operator):
    if(operator=="+"):
        return a+b
    elif(operator=="-"):
        return a-b
    elif(operator=="*"):
        return a*b
    elif(operator=="/"):
        return a/b
    elif(operator=="%"):
        return a%b
    else:
        return "Please enter some valid operator"

a=int(input("Enter the value a: "))
b=int(input("Enter the value b: "))
operator=input("Enter the operator: ")

result=calculator(a,b,operator)
print("The resulted value = ",result)