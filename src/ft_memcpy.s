global _ft_memcpy
section .text

_ft_memcpy:
	mov rcx, rdx
	push rdi
	mov rax, rsi
	cld
	rep movsb
	pop rax
	ret

; char *dst, char *src
;
; 2 case
;
; str = "123456789"
; dst 7 src 1
; dst 1 src 7
;
; 1. dst > src
; 2. src > dst
