extern		___error

section		.text

				global	_ft_write
_ft_write:
				mov		rax, 0x2000004
				syscall
				jc		err
				ret
err:
				push    rax
				call    ___error 		; rax = &errno
				pop     rcx   		 	; rcx = numberOfError
				mov     [rax], rcx 		; errno = *rax = rcx = numberOfError
				mov		rax, -1  		; rax = -1
				ret						; rax = 

; int *___error(void)
; {
; 	return (&errno);
; }