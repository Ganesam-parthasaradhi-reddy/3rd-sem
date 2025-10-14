#   ---*args---
def multiply(*numbers):
    result=1
    for num in numbers:
        result*=num
    return result
print(multiply(1,2,3,4,5))
print(multiply(2,3))
# ---**kwargs---
def fun(**data):
    for key,value in data.items():
        print(f"{key}:{value}")
print(fun(name="Iswarya",age=18))