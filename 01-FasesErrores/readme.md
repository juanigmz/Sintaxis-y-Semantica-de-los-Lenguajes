Sintaxis y Semántica de los Lenguajes

K2051

2018

138561-6

Gomez, Juan Ignacio


1. gcc hello2.c -E > hello2.i
	Preprocesamiento hello2.c -> Se reemplazó el "#include <stdio.h>" por el contenido de su archivo
		Se reemplaza el comentario "/*medio*/" por un espacio en blanco

2. type hello2.i
	Visualizar el contenido de hello2.i

3. gcc hello3.c -E > hello3.i
	Preprocesamiento hello3.c

4. type hello 3.i
	visualizar lo escrito en hello3.i

5. gcc hello3.i -S
	Genera el archivo hello3.s. Describe una advertencia y un error:
		La advertencia menciona que se esta declarando la función prontf y pregunta si la que se quiso utilizar es printf.
		El error se genera debido a que la función main no tiene declarado el fin de función ("}")

6. type hello3.s
	visualizar el contenido de hello3.s
	
7. gcc hello4.c -S
	genera el archivo hello4.s (compilado de hello4.c). Sigue advirtiendo sobre prontf
	
8. type hello4.s
	Se ve que el archivo está escrito en assembler.
	
9. gcc hello4.s -c
	ensambla el hello4.s, generando el hello4.o

10. gcc hello4.o -o hello4.exe
	Surge un error al no estar definida la función prontf, la función devuelve 1 

11. gcc hello5.c -o hello5.exe
	Genera el programa hello5.exe a partir del código de hello5.c
	
12. hello5.exe
	El programa funciona pero no muestra el valor 42 (en éste caso mostró "1971056")
	
13. gcc hello6.c -o hello6.exe
	Genera el ejecutable hello6.exe
	
14. gcc hello7.c -o hello7.exe
	Genera el ejecutable hello7.exe, pero muestra una advertencia de que incluya "<stdio.h>" o escriba una declaración del printf
	
15. hello7.exe
	a pesar de que la función printf no se encuentra declarada, el programa funciona debido a que el vinculador la encuentra en la biblioteca por default (stdio.h) 



