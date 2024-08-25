
Instrucciones de Uso:

El programa se codifico en Windows 10, en VSCode, y el mismo usaba las extensiones:

- C/C++ Extension Pack
- C/C++ Compile Run
- CMake
- CMake Tools

Para usar el programa se recomienda correr el mismo desde VSCode usando las extensiones mencionadas, 
o en un compilador de C++ local al equipo desde donde se compila pues el mismo usa archivos para funcionar.

ATENTO a la ruta especificada en el MAIN del programa, puesto que dependiendo quien ejecute el programa, cambia la ubicacion de esta carpeta. Se recomienda modificar la ruta a conciencia para correr el programa, puesto que cambian nombre, orden y jerarquia de los ficheros. El programa viene con mi ruta
especifica por defecto:

Esta es la mia:
leerLotesArchivo("c:/Users/Valentino/Desktop/C++/TPSubastas/lotes.txt");

Esta seria la generica, que debera modificar para correr el programa:
leerLotesArchivo("c:/Users/SuNombredUsuario/Desktop/TPSubastas/lotes.txt");



Algoritmo Explicado: 

El programa hara una ronda de 4 subastas donde 4 personas podran pujar una detras de la otra o no. Al finalizar
una subasta se sigue con la proxima. El programa esta pensado interactivamente para que hayan tantos productos 
subastados como se requiera. Estos deben ser anexados al archivo de texto "lotes.txt" en el mismo formato que se
encuentran los demas.

Al finalizar la ejecucion del programa, veremos que se hace un resumen de como fue la subasta, y ademas se va a 
generar un archivo en la carpeta output, generada por VSCode, en la cual encontraremos el archivo "adjudicados.txt", 
donde se habran registrado los ganadores de la ultima subasta hecha, con su oferta ganadora y su nombre. 
