import struct
from decimal import Decimal



# print(Decimal(0.2))
# 0.200000000000000011102230246251565404236316680908203125

# print binary of any number
# print(bin(2))  # 0b10


one = Decimal('0.1')
two = Decimal('0.2')
three = Decimal('0.3')
result = one + two
print(one)
print(two)
print(three)
print(result)

print(round(2.675, 2))  # 2.67
print(round(Decimal('2.675'), 2))  # 2.68



"""
1.10 (Left shift it)
00011.00
00110.00
0110.00
1100.00
"""

###################################################################################################

# print(f"Floating representation of 1: {0.1:.60f}")
# print(f"Floating representation of 2: {0.2:.60f}")
# print(f"Floating representation of 3: {0.3:.60f}")
# print(f"Addition of             1+2 : {0.1+0.2:.60f}")


# print("Binary Repsentation of Number")
# done = False
# while not done:
# 	try:
# 		number = float(input("Enter the number: "))
# 		# number = 0.1
# 		binary_representation = struct.pack('>d', number)
# 		binary_representation = "".join(f"{b:08b}" for b in binary_representation)
# 		binary_representation = binary_representation[0] + " " + binary_representation[1:12] + " " + binary_representation[12:]
# 		# print(f"{number} Binary Representation: ")
# 		# print("Positive/Negative   Exponent   Mantissa")
# 		print(f"{number} is {binary_representation}")
# 	except Exception as e:
# 		print(e)


###################################################################################################



number = 0.1
binary_representation = struct.pack('>d', number)
binary_representation = "".join(f"{b:08b}" for b in binary_representation)
binary_representation = binary_representation[0] + " " + binary_representation[1:12] + " " + binary_representation[12:]
# print(f"{number} Binary Representation: ")
# print("Positive/Negative   Exponent   Mantissa")
print(f"{number} is {binary_representation}")


number = 0.2
binary_representation = struct.pack('>d', number)
binary_representation = "".join(f"{b:08b}" for b in binary_representation)
binary_representation = binary_representation[0] + " " + binary_representation[1:12] + " " + binary_representation[12:]
# print(f"{number} Binary Representation: ")
# print("Positive/Negative   Exponent   Mantissa")
print(f"{number} is {binary_representation}")


number = 0.3
binary_representation = struct.pack('>d', number)
binary_representation = "".join(f"{b:08b}" for b in binary_representation)
binary_representation = binary_representation[0] + " " + binary_representation[1:12] + " " + binary_representation[12:]
# print(f"{number} Binary Representation: ")
# print("Positive/Negative   Exponent   Mantissa")
print(f"{number} is {binary_representation}")


number = 0.1 + 0.3
binary_representation = struct.pack('>d', number)
binary_representation = "".join(f"{b:08b}" for b in binary_representation)
binary_representation = binary_representation[0] + " " + binary_representation[1:12] + " " + binary_representation[12:]
# print(f"{number} Binary Representation: ")
# print("Positive/Negative   Exponent   Mantissa")
print(f"Sum is {binary_representation}")


