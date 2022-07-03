def countReduce(str):
	n = len(str)
	res = 0

	for i in range(0, int(n/2)):
		res = res +  abs( int(ord(str[i])) - int(ord(str[n - i - 1])) )
# abs - returns absolute value.
# ord - converts a character into an integer that represents the Unicode code of the character.	
	return res

str = input('Enter string : ')

print(countReduce(str))