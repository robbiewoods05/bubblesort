sortNums = []


def getInput():
	finished = False
	yourNum = 0
	answer = ""

	global total
	total = 0

	while not(finished):
		yourNum = input("Enter number: ")
		sortNums.insert(len(sortNums), yourNum)
		answer = raw_input("Final number? (y/n): ")
		if answer in ['y', 'Y']:
			finished = True
	
	return


def bubbleSort( numbers):
	temp = 0

	for a in range(len(sortNums)):
		if a <= len(sortNums):
			for b in range(len(sortNums) - 1):
					if (numbers[b + 1] < numbers[b]):      
						temp = numbers[b]             
						numbers[b] = numbers[b + 1]
						numbers[b + 1] = temp  
				
	return

getInput()
bubbleSort(sortNums)

for i in range(total):
	print sortNums[i] 

	