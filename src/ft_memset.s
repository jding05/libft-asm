global _ft_memset

section .text

_ft_memset:
	push rdi	; store str ptr
	mov rcx, rdx
	mov rax, rsi
	cld  ; clear direction flag, so the string ptr auto increment after each string operation
	rep stosb	; store al (rax) in rdi and increment rdi ptr, until rcx reach 0
	pop rax		; return str ptr
	ret
