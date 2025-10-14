# Base class
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print(f"{self.name} makes a sound.")

# Derived class Dog
class Dog(Animal):
    def speak(self):
        print(f"{self.name} says: Woof! Woof!")

# Derived class Cat
class Cat(Animal):
    def speak(self):
        print(f"{self.name} says: Meow!")

# Derived class Bird
class Bird(Animal):
    def speak(self):
        print(f"{self.name} says: Chirp! Chirp!")

# Example usage
dog = Dog("Buddy")
cat = Cat("Whiskers")
bird = Bird("Tweety")

dog.speak()   # Buddy says: Woof! Woof!
cat.speak()   # Whiskers says: Meow!
bird.speak()  # Tweety says: Chirp! Chirp!
