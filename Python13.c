print("Prathamesh Arote, 251C022")
print("Division Calculator with Exception Handling")

try:
    num1 = float(input("Enter the numerator: "))
    num2 = float(input("Enter the denominator: "))

    result = num1 / num2

    print(f"The result of {num1} divided by {num2} is: {result}")

except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

except ValueError:
    print("Error: Invalid input. Please enter numeric values.")

except Exception as e:
    print(f"An unexpected error occurred: {e}")

input("Press Enter to exit...")
