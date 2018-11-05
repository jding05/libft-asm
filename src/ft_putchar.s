global _ft_putchar
extern _write

section .text
_ft_putchar:
	push rdi
	mov rdi, 1
	lea rsi, [rsp] ; the string assigned address of the char from the stack
	mov rdx, 1
	mov rax, 0x2000004
	call _write
	pop rdi
	ret
