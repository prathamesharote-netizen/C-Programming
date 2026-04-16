print("Prathamesh Arote, 251C022")

import re

phone = input("Enter phone number: ")
email = input("Enter email: ")

if re.match("^[0-9]{10}$", phone):
    print("Valid Phone Number")
else:
    print("Invalid Phone Number")

if re.match("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$", email):
    print("Valid Email")
else:
    print("Invalid Email")
