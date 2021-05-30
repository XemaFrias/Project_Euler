sum=0
numInf=1
numSup=1
aux=0

while (1):
    if (numSup>=4000000):
        break
    if numSup%2==0:
        sum+=numSup
    aux=numSup  
    numSup+=numInf
    numInf=aux  

print (sum)    