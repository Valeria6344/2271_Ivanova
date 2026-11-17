def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper
@toint
def add(a, b):
    return a + b
print(add("2", "3"))
@toint
def multiply(a, b, c):
    return a * b * c
print(multiply("2", "3", "8"))
@toint
def subtract(a, b):
    return a - b
print(subtract("23", "3"))