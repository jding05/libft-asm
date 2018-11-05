global _ft_strcat
extern _ft_strlen
extern _ft_strcpy
section .text

_ft_strcat:
	push rdi
	call _ft_strlen
	pop rdi ; since strlen modify rdi, so we retore it from stack

	push rdi ; store d ptr
	add rdi, rax ; modify d string ptr to its end
	call _ft_strcpy
	pop rax ; return orig d ptr

end:
	ret
