def kg_to_pounds():
    """Converts a weight entered in kilograms to pounds."""
    try:
        kilograms = float(input("Enter weight in kilograms: "))
        pounds = kilograms * 2.2046
        print(f"The weight in pounds is: {pounds:.2f}")
    except ValueError:
        print("Invalid input. Please enter a numerical value for weight.")

# Call the function directly to run the conversion
kg_to_pounds()
