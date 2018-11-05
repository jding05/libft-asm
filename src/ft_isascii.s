global _ft_isascii

_ft_isascii:
	mov	rax, 0
	cmp rdi, 0x00 ; -> 0 nul
	jl end
	cmp rdi, 0x7f ; -> 127 del
	jg end
	mov rax, 1

end:
	ret
