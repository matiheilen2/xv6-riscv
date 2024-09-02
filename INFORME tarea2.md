
# Funcionamiento de las llamadas al sistema

- `sys_getppid()` devuelve el identificador del proceso padre del proceso que hace la llamada.
- `sys_getancestor()` devuelve el id del ancestro del proceso que hace la llamada. Si n = 0, devuelve el id del mismo proceso; Si n = 1, retorna el id del proceso padre; si n = 2, retorna el id del abuelo del proceso. En caso de que no exista el ancestro solicitado o el valor de n sea inválido, retorna -1.


# Explicación de las modificaciones realizadas

- En *syscall.c* se agregaron los uint64 para sys_getppid(void) y sys_getancestor(void), en conjunto con agregar las llamadas al syscall. Tambien modifique los entry en *usys.pl* . En user.h se agregar los int getppid(void) y int getancestor(int). En sysproc.c se agrega la lógica de programación de como va a funcionar la llamada de cada función.  Se modifica el archivo de yosoytupadre y se incorpora a makefile


# Dificultades encontradas:

- Tuve hartos errores dado que al seguir el paso a paso de webc, por algún motivo no corría todo correctamente como se sugería en la clase. Dado que el kernel tiene tantos archivos que deben ser modificados con cosas diferentes, es facil equivocarse y no lograr seguir el error hasta su origen. Además, modifique archivos que al parecer no debían ser modificados, en un intento por lograr que todo funcione correctamente. Finalmente luego de mucho troubleshooting todo funciono correctamente.
- Las formas de resolver estas dificultades fueron mirando los ppt para entender los pasos, preguntando a compañeros como lo hicieron ellos para ver si estamos haciendo el mismo patrón y utilizando chatgpt para el troubleshooting de los errores.
