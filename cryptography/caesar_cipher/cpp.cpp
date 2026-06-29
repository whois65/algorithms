#include <iostream>
#include <string>

std::string encrypt(std::string plain, int shift) {
    std::string cipher;
    for (auto&c:plain) {
        if (islower(c)) {
            cipher += ((c - 'a' + shift) % 26)+'a';
        }
        else if (isupper(c)) {
            cipher += ((c - 'A' + shift) % 26)+'A';
        }
        else {
            cipher += c;
        }
    }
    return cipher;
}

std::string decrypt(std::string plain, int shift) {
    std::string cipher;
    for (auto&c:plain) {
        if (islower(c)) {
            cipher += ((c - 'a' - shift) % 26)+'a';
        }
        else if (isupper(c)) {
            cipher += ((c - 'A' - shift) % 26)+'A';
        }
        else {
            cipher += c;
        }
    }
    return cipher;
}

int main() {
    std::string plain_text = "This message is encypted";
    int shift_key = 3;

    std::string cipher = encrypt(plain_text, shift_key);
    std::cout << plain_text << " : " << cipher << std::endl;


    // Decrypt
    std::string decrypted = decrypt(cipher, shift_key);
    std::cout << cipher <<  " : " << decrypted << std::endl;
}