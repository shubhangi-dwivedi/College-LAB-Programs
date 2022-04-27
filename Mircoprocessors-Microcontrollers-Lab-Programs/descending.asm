;arrange given numbers in descending order

data segment
vec1 db 2,4,3,1,5 
ends

code segment
start:  mov dx,data
        mov ds,dx
        mov bx,4
l1:     mov cx,bx 
        lea si, vec1
l2:     mov al,[si]
        cmp al,[si+1]
        jnc xx
        xchg al,[si+1]
        xchg al,[si]

xx:     inc si
        loop l2
        dec bx
        jnz l1
        hlt
        ends
end start