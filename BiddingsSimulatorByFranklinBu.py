import os


bid = {}
bid_finished = False

while not bid_finished:
    name = input("Name of bidder: ")
    bid_price = int(input("Bid price: ")) 
    bid[name] = bid_price
    
    should_finished = input("Is there another bidder? (Y or N): ").lower()
    
    if should_finished == "n":
        os.system("cls")
        bid_finished = True
    elif should_finished == "y":
        os.system("cls")

highest_bid = 0
highest_bidder = ""

for bidder, price in bid.items():
    if price > highest_bid:
        highest_bid = price
        highest_bidder = bidder

print(f"The highest bidder is {highest_bidder} with a bid price of {highest_bid}")
