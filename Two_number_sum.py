array = list(map(int, input("Enter Space Seperated Elements : ").strip().split()))
nums={}
target_sum=int(input("Enter Target Sum : "))
for i in array:
    val=target_sum - i
    if val in nums:
        print("[",val," ,",i,"]")
    else:
        nums[i]=True
