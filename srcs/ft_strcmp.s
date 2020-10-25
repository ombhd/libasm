section     .text
            global      _ft_strcmp

_ft_strcmp:

while:
			xor rax, rax
			xor rbx, rbx
			mov al, byte [rdi]
			mov	bl,	byte [rsi]
			cmp rax, rbx
			jnz end
			cmp al, 0
			jz	end
			cmp	bl, 0
			jz	end
			inc rdi
			inc rsi
			jmp while

end:		
			sub rax, rbx
			js	end_neg
			cmp rax, 0
			jg	end_pos
			ret

end_pos:
			mov	rax, 1
			ret

end_neg:
			mov rax, -1
			ret
