; 101-hello_holberton.asm
;
; prints "Hello, Holberton"

global main

section .text:
main:
	mov eax, 0x04		; use the write syscall
	mov ebx, 1		; use stdout as the fd
	mov ecx, message	; use msg as buffer
	mov edx, len		; provide length
	int 0x80
	
	mov eax, 0x01
	mov ebx, 0
	int 0x80

section .data:
	message: db "Hello, Holberton", 0x0A
	len equ $ - message 
