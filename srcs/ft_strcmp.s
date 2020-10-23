            section     .text
            global      _ft_strcmp
_ft_strcmp:

while:
			xor rdx, rdx
			mov dl, byte [rdi]
			sub	dl, byte [rsi]
			jnz end
			cmp byte [rdi], 0
			jz	end
			cmp	byte [rsi], 0
			jz	end
			inc rdi
			inc rsi
			jmp while

end:
			js end_neg
			mov rax, rdx
			ret

end_neg:
			neg dl
			neg rdx
			mov rax, rdx
			ret
