n=int(input())
arr=list(map(int, input().split()))
allsubsets=[]
for mask in range (1 << n):
    currentSet=[]
    for j in range (n):
        if(mask & (1<<j)):
            currentSet.append(arr[j])
    allsubsets.append(currentSet)

for subset in allsubsets:
    print(subset)        
    
