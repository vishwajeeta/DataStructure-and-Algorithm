a=[8,2,9,5,7,1,0,5,0,0,3]
length=len(a)
print(length)
print(a)
i=0
j=0
while j<length-1:
    while i<length-1:
      try:
          if i<length-1:
             if a[i]>a[i+1]:
                 temp=a[i]
                 a[i]=a[i+1]
                 a[i+1]=temp    
                 print("if",a)
                 print(a[i])
      
      except:
          print("")
      i=i+1
      print(i)
    i=0
    j=j+1
    print("j")
print("===========",a)

