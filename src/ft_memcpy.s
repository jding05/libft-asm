global _ft_memcpy
section .text

_ft_memcpy:
	mov rcx, rdx
	push rdi
	mov rax, rsi
	cld
	rep movsb
	pop rax
	ret
