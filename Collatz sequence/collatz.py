def createCollatzSequence(num):
    #print("The number is") 
    #print(num)  
    counter=0
    while(num>1):
        if(num%2==0):
            num=num/2
        else:
            num=num*3 +1
        counter+=1 
    #print(counter) 
    return counter



maxNum=0
numCollatz=0
for x in range (1,1000000):
    if (createCollatzSequence(x)>maxNum):
        maxNum=createCollatzSequence(x)
        numCollatz=x
print(numCollatz)        

