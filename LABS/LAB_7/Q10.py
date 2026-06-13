correct_pin = 1234
attempts = 0
max_attempts = 3
access_granted = False

while attempts < max_attempts:
    pin = int(input("Enter your PIN: "))
    attempts = attempts + 1

    if pin == correct_pin:
        access_granted = True
        break
    else:
        remaining = max_attempts - attempts
        if remaining > 0:
            print("Incorrect PIN. Attempts remaining:", remaining)

if access_granted:
    print("Access granted. Welcome!")
else:
    print("Card blocked. Please visit your nearest branch.")