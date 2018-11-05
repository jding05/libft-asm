global _ft_bzero
section .text ; This is the program's executable machine code (it's binary data, not plain text!).

_ft_bzero:

; while:
; 	cmp rsi, 0
; 	jle end
; 	mov byte[rdi + rsi - 1], 0 ; -> change the string's bytes
; 	sub rsi, 1
; 	jmp while
;
; end:
; 	ret
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

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
