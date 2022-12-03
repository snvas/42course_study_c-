# Binary coded decimal
It as a system of writing numerals that assigns a 4-digit binary code
to each digit 0 through 9 in decimal(base-10) numerals.
0 - 0000
1 - 0001
2 - 0010
3 - 0011
4 - 0100
5 - 0101
6 - 0110
7 - 0111
8 - 1000
9 - 1001

number larger than 9, having 2 or more digits 
in decimal system are expressed digit by digit
BCD representatio of base-10
number 1895 is
0001 1000 1001 0101

## Integer representation

Unsigned

Signed
	sign and magnitude
	1´s complement
	2´s complement

only one bit partter per value
equal number of positive value +ve and negative value -ve
max range of values
no gaps in the range

### Unsigned Integer
	is a integer without a sign
	is range is between 0 and +ve infinity

	#numberofbits		Range
		8				0 		255
		16				0		65535

ex: store 7 in an 8-bit memory location?
solution: 	first change the number to binary, 111
			Add five 0´s to make total of N(8) bits, 00000111

ex: store 258 in a 16-bit memory location?
2/258 divide 258 por 2
129 - 0		resultado é 129 e resta 0
2/129 divide 129 por 2
64 - 1	resultado é 64 e resta 1
2/64 divide 64 por 2
32 - 0 		resultado é 32 e resta 0
2/32 divide 32 por 2
16 -0 		resultado é 16 e resta 0
2/16 divide 16 por 2
8 - 0		resultado é 8 e resta 0
2/8 divide 8 por 2
4 - 0 resultado é 4 e resta 0
2/4 divide 4 por 2
2 - 0 resultado é 2 e resta 0
2/2 divide 2 por 2
1 - 0 resultado é 1 e resta 0
para saber o binário começa do ultimo resultado e sobre add os restos
100000010
solution: 	first change the number to binary, 100000010
			Add seven 0´s to make total of N(16) bits, 0000000100000010

#### Unsigned integer representation
example of storing unsigned integer in two different computers

- Decimal		8-bit allocation		16-bit allocation
- 7				00000111			0000000000000111
- 234			11101010			0000000011101010
- 258			overflow			0000000100000010
- 24,760		overflow			0110000010111000
- 1,245,678		overflow			overflow


### Signed Integer representation
- Sign and magnitude
	- Left most significant bit represent the sign 
	of the integer and remaining bits represent the magnitude
	- If the left bit is 1 the value is negative
	- If the left bit is 0 the value is positive

ex: store +7 in an 8-bit memory location using sign and magnitude representation
sol: first change the number to binary, 111
	add four 0´s to make total of N-1(7), 0000111
	add an extra 0 because the number is positive
	the result is 00000111
ex store -258 in 16-bit memory location using sign and magnitude representation
sol: first change the number to binary, 100000010
	add six 0´s to make total of N-1(15)bits, 000000100000010
	Add extra 1 because the number is negative
	the result is 1000000100000010

- One´s complement
	1´s complement means reversing all bits

#### example of storing 1´s complement integer in two different computers

Decimal		8-bit allocation		16-bit allocation
+7				00000111			0000000000000111
-7				11111000			1111111111111000
+124			01111100			0000000001111100
-124			10000011			1111111110000011
+24,760			overflow			0110000010111000
-24,760			overflow			1001111101000111

ex: store +7 in an 8-bit memory location using 1´s complement representation
sol: first change the number to binary, 111
	add five 0´s to make total of N(8), 00000111
	the sign is positive, so no more actions is needed
	the result is 00000111

ex store -258 in 16-bit memory location using 1´s complement representation
sol: first change the number to binary, 100000010
	add seven 0´s to make total of N(16)bits, 0000000100000010
	The sign is negative, so each bit is complement
	the result is 1111111011111101

- 2´s complement
	can be achieved by reversing all bits except the rightmost bits up to first 1 (including one)

ex: store +7 in an 8-bit memory location using 2´s complement representation
sol: first change the number to binary, 111
	add five 0´s to make total of N(8), 00000111
	the sign is positive, so no more actions is needed
	the result is 00000111

ex store -40 in 16-bit memory location using 2´s complement representation
sol: first change the number to binary, 101000
	add ten 0´s to make total of N(16)bits, 0000000000101000
	The sign is negative, so leave the right most 0´s up to 
	first 1 (including 1) inchanged and complemt te rest
	the result is 1111111111011000

#### example of storing 2´s complement integer in two different computers

Decimal		8-bit allocation		16-bit allocation
+7				00000111			0000000000000111
-7				11111001			1111111111111001
+124			01111100			0000000001111100
-124			10000100			1111111110000100
+24,760			overflow			0110000010111000
-24,760			overflow			1001111101001000
