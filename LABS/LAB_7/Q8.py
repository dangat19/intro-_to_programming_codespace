limit = int(input("Enter a positive integer limit: "))

a = 0
b = 1
count = 0

while a <= limit:
    print(a)
    count = count + 1
    temp = a + b
    a = b
    b = temp

print("Count of Fibonacci numbers printed:", count)
