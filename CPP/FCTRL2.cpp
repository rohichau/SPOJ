# your code goes here
T = raw_input()
k = int(T)
while(k):
	N = raw_input()
	N = int(N)
	factorial = 1
	m = 2
	while(m<=N):
		factorial = factorial*m
		m=m+1
	print factorial
	k = k-1