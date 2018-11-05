global _ft_bzero
section .text

_ft_bzero:
	cmp rdi, 0
	jz end
	mov rax, rdi
	mov rbx, rsi

while:
	cmp rbx, 0
	jle end
	mov byte[rax], 0
	inc rax
	dec rbx
	jmp while

end:
	ret
