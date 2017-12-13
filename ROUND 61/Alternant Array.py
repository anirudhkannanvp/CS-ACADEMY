n=int(input())
a=list(map(int,input().split()))
c1=0
a1=[]
a2=[]
for i in range(2*n):
    if(i%2==0):
        a1.append(0)
        a2.append(1)
    else:
        a1.append(1)
        a2.append(0)
c2=0
for i in range(2*n):
    c1+=abs(a1[i]-a[i])
    c2+=abs(a2[i]-a[i])
print(min(c1//2,c2//2))
        