section     .text
            global      _ft_strcpy
_ft_strcpy:
            xor rcx, rcx

while:
			xor rdx, rdx
			cmp byte [rsi + rcx], 0
            jz	end
            mov dl, [rsi + rcx]
            mov [rdi + rcx], dl
            inc	rcx
            jmp while

end:
            mov byte [rdi + rcx], 0
            mov rax, rdi
            ret
