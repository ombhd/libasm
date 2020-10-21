			section     .text
			global		_ft_strlen
_ft_strlen:
			cmp rdi, 0
			je end_null
			xor rcx, rcx
while:
			cmp byte [rdi + rcx], 0
			je end
			inc rcx
			jmp while

end:
			mov rax, rcx
			ret

end_null:
			xor rax, rax
			ret
