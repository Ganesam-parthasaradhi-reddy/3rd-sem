# Car class demonstration

class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model   # fixed typo: mo del → model
        self.year = year
        self.is_started = False  # To keep track of the car's state

    def start(self):
        if not self.is_started:
            print(f"The {self.year} {self.make} {self.model} is starting.")
            self.is_started = True
        else:
            print(f"The {self.year} {self.make} {self.model} is already running.")

    def stop(self):
        if self.is_started:
            print(f"The {self.year} {self.make} {self.model} is stopping.")
            self.is_started = False
        else:
            print(f"The {self.year} {self.make} {self.model} is already stopped.")


# Example usage
my_car = Car("Toyota", "Corolla", 2020)
my_car.start()
my_car.start()
my_car.stop()
my_car.stop()
