a=[8,2,9,5,7,1,0,5,0,0,3,4]

length=len(a)
print("before sorting:",a)
print("length",length)
i=0
j=0
while j<length-1:
    while i<length-1:
      
          if i<length-1:
             if a[i]>a[i+1]:
                 temp=a[i]
                 a[i]=a[i+1]
                 a[i+1]=temp  
          i=i+1
    i=0
    j=j+1
    
print("bubble_sorted=",a)

