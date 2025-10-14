# Base class
class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print(f"{self.name} makes a sound.")

# Derived class Dog
class Dog(Animal):
    def make_sound(self):
        print(f"{self.name} says: Woof! Woof!")

# Derived class Cat
class Cat(Animal):
    def make_sound(self):
        print(f"{self.name} says: Meow!")

# Derived class Bird
class Bird(Animal):
    def make_sound(self):
        print(f"{self.name} says: Chirp! Chirp!")

# Demonstrating polymorphism
animals = [Dog("Buddy"), Cat("Whiskers"), Bird("Tweety")]

for animal in animals:
    animal.make_sound()
