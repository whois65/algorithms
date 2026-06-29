# Caesar Cipher

# Function
def encrypt(plain: str, shift: int) -> str:
    cipher = ""
    for i in plain:
        if (i.islower()):
            cipher += chr((ord(i)-ord('a')+shift)%26 + ord('a'))
        elif (i.isupper()):
            cipher += chr((ord(i)-ord('A')+shift)%26 + ord('A'))
        else:
            cipher += i
    return cipher

def decrypt(plain: str, shift: int) -> str:
    plain = ""
    for i in plain:
        if (i.islower()):
            plain += chr((ord(i)-ord('a')-shift)%26 + ord('a'))
        elif (i.isupper()):
            plain += chr((ord(i)-ord('A')-shift)%26 + ord('A'))
        else:
            plain += i
    return plain

# Encrypt 
plain_text = "This message is encypted"
shift_key = 3

cipher = encrypt(plain_text, shift_key)
print(plain_text, ":", cipher)


# Decrypt
decrypted = decrypt(cipher, shift_key)
print(cipher, ":", decrypted)