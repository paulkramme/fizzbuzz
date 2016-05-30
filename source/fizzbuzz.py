counter = 0
while counter <= 100:
    counter = counter + 1
    if counter % 3 == 0:
        print("fizz")
    elif counter % 5 == 0:
        print("buzz")
    elif counter % 3 == 0 and counter % 5 == 0:
        print("fizzbuzz")
    else:
        print(counter)
