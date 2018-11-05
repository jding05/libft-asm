global _ft_putchar_fd
extern _write

section .text
_ft_putchar_fd:
	push rdi
	mov rdi, rsi
	lea rsi, [rsp] ; the string assigned address of the char from the stack
	mov rdx, 1
	mov rax, 0x2000004
	call _write
	pop rdi
	ret
