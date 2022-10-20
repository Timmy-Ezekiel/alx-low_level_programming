.data
str: .asciiz "Hello, Holberton\n"

.text
li $v0, 4
la $a0, str
syscall
