import math

limit = 600851475143
limits = math.sqrt(limit)

factors = []

def isprime(a):
	for i in range(2,int(math.sqrt(a))):
		if a%i == 0:
			return False
	return True

for i in range(2,int(limits)):
	if isprime(i) and limit % i ==0:
		factors.append(i)

factors.sort()

print factors[len(factors)-1]

