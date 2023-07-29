extern printf

section .text
	global main

main:
	push rbp

	mov rdi,format_string
	mov rsi,hello_message
	mov rax,0
	call printf

	pop rbp

	mov rax,0
	ret

section .data
        hello_message db "Hello, Holberton", 0
        format_string db "%s", 10, 0
