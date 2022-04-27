;Program to transfer the content of one memory location to another memory location.
     
org 100h

jmp start

vec1 db 3,7,1,7
vec2 db ?,?,?,?

start:

lea si, vec1
lea bx, vec2


mov cx,5

   
l1: mov al,[si] ;al=3 ; 7;1
    mov [bx],al  
    inc si 
    inc bx
    dec cx
    jnz l1
    hlt
    

   
   