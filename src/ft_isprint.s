global _ft_isprint

_ft_isprint:
	cmp rdi, 0x20 ; -> 32 sp
	jl nonprint
	cmp rdi, 0x7e ; -> 126 z
	jg nonprint
	jmp isprint

isprint:
	mov rax, 1
	jmp end

nonprint:
	mov rax, 0
	jmp end

end:
	ret
