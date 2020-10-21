            section     .text
            global      _ft_strcpy
_ft_strcpy:
            cmp rdi, 0
            je  end_null
            cmp rsi, 0
            je  end_null
            xor rcx, rcx

while:
            cmp byte [rsi + rcx], 0
            je  end
            mov r9, [rsi + rcx]
            mov [rdi + rcx], r9
            inc rcx
            jmp while

end:
            mov [rdi + rcx], byte 0
            mov rax, rdi
            ret

end_null:
            xor rax, rax
            ret