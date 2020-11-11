%include "../io.mac"

section .data
    my_eax: dd 0
    my_ebx: dd 0
section .text
    global main
    extern printf

main:
    ;cele doua multimi se gasesc in eax si ebx
    mov eax, 139
    mov ebx, 169
    PRINTF32 `EAX: %u\n\x0`, eax ; afiseaza prima multime
    PRINTF32 `EBX: %u\n\x0`, ebx ; afiseaza cea de-a doua multime

    ; TODO1: reuniunea a doua multimi
    mov [my_eax], eax ; store eax value
    mov [my_ebx], ebx ; store ebx value

    or ebx, eax ; reunion

    PRINTF32 `Reuniunea dintre EAX SI EBX este: \x0`
    PRINTF32 `%u\n\x0`, ebx

    mov ebx, [my_ebx] ;get the original ebx value 
    ; TODO2: adaugarea unui element in multime

    or eax, 16
    PRINTF32 `Am adaugat 16 in multimea din EAX: \x0`
    PRINTF32 `%u\n\x0`, eax
    mov eax, [my_eax]

    ; TODO3: intersectia a doua multimi

    and eax, ebx
    PRINTF32 `Intersectia dintre EAX SI EBX este: \x0`
    PRINTF32 `%u\n\x0`, eax

    mov eax, [my_eax]

    ; TODO4: complementul unei multimi

    not eax
    PRINTF32 `Complementul multimii EAX: \x0`
    PRINTF32 `%u\n\x0`, eax    

    mov eax, [my_eax]

    ; TODO5: eliminarea unui element
    sub eax, 128;
    
    PRINTF32 `Am eliminat 128 din EAX: \x0`
    PRINTF32 `%u\n\x0`, eax    

    mov eax, [my_eax]

    ; TODO6: diferenta de multimi EAX-EBX
    sub ebx, eax

    PRINTF32 `Am eliminat EAX din EBX: \x0`
    PRINTF32 `%u\n\x0`, ebx   
    
    mov ebx, [my_ebx]

    xor eax, eax
    ret
