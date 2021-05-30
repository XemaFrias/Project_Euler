import math
largest_prime=0
chekcer=False
for x in range (12,600851475143):
    if x%600851475143==0:
        chekcer=True
        for i in range (2,x):
            if i%x==0:
                chekcer=False
                break
        if chekcer:
            largest_prime=x

print (largest_prime)                
            