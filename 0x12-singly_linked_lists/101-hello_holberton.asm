section .data
	fmt db "%s", 10, 0
	msg db "Hello, Holberton", 10

	section .text
	extern printf
	global main

main:
	    mov rax, 1
	    mov rdi, 1
	    mov rsi, msg
	    mov rdx, 17
	    syscall

	    mov rax, 60
	    mov rdi, 0
	    syscall
