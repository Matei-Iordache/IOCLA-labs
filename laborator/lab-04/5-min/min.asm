%include "../io.mac"

section .text
    global main
    extern printf

main:
    ;cele doua numere se gasesc in eax si ebx
    ; TODO: aflati minimul
    

    mov eax, 4
    mov ebx, 1
    cmp eax, ebx
    jl min
    xchg eax, ebx

min: 
 
    PRINTF32 `%d\n\x0`, eax ; afiseaza minimul

    ret
