/* Name : Prathamesh Lakshman Arote
UIN : 251C022
Branch : Civil
Div : B*/
#students in exam
cet={"alice","bob"}
jee={"bob","eve"}
neet={"alice","eve"}
print("all students", cet|jee|neet)
print("students in all exam",cet & jee & neet)
print("cet but not jee",cet-jee)
