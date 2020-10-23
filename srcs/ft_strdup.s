extern	_ft_strlen
extern	_ft_strcpy
extern	_malloc

			section     .text
			global		_ft_strdup
_ft_strdup:
			push	rdi
			push	rsi
			call	_ft_strlen
			mov		r9, rdi
			mov		rdi, rax
			inc		rdi
			push	r9
			call	_malloc
			cmp		eax, 0
			jz		end_err
			pop		r9
			mov		rsi, r9
			mov		rdi, rax
			call	_ft_strcpy
			pop		rsi
			pop		rdi
			ret	

end_err:
			xor rax, rax
			ret