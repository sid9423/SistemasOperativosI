# SistemasOperativosI
*Sidney Ricardo Garcia Rodriguez*

*ITIC's - 10° Semestre*





______________________________________________________________________________


# Examen Diagnostico

### ¿Qué es un sistema operativo?

Conjunto de ordenes que permiten realizar las funciones de una computadora.

### ¿Qué sistemas operativos conoce?

* Windows(ME,XP,Vista,2007,2008,10, Server, Phone).

* MacOS.

* ChromeOS.

* Linux.

* iOS.

* Android.

* BlackBerryOS.

### ¿Qué diferencia entre estos sistemas operativos identifica?

Algunos de estos SO, son libres, otros cuentan con licencias, ademas MacOS tiende a ser restringido hacia sus propios productos.

### ¿Que diferencia hay entre memoria fisica y logica?

La memoria fisica es aquella que se encuentra fisicamente en la computadora, la memoria logica es aquella que crean los procesos.

### ¿Que tipos de sistemas de archivos conoce?

* NTFS.

* Fat32.

* exFat.

### ¿Qué es la criptografia?

Es la forma de poder esconder alguna clave, mensaje, etc. De forma que no sea legible.

_______________________________________________________________________________________

# Temario

 **Unidad** | **Temas** | **Subtemas**
 :----------: | --------- | -----------
  1 | Introduccion a los sistemas operativos | * 1.1 Definicion y concepto * 1.2 Funciones y caracteristicas * 1.3 Evolucion Historica * 1.4 Clacificacion * 1.5 Estructura (niveles o estratos) * 1.6 Nucleo * 1.6.1 Interrupciones (FUH) * 1.6.2 Despachador (Scheduler) * 1.6.3 Primitivas de comunicacion (IPC) 
  2 | Administracion de procesos y del procesador | * 2.1 Concepto de proceso * 2.2 Estados y transciciones de los procesos * 2.3 Procesos ligeros (hilos o hebras) * 2.4 Concurrencia y secuencialidad * 2.4.1 Exclusión mutua de secciones críticas. * 2.4.2 Sincronización de procesos en S.C. * 2.4.2.1 Mecanismo de semáforos. * 2.4.2.2 Mecanismo de monitores. * 2.4.3 Interbloqueo (DeadLock). * 2.4.3.1 Prevención. * 2.4.3.2 Detección. * 2.4.3.3 Recuperación. * 2.5 Niveles objetivos y criterios planificación. * 2.6 Técnicas de administración del planificador. * 2.6.1 FIFO. * 2.6.2 SJF. * 2.6.3 RR. * 2.6.4 Queves multi-level. * 2.6.5 Multi-level feedback queves.
  3 | Administracion de memoria                   | *3.1 Política y filosofía. * 3.2 Memoria real. * 3.2.1 Administración de almacenamiento. * 3.2.2 Jerarquía. * 3.2.3 Estrategia de administración de memoria. * 3.2.4 Asignación contigua v.s. no contigua. * 3.2.5 Multiprogramación de partición fija, partición variable, con intercambio de almacenamiento. * 3.3 Organización de memoria virtual. * 3.3.1 Evaluación de las organizaciones de almacenamiento. * 3.3.2 Paginación. * 3.3.3 Segmentación. * 3.3.4 Sistemas de paginación segmentación. * 3.4 Administración de memoria virtual. * 3.4.1 Estrategias de administración. * 3.4.2 Técnicas de reemplazo de páginas. * 3.4.3 Paginación por demanda. * 3.4.4 Paginación anticipada. * 3.4.5 Liberación de página. * 3.4.6 Tamaño de página.
  4 | Administracion de entrada / salida          | * 4.1 Dispositivos y manejadores de dispositivos (device drivers). * 4.2 Mecanismos y funciones de los manejadores de dispositivos (device drivers). * 4.3 Estructuras de datos para manejo de dispositivos. * 4.4 Operaciones de entrada / salida.
  5 | Sistema de archivos                         | * 5.1 Concepto. * 5.2 Noción de archivo real y virtual. * 5.3 Componentes de un sistema de archivos. * 5.4 Organización lógica y física. * 5.5 Mecanismos de acceso a los archivos. * 5.6 Manejo de espacio en memoria secundaria. * 5.7 Modelo jerárquico. * 5.8 Mecanismo de recuperación en caso de falla.
  6 | Proteccion y seguridad                      | * 6.1 Concepto y objetivos de protección. * 6.2 Funciones del sistema de protección. * 6.3 Implantación de matrices de acceso. * 6.4 Protección basada en el lenguaje. * 6.5 Concepto de seguridad. * 6.6 Clasificaciones de la seguridad. * 6.7 Cifrado.

