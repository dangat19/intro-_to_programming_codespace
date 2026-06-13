target = 42
attempts = 0

guess = int(input("Guess the number: "))
attempts = attempts + 1

while guess != target:
    if guess > target:
        print("Too high! Try again.")
    else:
        print("Too low! Try again.")
    guess = int(input("Guess the number: "))
    attempts = attempts + 1

print("Correct! You guessed it in", attempts, "attempts.")