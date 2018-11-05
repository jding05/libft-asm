global _ft_putstr_fd
extern _ft_strlen
extern _write

section .text

_ft_putstr_fd:
	push rdi
	call _ft_strlen
	test rax, rax ; test if the string length is 0
	jz end
	mov rdi, rsi
	pop rsi
	mov rdx, rax
	mov rax, 0x2000004
	call _write

end:
	ret
