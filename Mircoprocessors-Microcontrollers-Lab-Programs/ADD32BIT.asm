#fasm#
;32bits addition

MOV AX,0002
MOV BX,0001
ADD AX,BX
MOV DX,AX
MOV AX,0000H
MOV CX,0001
MOV AH,CH
ADC AH,CL