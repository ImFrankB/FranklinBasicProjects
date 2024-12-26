alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def caesar(start_text, shift_amount, c_direction):
    end_text = ""
    if c_direction == "decode":
        shift_amount = -shift_amount
    
    for letter in start_text:
        if letter in alphabet:
            position = alphabet.index(letter)
            nposition = (position + shift_amount) % 26
            end_text += alphabet[nposition]
        else:
            end_text += letter  # Keep the letter as is if it's not in the alphabet
    
    print(f"Your {c_direction}d message is {end_text}")

direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n").lower()
text = input("Type your message:\n").lower()
shift = int(input("Type the shift number:\n"))
shift %= 26
caesar(text, shift, direction)
