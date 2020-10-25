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
				call    ___error
				pop     rcx
				mov     [rax], rcx
				mov		rax, -1
				ret