_________________________________________________________________________________________

# Descripcion de las Tareas

# Mapa mental

**Mapa mental de las partes de una computadora**

Mapa mental donde se muestran las partes fundamentales de una computadora.

# Guia del Examen

**Guia Examen Unidad I**

Guia en la cual se contienen 10 preguntas relacionadas con la primera unidad del Temario de Sistemas Operativos.
__________________________________________________________________________________________

# Unidad II
**Programa en c holamundo.c**

Tipica linea que se usa cuando como ejemplo cuando se comienza a programar en un lenguaje.

**Programa en c calculadorabasica.c**

Calculadora sencilla con funciones basicas.

**Programa en c arreglo.c**

Muestra la impresion de un arreglo de enteros no definidos.
__________________________________________________________________________________________

# Unidad III

**Investigación Administracion de memoria.**

___________________________________________________________________________________________

# Glosario

**Asignacion de ficheros** 

**Asignacion de ficheros indexada** Cuenta con todos los punteros juntos dentro del bloque de indices. Tiene una vista logica.

**Asignacion de ficheros contigua** Cada archivo ocupa un conjunto de bloques contiguos en el disco, ademas exista fragmentacion externa y se asigna un conjunto contiguo de bloques de creacion.

**Asignacion de ficheros encadenada** Cada archivo es una lista enlazada de bloques de disco, estos bloques pueden estar dispertos en cualquier parte del disco, no exite un acceso aleatorio, no hay fragmentacion externa y no hay desperdicio de espacio.

**Base de Datos** Conjunto de datos que pertenecen a un mismo contexto, almacenados sistematicamente para su posterior uso.

**Bloque** Agrupacion de sectores que realiza el sistema operativo, denominado cluster en Windows. El acceso al disco que realiza el sistema se hace en esta unidad.

**Campo** Espacio de almacenamiento para un dato en particular.

**Campo Clave** En archivos secuenciales, los registros se almacenan por posicion, cada registro tiene el mismo tamaño y el mismo numero de campos. El primero de cada registro es leido como el campo clave.

**Carga** Conjunto de datos transmitidos (mensaje enviado).

**Carga absoluta** Es un proceso que consta de especificar la direccion absoluta del programa el cual se cargara primero estando la maquina inactiva.

**Compactacion** Agrupar los datos que tine uno o varios ficheros para ahorrar espacio de almacenamiento.

**Comparticion** Poner a disposicion el contenido de directorios a traves de la red.

**Directorio** Contenedor virtual en el que se almacenan una agrupacion de archivos informaticos y subdirectorios.

**Directorio de trabajo o actual** Son todos aquellos nombres de rutas que no empiezan con el directorio de raiz.

**Direccion fisica** Tambien llamada direccion real o binaria, es una direccion en la memoria que es representada por un numero binario, para permitir al bus de datos acceder a la celda de almacenamiento de la red principal de memoria o en un registro de dispositivo de E/S mapeada en memoria.

**Direccion logica** Direccion de memoria que permite ejecutar codigo, almacenar y recibir datos.

**Direccion relativa** Identificador de la posicion de una ubicacion de memoria en una computadora relativa a la direccion base.

**Editor de enlaces** Establece la combinacion de programas, ademas crea una imagen de carga a memoria.

