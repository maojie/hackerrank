import math

def sum_of_squares(n):
  return n * (n + 1) * (2 * n + 1) / 6

def solve(n):
  start = 1
  end = n
  while start <= end:
    mid = (start + end) / 2
    if sum_of_squares(mid) <= n:
      start = mid + 1
    else:
      end = mid - 1
  start -= 1
  return start

t = int(raw_input())
for i in range(0, t):
  n = int(raw_input())
  res = solve(n)
  print res
