# -*- coding: utf-8 -*-
"""
Created on Sat Jul 10 20:13:36 2021

@author: NS
"""
nums = [1,1,0,1,1,1]

def find(nums): 
    count = maxCount = 0
    for num in nums:
        if num == nums:
            count = count+1
        else:
            maxCount = max(count,maxCount)
        return maxCount
    
#print(find(nums))
#0
def reverse():
    N = int(input('Enter size of array ..'))
    A = []    
    for i in range(0,N):
        num = int(input())
        A.append(num)
    
    print('Original Array', A)
    
    A.reverse()
    print(A)
    
#reverse(N, A)

# 1
import random
def findMaxMin(arr,n):
    max = arr[0]
    min = arr[0]

    for i in range(1,n-1):
        if arr[i] > max : 
            max = arr[i]

        elif arr[i]  < min : 
            min = arr[i]
        
    
    print('maximum number is -- ' , max)
    print('minimum number is -- ' , min)


startpoint = random.randint(1,99)
arr=[]
for i in range(startpoint,startpoint+10):
    arr.append(i)
    
'''random.shuffle(arr)
print(arr)
n = len(arr)'''

#findMaxMin(arr,n)

#2
'''
Given an array arr[] and an integer K where K is smaller than size of array, 
the task is to find the Kth smallest element in the given array. It is given that 
all array elements are distinct.
'''

def kthsmallest(arr,n):
    sta = 0
    
    for i in range(1,n-1):
        if arr[i] < n:
            sta = arr[i]
    
    print(sta ,' Is smaller than the size of array.Which is -- ' , n)
    arr.sort()
    print('The kth smallest element is -- ' , arr[sta-1])

'''              
arr=[7,10,4,3,20,15]
n=len(arr)
kthsmallest(arr, n)
'''

#3
'''
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending 
order.
'''

def sort012(arr,n):
    arr.sort()
    print(arr)
    
'''
arr = [0,1,0]
n=len(arr)
sort012(arr,n)
'''

#4
'''
An array contains both positive and negative numbers in random order. Rearrange the 
array elements so that all negative numbers appear before all positive numbers.
'''

def rearrange(arr):
    arr.sort()
    print(arr)

#arr = [-12, 11, -13, -5, 6, -7, 5, -3, -6]
#rearrange(arr)

'''
def kthSmallest(self,arr, l, r, k):
    
    arr : given array
    l : starting index of the array i.e 0
    r : ending index of the array i.e size-1
    k : find kth smallest element and return using this function
    
    l=arr[0]
    n=len(arr)
    r=arr[n-1]

    arr.sort()
    return arr[k-1]

print(kthSmallest([]))
'''
#5
'''
Given two arrays a[] and b[] of size n and m respectively. The task is to find union
between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from 
both the arrays. If there are repetitions, then only one occurrence of element
should be printed in the union.
'''

'''
#THIS PROGRAM PICKS TH ELEMENT WHICH IS PRESENT IN BOTH OF THE ARRAYS.
def doUnion(a,b):
    n = len(a)
    m = len(b)
    u = []
    
    for i in a:
        if i in a:
            for j in b:
                if i == j and j in b:
                    u.append(i)
    
    return u

a=[85,25,1,32,54,6]
b=[85,2]
print(doUnion(a, b))

'''
#return count of elements in both the elements.

def doUnion(a,b,n,m):
    u=[]
    for i in a:
       u.append(i)
    
    for j in b:
        u.append(j)
    
    
    U = set(u)
    print(U)
    return len(U)


#a=[85,25,1,32,54,6]
#b=[85,2]
#n=len(a)
#m=len(b)
#print(doUnion(a,b,n,m))
'-----------------------------------------------------------'

#6
'Given an array, rotate the array by one position in clock-wise direction.'
'''
def rotate(a,n):
    t = []
    
    for i in range(0,n):
        t.append(a[i-1])
    
    return t
        

a = [1,2,3,4,5]
n = len(a)
print(rotate(a,n))
'''

def rotate( arr, n):
    t = []
    
    
    for i in range(0,n):
        
        t.append(arr[i-1])
    
    return t

#arr = [{1,2,3,4,5}]
#n=len(arr)
#print(n)
#print(rotate(arr, n))


'-----------------------------------------------------------------------'

#7
'''Given an array Arr[] of N integers. Find the contiguous sub-array
(containing at least one number) which has the maximum sum and return its sum'''

def maxSubArraySum(n,arr):
    sum = 0
    for i in arr:
        sum = sum + i
    
    return sum



arr = {-1,-2,-3,-4} 

n = len(arr)
#print(maxSubArraySum(n, arr))
#maxSubArraySum(n, arr)

num1 = int(input('Enter First Number--'))
num2 = int(input('Enter Second Number--'))
diff = num2-num1


print('Difference Between',num1,'and', num2 , 'is = ', diff)
