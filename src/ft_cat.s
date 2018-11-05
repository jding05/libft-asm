global _ft_cat
extern _ft_bzero
extern _read
extern _write
extern _malloc
extern _free
extern _ft_strlen

section .text
; _ft_cat:
; 	push rdi
; 	mov rdi, 520
; 	call _malloc
; 	push rax
; 	mov rdi, rax
; 	mov rsi, 520
;
; loop:
; 	call _ft_bzero
; 	pop rsi
; 	pop rdi
; 	push rdi
; 	mov rdx, 512
; 	call _read
; 	cmp rax, 0
; 	jle end
; 	mov rdi, rsi
; 	call _ft_strlen
; 	mov rdx, rax
; 	mov rax, 0x2000004
; 	mov rdi, 1
; 	call _write
; 	push rsi
; 	mov rdi, rsi
; 	mov rsi, 520
; 	jmp loop
;
; end:
; 	mov rdi, rsi
; 	call _free
; 	pop rdi
; 	ret

_ft_cat:

malloc:
	push rdi ; store fd
	mov rdi, 4096
	call _malloc
	push rax ; store the allocated space

bzero:
	mov rdi, rax
	mov rsi, 4096
	call _ft_bzero ; clear out everything in the allocated space

read:
	pop rsi ; get the allocated space from stack
	pop rdi ; get the fd from the stack
	push rdi ; store fd into the stack again, cuz it's a loop
	mov	rdx, 4096
	call _read
	cmp rax, 0 ;-> how many bytes read
	jle freed ; if zero or less then jump to the end

write:
	mov rdi, 1
	mov rdx, rax ; store how many bytes read to rdx
	mov rax, 0x2000004
	call _write
	push rsi
	jmp read

freed:
	mov rdi, rsi
	call _free ; free the allocated space
	pop rdi ; clear out the stack

end:
	ret
