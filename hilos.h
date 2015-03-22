  /*
     Nombre Archivo:
      	hilos.h
     Realizado por:
      	Erika Jeniffer Harker
      	David Calle
     Objetivo:
      	 Prototipo de las funciones que manipulan el log.
     Fecha Última Modificación:
      	Marzo 22 de 2015
    */
    #ifndef HILOS_H
    #define HILOS_H
    typedef struct{
  	int numero_tarea;
  	int numero_procesadores;
  	float tiempo_promedio_cpu;
  	int memoria_usada;
  	int status;
  	int numero_cola;
	} Proceso;

	typedef struct{
  	Proceso* procesos;
  	int inicio;
  	int fin;
  	float *respuesta;
	}Parametro;

    void* NumeroProcesosUnProcesador(Parametro *parametro) ; // prototipo de las funciones
    void* NumeroProcesosMasDe64(Parametro *parametro);
    void* NumeroProcesosUtilizaMasCPU(Parametro *parametro);
    void* ProcesosInteractivos(Parametro *parametro);
    void* EjecucionCancelada(Parametro *parametro);
    #include "hilos.c"
    #endif
