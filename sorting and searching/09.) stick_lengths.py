import numpy as np
import matplotlib.pyplot as plt

#visualiser for Q.9 ('09.) stick_lengths.cpp') 
# just paste your array in place of arr1 and you'll see why we should remove the centre most element

arr1=[2,3,1,5,2,3,9,8,6,9,10,1,2,4,5,7,8,10,11,6,4,8]
arr1.sort()
arr2=[]
for i in range(len(arr1)):
    el=arr1[i]
    temp=0
    for j in range(len(arr1)):
        temp+=abs(el-arr1[j])
    arr2.append(temp)

x=np.array(arr1)
y=np.array(arr2)
print(x)
index= int((len(arr1)-1)/2)
print(f"Centre most element is {x[index]}")
plt.plot(x, y)
plt.xlabel('Which element is subtracted')
plt.ylabel('Cost')
plt.show()