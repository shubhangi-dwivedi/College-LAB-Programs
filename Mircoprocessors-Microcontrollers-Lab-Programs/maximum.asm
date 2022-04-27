;find the maximum of N given numbers

jmp start

vec1 db 1,2,5,6

start:
lea si,vec1
mov cx,3
mov al,[si]

l2:
inc si
cmp al,[si]
jnc l1
mov al,[si]

l1:
dec cx
jnz l2
mov bl,al

hlt