;Program to find out ODD numbers in a series.

name "odd number arrays"      
org 100h

jmp start

vec1 db 3,4,9,14
vec2 db ?,?,?,?

start:

lea si, vec1  ; 
lea di, vec2   ;

mov cx,5  ;
mov bl,02h 

   
l2: mov al,[si] ; al=3
    div bl ; 3/2
    cmp ah,00h    ;r==0
    jnz l1      ; 
    mov [di],0 ; even=0
    

l3: inc di 
    inc si
    dec cx  ;2  ;1
    jnz l2
    hlt
   
   
l1: mov [di],1   ;odd=1
    loop l3
   
   