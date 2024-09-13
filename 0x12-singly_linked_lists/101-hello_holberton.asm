section .data
    message db 'Hello, Holberton', 0    ; The string to print, terminated by a null byte

section .text
    global main                         ; Entry point for the program

extern printf                           ; Extern declaration of printf

main:
    ; Set up the arguments for printf
    mov rdi, message                    ; First argument (format string) is the address of the message
    xor rax, rax                        ; Clear the rax register to indicate 0 floating point arguments

    ; Call printf
    call printf                         ; Call the printf function

    ; Exit the program
    mov rax, 60                         ; Syscall number for exit (60)
    xor rdi, rdi                        ; Status code 0
    syscall                             ; Make the syscall to exit

