;logical operation (XOR, OR, AND, NOT) of 8-bit number

MOV AH,2H
MOV AL,01H
XOR AH,AL
MOV CH,02H
MOV CL,01H
AND CH,CL
MOV BH,02H
MOV BL,01H
OR BH,BL
MOV DX,02H
NOT DX