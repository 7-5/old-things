import math as m
li=[2,3,5,7,11]
n=13
ek=4
cnt=0
cnr=0
j=(int)(input("find primes till:"))
u=m.floor(m.sqrt(n+1))
while n<j:
	for i in li:
		if i>u and cnr==0:
			li.append(n)
			n+=ek
			u=m.floor(m.sqrt(n+1))
			cnt=0
			cnr=0
			if ek==2:
				ek=4
			else:
				ek=2
			break
		else:
			if n%i==0:
				n+=ek
				u=m.floor(m.sqrt(n+1))
				cnt=0
				cnr+=1
				if ek==2:
					ek=4
				else:
					ek=2
			else:
				cnt+=1
			if len(li)==cnt:
				cnt=0
				li.append(n)
print(li)
print(len(li))
print("primes exist smaller than ")
print(j)
