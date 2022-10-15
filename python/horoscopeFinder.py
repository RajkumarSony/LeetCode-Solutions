
a = int(input("Enter the day of Birth :"))
b = int(input("Enter the month of Birth :"))

# comparing the day and month and assigning the star
if(((b == 12) and (a >= 22 and a <= 31)) or ((b == 1) and (a >= 1 or a <= 20))):
    print("  YOUR STAR IS CAPRICON..")
elif(((b == 1) and (a >= 21 and a <= 31)) or ((b == 2) and (a >= 1 and a <= 19))):
    print("  YOUR STAR IS AQUARIUS..")
elif(((b == 2) and (a >= 20 and a <= 29)) or ((b == 3) and (a >= 1 and a <= 20))):
    print("  YOUR STAR IS PISCES..")
elif(((b == 3) and (a >= 21 and a <= 31)) or ((b == 4) and (a >= 1 and a <= 19))):
    print("  YOUR STAR IS ARIES..")
elif(((b == 4) and (a >= 20 and a <= 30)) or ((b == 5) and (a >= 1 and a <= 20))):
    print("  YOUR STAR IS TAORUS..")
elif(((b == 5) and (a >= 21 and a <= 31)) or ((b == 6) and (a >= 1 and a <= 21))):
    print("  YOUR STAR IS GEMINI..")
elif(((b == 6) and (a >= 22 and a <= 30)) or ((b == 7) and (a >= 1 and a <= 23))):
    print("  YOUR STAR IS CANCER..")
elif(((b == 7) and (a >= 24 and a <= 31)) or ((b == 8) and (a >= 1 and a <= 23))):
    print("  YOUR STAR IS LEO..")
elif(((b == 8) and (a >= 25 and a <= 31)) or ((b == 9) and (a >= 1 and a <= 22))):
    print("  YOUR STAR IS VIRGO..")
elif(((b == 9) and (a >= 23 and a <= 30)) or ((b == 10) and (a >= 1 and a <= 22))):
    print("  YOUR STAR IS LIBRA..")
elif(((b == 10) and (a >= 23 and a <= 31)) or ((b == 11) and (a >= 1 and a <= 22))):
    print("  YOUR STAR IS SCORPIO..")
elif(((b == 11) and (a >= 23 and a <= 30)) or ((b == 12) and (a >= 1 and a <= 20))):
    print("  YOUR STAR IS SCORPIO..")
else:
    print("SORRY! Print valid date and month")
