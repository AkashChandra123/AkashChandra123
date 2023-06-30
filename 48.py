#Create an outer function that will accept two parameters, a and b
#Create an inner function inside an outer function that will calculate the addition of a and b
#At last, an outer function will add 5 into addition and return it
def outer_func(a,b):
    square = a**b
    print(square)
    def inner_func(a,b):
        return a+b

    add = inner_func(a,b)
    return add+5

result = outer_func(10,2)
print(result)

