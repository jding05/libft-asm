global _ft_strlen
section .text

_ft_strlen:
	push rcx
	xor rcx, rcx ; 1 byte less then mov rcx, 0

counter:
	cmp [rdi], byte 0
	je null
	inc rcx
	inc rdi
	jmp counter

null:
	mov rax, 0

end:
	mov rax, rcx
	pop rcx
	ret
