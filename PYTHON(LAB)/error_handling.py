def safe_divide(numerator, denominator):
    try:
        result = numerator / denominator
        print(f"The result of {numerator} / {denominator} is: {result}")
    except ZeroDivisionError:
        print(f"Error: Cannot divide by zero! Attempted {numerator} / {denominator}")
    except TypeError:
        print("Error: Invalid input types. Please provide numbers.")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")


# Demonstrating error handling
print("\n--- Error Handling Demonstration ---")
safe_divide(10, 2)       # Normal division
safe_divide(10, 0)       # Division by zero
safe_divide(5, "abc")    # Invalid type
