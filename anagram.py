s1=input()
s2=input()
l1=[]
l2=[]
for i in s1:
    l1.append(i)
for i in s2:
    l2.append(i)
l1.sort()
l2.sort()
if l1==l2:
        print("yes")
else:
        print("no")