global _ft_puts

extern _ft_strlen
extern _write

section .text

_ft_puts:

	mov rsi, rdi
	call _ft_strlen
	mov rdi, 1 ; stdout
	mov rdx, rax
	mov rax, 0x2000004 ; write
	call _write

	push 0x0a
	mov	rdx, 1
	mov	rdi, 1
	mov	rsi, rsp
	mov	rax, 0x2000004
	call _write
	pop	rax
	ret
