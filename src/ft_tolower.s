global _ft_tolower
section	.text

_ft_tolower:
	mov rax, rdi ;
	cmp rdi, 0x41 ; -> 65 A
	jl end
	cmp rdi, 0x5A ; -> 90 Z
	jg end
	add rax, 0x20 ; -> add 32

end:
	ret
