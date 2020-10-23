			section     .text
			global		_ft_strlen
_ft_strlen:
			xor rcx, rcx

while:
			cmp byte [rdi + rcx], 0
			jz	end
			inc rcx
			jmp while

end:
			mov rax, rcx
			ret

