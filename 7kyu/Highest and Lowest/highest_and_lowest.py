def high_and_low(numbers):
    arr = list(map(int, numbers.split(' ')))
    return f"{max(arr)} {min(arr)}"
