## used method:-
1. keep tract of all the elements we have already seen and access them quickley

2. DSA we would be using `HashShet`
- cannot contain dublicate value
- we will check our array with the Hash array if not there we will add or else move forward
- time complexity `O(n)`
- space complexity `O(n)`
- as iterating only once and checking element in `O(1)` from Hashtag
## other methods:-
1. we can use 2 loop 1 to hold and other to check values against it
 time complexity is `O(n^2)`
 ```java
 int arr[2,1,2,4,3,4]
 for(int i=0;i<n;i++)
 for(int j=i+1;j<n;j++)
 ```
2. sorting and checking
time complexity is `O(n log n)`
```java
//after sorting
arr[1,2,2,3,4,4]
for(int i=0;i<n;i++)
if(arr[i]!=arr[i+1])
//don't remove
else{
    //remove
}