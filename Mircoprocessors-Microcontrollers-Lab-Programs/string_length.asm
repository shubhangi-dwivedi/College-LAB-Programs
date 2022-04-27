name "length number"

; this example calculates the sum of a vector with
; another vector and saves result in third vector.

; you can see the result if you click the "vars" button.
; set elements for vec1, vec2 and vec3 to 4 and show as "signed".

org 100h

jmp start

 STR1 DB "Urvashi Shukla #"
 LEN DB 0


start:

 
 MOV SI , OFFSET STR1
  
 UP:  MOV AL , [SI]
      CMP AL , '#'
      JZ DN          ; IF DESTINATION == SOURCE THEN ZF = 1
 
      INC LEN
      INC SI  
      LOOP UP
 
DN: MOV DL , LEN

     

hlt



