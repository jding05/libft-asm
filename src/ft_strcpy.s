global _ft_strcpy

extern _ft_strlen
extern _ft_memcpy
extern _ft_bzero

_ft_strcpy:
	push rdi
	mov rdi, rsi
	call _ft_strlen
	pop rdi
	mov rdx, rax

	push rsi
	mov rsi, rax
	inc rsi
	call _ft_bzero

	pop rsi
	call _ft_memcpy
	ret
