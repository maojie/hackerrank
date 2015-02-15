t = int(raw_input())

def gcd(a, b):
  if b == 0:
    return a
  else:
    return gcd(b, a % b)

for i in range(0, t):
  input = raw_input().split()
  a = int(input[0])
  b = int(input[1])
  x = int(input[2])
  y = int(input[3])
  if gcd(a, b) == gcd(x, y):
    print "YES"
  else:
    print "NO"