**Enlazador** Toma los objetos generados en los primeros pasos de la compilacion, la biblioteca (informacion de los recursos necesarios), quita recursos que no se necesitan, enlaza el codigo con su biblioteca y genera un fichero ejecutable.

**Fichero** Conjunto de informacion relacionada, grabada en el sistema de almacenamiento secundario, a la que se hace referencia por un nombre.

**Fichero de acceso directo** Es un concepto usado en Sistemas Operativos Windows para hacer referencia a un fichero u objeto cuyo el mismo, contiene instrucciones que redirigen a otro fichero del sistema de ficheros o a un lugar de la red.

**Fichero indexado** Tiene un indice el cual permite llegar rapidamente al registro deseado, se ejecuta a traves de la direccion de punteros donde estan ubicados en los registros deseados.

**Fichero secuencial** Es la forma mas comun de la estructura de archivos, los registros estan almacenados por posicion y cada registro cuenta con el mismo tamaño y numero de campos.

**Fichero secuencial indexado** Los registros se organizan en una secuencia basada en un campo clave presentando dos caracteristicas, un indice de archivo para los accessos aleatorios y un archivo de desbordamiento.

**Fragmentacion externa** 

**Fragmentacion interna** Perdida de espacio en disco, esto pasa por que el tamaño determinado de un archivo es inferior al del cluster.

**Gestion de memoria** Administracion entre el rendimiento y la cantidad. Siempre se busca el mayor espacio disponible en la memoria.

**Metodo de acceso** Son formas de acceder a un archivo. Existen 2 tipos Acceso secuencial y directo.

**Marca** Ayudan al browser como formatear el texto o que partes de texto deben de ser.

**Nodo** Es una estructura de datos propia de los sitemas de archivos, tradicionalmente empleados en sistemas operativos UNIX.

**Nombre de fichero** Es necesario dar un nombre a los ficheros para que el usuario y los programas puedan identificarlos y asi acceder a ellos. 

**Organizacion logica** Organizacion de archivos en jerarquias (carpetas, directorios o catalogos).

**Organizacion fisica** Dependiendo del dispositivo de almacenamiento. Los registros son fijos o variables y se organizan de varias formas para construir archivos fisicos.

**Pagina** En los sistemas de memoria virtual, unidad de almacenamiento de datos que se lleva a la RAM, normalmente desde un disco duro, cuando un elemento solicitado de información no se encuentra allí.

**Particionamiento** Divisiones de una unidad fisica de almacenamiento de datos.

**Particionamiento dinamico** Ocupa una porcion de la particion extendida, formateada con un tipo de sistemas de archivos, asignandole una unidad para que el sistema operativo reconozca las particiones logicas.

**Pila** Una lista apilada donde los elementos se colocan uno sobre otro y solo es accesible de manera inmediata el elemento que esta en la cima de la pila.

**Proteccion** Cuidado de memoria limite asignada para poder trabajar en las aplicaciones.

**Registro** Es una memoria de alta velocidad y poca capacidad integrada al microprocesador que permite guardar transitoriamente y acceder a valores muy usados, generalmente en operaciones matematicas.

**Reubicacion** Define el traspaso de los datos relacionados, con un mismo objeto de un espacio a otro de memoria.

**Ruta del nombre** Señala la localizacion exacta de un archivo o directorio mediante una cadena de caracteres concreta.

**Segmentacion** Identifica las unidades lógicas de los programas y datos para facilitar el control de acceso y participación

**Sistema de gestion de ficheros** Administracion de archivos que permite a los usuarios tengan acceso directo con los archivos y tengan control de ellos.

**Tabla de asignacion de disco** 

**Tabla de asignacion de ficheros** FAT lleva un seguimiento de la ubicacion de los archivos almacenados en un disco duro.

**Tabla de bits** 

**RDIM:** Registro de direccion de memoria.

**RDAM:** Registro de datos de memoria. 

______________________________________________________________________________________________