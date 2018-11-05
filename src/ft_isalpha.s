global _ft_isalpha

_ft_isalpha:
	mov rax, 0
	cmp rdi, 0x41 ; 65 -> A
	jl end
	cmp rdi, 0x7a ; 122 -> z
	jg end
	cmp rdi, 0x61 ; 97 -> a
	jge settrue
	cmp rdi, 0x5a ; 90 -> Z
	jle settrue
	jmp end

settrue:
	mov rax, 1

end:
	ret
