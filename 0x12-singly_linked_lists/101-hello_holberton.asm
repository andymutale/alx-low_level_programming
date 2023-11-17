section .data
   hello db 'Hello, Holberton', 0

section .text
   global main
   extern printf

main:
   ; Prepare arguments for printf
   mov rdi, hello ; First argument is the format string
   xor rax, rax ; Number of floating point parameters

   ; Call printf
   call printf

   ; Exit program
   mov eax, 0x60 ; System call number for exit
   xor edi, edi ; Exit code
   syscall
