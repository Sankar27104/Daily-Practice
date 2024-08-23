n=input("Enter the numbers seperated with comma(,):")
numbers = list(map(int, n.split(',')))
divisible_by_3 = [num for num in numbers if num%3==0]
print("The numbers divisible by 3 are:",divisible_by_3)
sum_of_3_divisors=sum(divisible_by_3)
print("The sum of the numbers divisible by 3:",sum_of_3_divisors)
divisible_by_5 = [num for num in numbers if num%5==0]
print("The numbers divisible by 5 are:",divisible_by_5)
sum_of_5_divisors=sum(divisible_by_5)
print("The sum of the numbers divisible by 5:",sum_of_5_divisors)
result=divisible_by_3+divisible_by_5
sum_result=sum(result)
print("The sum of the numbers that are divisble by 3&5 is: ",sum_result)
