input = raw_input().split()
a = int(input[0])
b = int(input[1])
n = int(input[2])

arr = [a, b]

for i in range(2, n):
    arr.append(arr[i - 1] * arr[i - 1] + arr[i - 2])

print arr[n - 1]
