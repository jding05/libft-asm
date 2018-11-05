global _ft_isdigit

section .text
_ft_isdigit:
	mov	rax, 0 ; mov destination before source [intel], move source before the destination [AT&T]
	cmp rdi, 0x30 ; -> 48 0 [first paramter]
	jl end
	cmp rdi, 0x39 ; -> 57 9
	jg end
	mov rax, 1

end:
	ret
