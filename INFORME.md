PASOS PARA INSTALAR XV6:

1. Instalar homebrew y git, en mi caso, ya los tenia instalados previamente.
2. Instalar qemu con brew. (brew install qemu)
3. Hacer fork del repo que estaba en la presentacion de la clase 2.
4. Instalar las dependencias y el toolchain necesario indicado en el directorio. (brew tap riscv/riscv) (brew install riscv-tools)
5. clonar el repositorio de manera local, el cual le hicimos fork en github.
6. hacer [make qemu]() en el terminal
7. verificar instalación con los comandos indicados en el ppt. (ls) ($echo "Hola mundo") (cat README)
8. Sacar pantallazo y incluirlo en el repositorio

PROBLEMAS ENCONTRADOS:

- Estoy usando macOS, por lo que no tuve mayores problemas, dado que la instalación es bastante directa en este sistema operativo. Sin embargo, para acceder a las librerias, tuve ciertos problemas de compatibilidad dado que tengo diversas versiones de librerias pasadas que tal vez hacen conflicto con las librerias usadas en este ramo. Luego de ciertos intentos para instalar usando diversos comandos con ayuda de ChatGPT para el troubleshooting, logre instalar las librerias sin problema al modificar un par de PATHs.

CONFIRMACION:

- La confirmacion del sistema funcionando esta en la captura de pantalla llamada "xv6-funcionando.png", la cual esta ubicada en este mismo directorio.
