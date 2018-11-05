global _ft_puts

extern _write
extern _ft_putstr
section .text

_ft_puts:
	call _ft_putstr
	push 0x0a
	mov rdx, 1
	mov rdi, 1
	mov rsi, rsp
	mov rax, 0x200004
	call _write
	pop rax
end:
	ret
