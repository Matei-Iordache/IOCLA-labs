%include "../io.mac"

section .data
    myString: db "Hello, World!", 0
    myString2: db "Goodbye World!", 0

section .text
    global main
    extern printf

main:
    mov ecx, 6                      ; N = valoarea registrului ecx
    mov eax, 1
    mov ebx, 1
loop:
    PRINTF32 `%s\n\x0`, myString
    sub ecx, eax
    cmp ecx, 0
    jne loop
    ;simple for loop that takes ecx as the iterator

    cmp eax, ebx
    je print
    ;jg print       COMANDA PENTRU TASKUL 1                 ; TODO1: eax > ebx?
    ret

print:
    PRINTF32 `%s\n\x0`, myString2
                                    ; TODO2.2: afisati "Hello, World!" de N ori
                                    ; TODO2.1: afisati "Goodbye, World!"

    ret