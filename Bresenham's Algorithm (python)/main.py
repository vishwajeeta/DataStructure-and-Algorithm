# step1:
(x1,y1)=(1,1)
(x2,y2)=(8,5)

x=x1
y=y1

# step2

dx=x2-x1
dy=y2-y1

p=(2*dy)-dx

while(x<=x2+1):#1<=8
    print(x,y,p)
    x+=1
    if(p<0):
        p=p+(2*dy)
    else:
        p=p+(2*dy)-(2*dx)
        y+=1