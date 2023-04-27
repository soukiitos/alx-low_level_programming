global main
section .text
extern printf
main:
	mov rax, 0
	mov rdi, format
	mov rsi, msg
	call printf

	mov rax, 0
	ret
section .data
format: db "%s", 10, 0
msg: db "Hello, Holberton", 0
