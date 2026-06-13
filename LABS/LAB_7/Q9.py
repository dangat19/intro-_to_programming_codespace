# Errors found:
# 1. Missing closing parenthesis on the input() line.
# 2. "result = 0" should be 1, otherwise multiplying by 0
#    always gives 0.
# 3. "while counter < n" should be "<= n" so the loop includes
#    n itself in the product.
# 4. "counter + 1" does nothing on its own; it should be
#    "counter = counter + 1".
# 5. "Result" (capital R) is never defined; the variable is
#    "result" (lowercase).

n = int(input("Enter a positive integer: "))
result = 1
counter = 1

while counter <= n:
    result = result * counter
    counter = counter + 1

print("Factorial is:", result)