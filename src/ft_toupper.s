global _ft_toupper
section	.text

_ft_toupper:
	mov rax, rdi
	cmp rdi, 0x61 ; -> 97 a
	jl end
	cmp rdi, 0x7A ; -> 122 z
	jg end
	sub rax, 0x20 ; -> sub 32

end:
	ret
