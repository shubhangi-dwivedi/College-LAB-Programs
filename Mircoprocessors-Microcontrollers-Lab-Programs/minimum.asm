;find the minimum of N given numbers

jmp start

vec1 db 10,2,5,6

start:
lea si,vec1
mov cx,3
mov al,[si]

l1:
inc si
cmp al,[si]     ;10>2 2<5 2<6
jc ahead
mov al,[si]

ahead:
dec cx
jnz l1
mov bl,al       ;answer in bl register

hlt