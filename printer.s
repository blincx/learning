        .global _start

        .text
_start:
        # write(1, message, 13)
        equ con 12
        mov con, rdx

        mov     $1, %rax                # system call 1 is write
        mov     $1, %rdi                # file handle 1 is stdout
        mov     rdx, %rdi          # address of string to output
        mov     $33, %rdx               # number of bytes
        syscall                         # invoke operating system to do the write

        # exit(0)
        mov     $60, %rax               # system call 60 is exit
        xor     %rdi, %rdi              # we want return code 0
        syscall                         # invoke operating system to exit
message:
        .ascii  "Hey guys remember to eat toast!\n"
