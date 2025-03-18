def find_second_largest(arr):
    if len(arr) < 2:
        print("Array must contain at least two elements.")
        return None

    first = float('-inf')
    second = float('-inf')

    # First pass: Find the largest element
    for num in arr:
        if num > first:
            first = num

    # Second pass: Find the second largest element
    for num in arr:
        if num > second and num < first:
            second = num

    return second if second != float('-inf') else None

# Example usage
arr = [12, 35, 1, 10, 34, 1]
second_largest = find_second_largest(arr)

if second_largest is not None:
    print("The second largest element is:", second_largest)
else:
    print("No second largest element found.")
