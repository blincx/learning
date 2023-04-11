; hello_world.asm
; date: April 11, 2023

section .text:
    mov eax, 0x4            ; use the 'write' syscall
    mov ebx, 1              ; use standard out as file desscriptor
    mov ecx, message        ; use message as the buffer
    mov edx, message_length ; supply the length
    int 0x80                ; invoke the syscall
                            ; int = interrupt 
                            ; 0x80 = identifier for running a syscall 
    mov eax, 0x1            ; exit syscall
    mov ebx, 0              ; output status

section .data:
    message: db "Hello World!", 0xA
    message_length equ $-message

