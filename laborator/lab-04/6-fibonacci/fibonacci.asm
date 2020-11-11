%include "../io.mac"

section .text
    global main
    extern printf

main:
    mov eax, 7       ; vrem sa aflam al N-lea numar; N = 7

    ; TODO: calculati al N-lea numar fibonacci (f(0) = 0, f(1) = 1)
    mov ecx, 0 ; a = f(0)
    mov edx, 1 ; b = f(1)
    jmp comp
body:
	mov ebx, ecx ; c = a
	add ebx, edx ; c = c +b
	mov ecx, edx ; a = b	
	mov edx, ebx ; b = c
	dec eax	; N--
comp:
	cmp eax, 1 ; N > 1
	jne body
	PRINTF32 `%d\n\x0`, edx   
    ret
