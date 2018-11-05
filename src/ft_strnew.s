global _ft_strnew
extern _malloc
extern _ft_bzero

section .text

_ft_strnew:
	push rdi
	call _malloc
	test rax, rax
	jz end
	pop rsi
	mov rdi, rax
	call _ft_bzero
	mov rax, rdi

end:
	ret
