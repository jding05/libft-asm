global _ft_isalnum
extern _ft_isalpha
extern _ft_isdigit

section .text
_ft_isalnum:
	mov	rax, 0
	call _ft_isalpha
	cmp rax, 1
	je end
	call _ft_isdigit

end:
	ret
