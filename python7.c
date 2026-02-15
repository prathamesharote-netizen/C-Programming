/* Name : Prathamesh Lakshman Arote
UIN : 251C022
Branch : Civil
Div : B*/
#create student records
Grades = {"Alice":"A","Bob":"B"}
Attendance = {"Alice":90, "Bob":85}
#update a students grade and attendance
Grades["Bob"] = "A"
Attendance["Bob"] = 88
#add a new student
Grades["Charlie"] = "C"
Attendance["Charlie"] = 80
#Remove a student
Grades.pop("Alice")
Attendance.pop("Alice")
#display student records
for Student in Grades:
    print(Student,"-Grade",Grades[Student],"Attendance",Attendance[Student])
