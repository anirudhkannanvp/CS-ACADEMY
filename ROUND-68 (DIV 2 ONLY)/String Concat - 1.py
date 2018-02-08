n=int(input())
arr=[]
ans=[]
for i in range(n):
    a=str(input())
    arr.append(a)
for i in range(n):
    for j in range(n):
        if(i!=j):
            temp=arr[i]+arr[j]
            temp1=arr[j]+arr[i]
            #print(temp)
            for k in range(n):
                if(arr[k]==temp or arr[k]==temp1):
                    ans.append(k+1)
ans=list(set(ans))
ans.sort()
print(*ans)