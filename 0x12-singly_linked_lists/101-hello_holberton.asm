section .data
	printed_message db "Hello, Holberton", 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, printed_message
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret

