# Cryptography Algorithms

## 1. Caesar Cipher

> Shifts each letter in the plaintext by a fixed number of positions down the alphabet.

Use Case: Teaching basic cryptographic concepts and historical substitution mechanics.

Time Complexity: O(N) for encryption and decryption where N is the text length.

## 2. Vigenère Cipher

> Uses a keyword to apply a series of different Caesar ciphers based on the letters of the keyword.

Use Case: Introducing polyalphabetic substitution to counter basic frequency analysis.

Time Complexity: O(N) for encryption and decryption where N is the text length.

## 3. Playfair Cipher

> Encrypts pairs of letters (digrams) instead of single letters using a 5x5 matrix of a keyword.

Use Case: Historical military communications requiring manual encryption without machinery.

Time Complexity: O(N) for encryption and decryption where N is the text length.

## 4. XOR Cipher

> Combines plaintext bits with a key using the logical exclusive OR operation.

Use Case: Implementing fast, hardware-level symmetric encryption and building blocks for complex algorithms like one-time pads.

Time Complexity: O(N) for encryption and decryption where N is the data size in bits.

## 5. DES (Data Encryption Standard)

> Encrypts data in 64-bit blocks using a 56-bit key through a 16-round Feistel network structure.

Use Case: Legacy banking systems and older electronic financial transactions (now largely replaced by Triple DES or AES).

Time Complexity: O(N) where N is the number of blocks.

## 6. AES (Advanced Encryption Standard)

> Processes data in 128-bit blocks using substitution-permutation networks with key lengths of 128, 192, or 256 bits.

Use Case: Protecting government classified data, securing Wi-Fi networks (WPA2/WPA3), and encrypting hard drives.

Time Complexity: O(N) where N is the number of blocks.

## 7. RSA (Standard Algorithm)

> Encrypts data using a public key and decrypts it using a linked private key based on prime factorization.

Use Case: Securing online data transmissions like HTTPS and SSH connections.

Time Complexity: O(k³) for key generation where k is key bits.
