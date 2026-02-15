/* Name : Prathamesh Lakshman Arote
UIN : 251C022
Branch : Civil
Div : B*/
print("1 circle")
print("2 rectangle")
print("3 triangle")
c=int(input("choose:"))
if c==1:
    r=float(input("radius"))
    print("Area=",3.14*r*r)

elif c==2:
    l=float(input("Length:"))
    b=float(input("Breadth:"))
    print("Area=",l*b)

elif c==3:
    b=float(input("Base:"))
    h=float(input("Height:"))
    print("Area=",0.5*b*h)
