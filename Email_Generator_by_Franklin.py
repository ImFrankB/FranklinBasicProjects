import random

def read_items_from_file(filename):
    with open(filename, 'r') as file:
        items = [line.strip() for line in file.readlines()]
    return items

def RandomEmail():
    items_list = read_items_from_file('Names.txt')

    random_item = random.choice(items_list)
    
    print(f"Your email : {random_item}@gmail.com")

    
    
def Randompassword():

    letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']


    password = []

    for char in range(1,random.randint(5, 10)):
        password.append(random.choice(letters))

    for char in range(1, random.randint(5, 10)):
        password.append(random.choice(symbols))

    for char in range(1, random.randint(5, 10)):
        password.append(random.choice(numbers))

    random.shuffle(password)
    random_pass ="".join(password)
    print(f"Your password : {random_pass}")


print("Welcome to email generator!")

RandomEmail()
Randompassword()

while True:
    Repeat = input("Generate more, Y or N: ").lower()
    if Repeat == 'y':
        RandomEmail()
        Randompassword()
    elif Repeat == 'n':
        print("Thankyou for using, Goodye")
        break
    else:
        print("Invalid input")