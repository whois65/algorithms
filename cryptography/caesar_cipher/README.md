# Caesar Cipher

Simple implementation of the Caesar Cipher encryption algorithm.

## Overview

Caesar Cipher is one of the oldest substitution ciphers.

Each alphabet letter is shifted by a fixed number of positions.

Example (Shift = 3)

Plaintext

ABC XYZ

↓

Ciphertext

DEF ABC

---

## Time Complexity

| Operation | Complexity |
| ---------- | ------------ |
| Encrypt | O(n) |
| Decrypt | O(n) |

Space Complexity: O(n)

---

## Parameters

### encrypt(text, shift)

| Parameter | Type | Description |
| ---------- | ------ | ------------- |
| text | str | Plain text |
| shift | int | Shift amount |

Returns

```python
str
```

---

### decrypt(text, shift)

Returns original text.

---

## Example

```python
plain = "Hello World"
shift = 3

cipher = encrypt(plain, shift)
print(cipher)

plain2 = decrypt(cipher, shift)
print(plain2)
```

Output

```txt
Khoor Zruog
Hello World
```

---

## Notes

- Supports uppercase letters
- Supports lowercase letters
- Keeps spaces and punctuation unchanged
- Shift values larger than 26 are automatically wrapped
