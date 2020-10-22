            section     .text
            global      _ft_strcmp
_ft_strcmp:
			cmp	rdi, 0
			je end_null
			cmp rsi, 0
			je end_null

while:
			mov dl, [rdi]
			cmp	[rsi], dl
			jne end
			cmp byte [rdi], 0
			je end
			cmp	byte [rsi], 0
			je end
			inc rdi
			inc rsi
			jmp while

end:
			cmp dl, [rsi]
			jl end_neg
			sub dl, [rsi]
			mov rax, rdx
			ret

end_neg:
			sub dl, [rsi]
			neg dl
			neg rdx
			mov rax, rdx
			ret

end_null:
			xor rax, rax
			ret