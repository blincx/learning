; hello_world.asm
; date: April 11, 2023

section .text:
    nop

section .data:
    message: db "Hello World!", 0xA
    message_length equ $-message

