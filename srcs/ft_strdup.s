extern		_ft_strlen
extern		_ft_strcpy
extern		_malloc

section     .text
			global		_ft_strdup

_ft_strdup:
			push	rdi
			call	_ft_strlen
			mov		rdi, rax
			inc		rdi
			call	_malloc
			cmp		rax, 0
			jz		err
			pop		rsi
			mov		rdi, rax
			call	_ft_strcpy

err:
			ret
