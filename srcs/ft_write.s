				section		.text
				global		_ft_write
_ft_write:
				cmp rsi, 0
				je err
				cmp rdi, 0
				jl err
				cmp rdx, 0
				jl err
				mov rax, 0x02000004
				syscall
				ret
err:
				mov rax, -1
				ret
