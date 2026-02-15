/* Name : Prathamesh Lakshman Arote
UIN : 251C022
Branch : Civil
Div : B*/
name=input("enter your name:")
print(name)
tasks = []

tasks.append("Study")
tasks.append("Exercise")
tasks.append("Sleep")

tasks[1] = "Play" #update task
tasks.remove("Sleep") #remove task
tasks.sort() #sort tasks

task_tuple = tuple(tasks)

for t in task_tuple:
    print(t)
