#include <stdio.h>
#define N 20
#define MAX 25;
// media de un número jiji ññ
/*
int TiposDeDatos() {
    int entero = 0;
    short pequenio = 0;
    long long largo = 0;
    float flotante = 0;
    double RealLargo = 0;
    long double RealMasLargo = 0;
    char caracter = 0;
    printf("%i\n", sizeof( entero));
    printf("%i\n", sizeof( pequenio));
    printf("%i\n", sizeof(largo));
    printf("%i\n", sizeof(flotante));
    printf("%i\n", sizeof(RealLargo));
    printf("%i\n", sizeof(RealMasLargo));
    printf("%i\n", sizeof(caracter));
    return 0;
}

int Caminante(){
    float zancada, pasos;
    printf("");
    scanf("%f", &zancada);
    printf("");
    scanf("%f", &pasos);
    printf("%f", zancada*pasos/1000);
    return 0;

}

int juez(){
    float zancada, pasos;
    printf("");
    scanf("%f", &zancada);
    printf("");
    scanf("%f", &pasos);
    printf("%f", zancada*pasos/1000);
    return 0;
}
*/
int comprobar(){
    char a;
    printf("Dame una letra a comprobar si es 'a'  o 'A'\n");
    scanf("%c", &a);
    if(a == 'a' || a  == 'A'){
        printf("ACIERTO\n");

    }
    else
        printf("FALLO\n");
    return 0;

}
int comprobar0(){
    char a;
    char x;
    printf("Dame una letra a comprobar si es 'a'  o 'A'\n");
    scanf("%c", &a);
    switch (a) {
        case 'a':
        case 'A':
            printf("Me diste a o A\n");
            break;
        default:
            printf("no me diste a o A\n");
    }
    return 0;
}
int foor(){
    int x = 0;
    for (int i = 0; i < 19; i++) {
        printf("hola %i", x);
    }
}

int dowhile(){
    int a;
    do {
        printf("Dame un numero a comprobar si es 22\n");
        scanf("%i", &a);
    } while (a != 22);
}

/*PUNTEROS:
 * Es una variable que guarda una dirección de memoria
 * los punteros no se inicializan
 * los punteros se declaran con '*'
 * int *pa; // es un puntero a int
 * pa = &a;
 * pa --> puntero a entero
 * pb --> puntero a
 * char *pc; --> puntero a caracter
 *char *pc = NULL; --> declarar puntero vacío, para saber si se ha tocado o no
 *
 * Los arrays son PUNTEROS
 * Los parámetros en C se COPIAN
 *
 *Las variables de una función son propias de las funciones, no se pueden sacar.
 */


int puntero(){
    int a = 5;
    int *p = NULL;
    p = &a;
    *p = *p + 1;
    printf("Valor de a: %i\n", a);
    return 0;
}
int vector(){
    int vector[N];
    for (int i = 0; i < N; ++i) {
        vector[i] = i;

    }
    for (int i = 0; i < N; ++i) {
        printf("%i\t", vector[i]);
    }
}
/*
 * MATRICES
 * para definir una matriz:
 * int matriz[4][3]
 * (matrix 4x3)
 */

#define FILA 4
#define COLS 3

int inversa(){
    int zirtam[FILA][COLS];
    int matriz[FILA][COLS];
    int cont = 1;
    for (int i = 0; i < FILA; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matriz[i][j] = cont;
            cont ++;
        }
    }
    /*for (int i = 0; i < FILA; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%i\t", matriz[i][j]);
        }printf("\n");

    }
     */

    for (int i = 4; i <= FILA; --i) {
        for (int j = 3; j <= COLS; --j) {
            matriz[i][j] = zirtam[i][j];

            cont ++;
        }
    }
    for (int i = 0; i < FILA; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%i\t", zirtam[i][j]);
        }printf("\n");
    }
}

/*
 * Cadenas de caracteres:
 * NNo hay tipo String
 * Array de caracteres "Especiales" que deben terminar por \o --> fin de cadena
 *
 *
 * strcmp(palabra1, palabra2) si la primera es mayor alfabéticamente, -1; iguales 0; primera menor 1
 * gets(palabra); --> recoge caracteres hasta el salto de linea
 *
 */


#include <string.h>
#define MAX 1000

int ma(){
    char frase[MAX];
    int palabras = 0;
    int i = 0;
    int espacio = 1; //espacio == True

    gets(frase);
    while(frase[i] != '\0'){
        if (frase[i] != ' ' && espacio){
            palabras++;
            espacio = 0;
        }else{
            if (frase[i] == ' ') espacio = 1;

        }
        i++;
    }
    printf("%i", palabras);
}
/*
 * MEMORIA DINÁMICA:
 * FUNCIONES:
 * #include <stdlib.h>
 * malloc()
 * calloc()
 * free()
 * realloc()
 *
 */


//#include <stdio.h>
#include <math.h>

int fortnite() {//no se que hace este programa, creo que es un intento de FORTNITE
    int num_numeros, i;
    float num, log2;
    scanf("%d", &num_numeros);
    int numeros[num_numeros];
    for (i = 0; i < num_numeros; i++) {
        scanf("%f", &num);
        log2 = log2f(num);
        numeros[i] = log2;
    }
    for (i = 0; i < num_numeros; i++) {
        printf("%d ", (int) round(numeros[i]));
    }
    return 0;
}
/*
 * Tipos enumerados: Definidos por el usuario
 * Establecen los valores permitidos
 * Son constantes numéricas
 * Se establecen de ámbito global para que cualquier función lo pueda llamar
 */
int estados(){
    enum tEstados {
        SOLIDO = 1,
        LIQUIDO = 3,
        GASEOSO = 6
    };
    enum tEstados estado;
    estado = SOLIDO;
    estado++;
    printf("El estado es %i", estado);
    return 0;
}

enum result{
    DERROTA = 0,
    EMPATE = 1,
    VICTORIA = 3
};

int muestraresultado(enum result varResult){
    switch (varResult){
        case DERROTA:
            printf("Derrota!!");
            break;
        case EMPATE:
            printf("Empate!!");
            break;
        case VICTORIA:
            printf("Victoria!!");
            break;
        default:
            printf("Resultado Incorrecto!!");
    }
    printf("\nEl resultado ha sumado %i puntos", varResult);
}
int result(){
    enum result res1 = EMPATE;
    muestraresultado(res1);
}

/*
 * Variables struct se consideran
 */

struct persona{
    char nombre[MAX];
    char apell[MAX];
    short int edad;
    int notas[MAX];
};


int persona(){
    struct persona per1;
    per1.edad = 25;
    strcpy(per1.nombre, "Vinicius");
    printf("Edad de %s: %i",per1.nombre, per1.edad);

}

void muestrapersona(char *etiqueta, struct persona per){
    printf("Nombre de %s: %s", etiqueta, per.nombre);
    printf("Apellido de %s: %s", etiqueta, per.apell);
    printf("Edad de %s: %s", etiqueta, per.edad);
    for (int i = 0; i < MAX; ++i) {
        printf("%i", per.notas[i]);
    }
}


#include <stdio.h>
#include <stdlib.h>
#define N 5
enum TipoCon{
    FAVORITO = 1,
    CONOCIDO = 2,
    TRABAJO = 3
};
typedef struct {
    char nombre[MAX];
    char apell[MAX];
    char telef[10];
    short int edad;
    enum TipoCon;
}person;
/*
int nuevapers(int agenda[N], int num){
    printf("Nombre:\n");
    scanf("%s", &agenda[num].nombre);
    printf("Apellidos:\n");
    scanf("%s", &agenda[num].apell);
    printf("Telefono:\n");
    scanf("%c", &agenda[num].telef);
    printf("Edad:\n");
    scanf("%i", &agenda[num].edad);

}
int main() {
    person agenda[N];

    int opcion;
    int seguir = 1;
    do{
        printf("1 - Listado de personas\n"
               "2 - Nueva persona\n"
               "3 - Borrar persona\n"
               "0 - Salir\n\n"
               "Elija opci%cn:", 162);
        scanf("%i", &opcion);
        switch (opcion) {
            case 1:



        }
        scanf("%i", &seguir);
    }
    while (seguir == 1);
    return 0;
}
*/

int ficheros(){
    char linea[MAX];
    FILE *fichero = fopen("texto2.txt", "r");
    if (fichero == NULL) {
        perror("Error en la lectura: ");
        return -1;
    }
    printf("fichero abierto, OK\n");
    while(!feof(fichero)){
        fgets(linea, MAX, fichero);
        printf("%s", linea);
    }

    if (fclose(fichero) != 0) {
        printf("error en clausura de fichero");
    }
}
/*
 * fopen
 * fclose
 * feof
 * fprintf (escritura) fputs / fputc
 * fscanf (lectura) fgets / fgetc
 * fseek(f, sizeof(int), SEEK_CUR);
 * SEEK_CUR, SEEK_END, SEEK_SET
 */

#include <stdio.h>
#define N 10
#define FICHERO "prueba.dat"

int main(){
    FILE *f = fopen("prueba.dat", "wb"); // Si no le pones .dat, y usas .txt no te pregunta con que abrirlo
    if (f == NULL) {
        perror("Problemas en apertura");
        return -1;
    }

    for (int i = 0; i < N; ++i) {
        fwrite(&i, sizeof(int), 1,f);
    }

    if (fclose(f) != 0){
        perror("Error de clausura");
        return 0;
    }

    f = fopen(FICHERO, "rb");
    if (f == NULL) {
        perror("Problemas en el paraiso");
        return -1;
    }

    // fseek(f, 3 * sizeof(int), SEEK_CUR); // O el SEEK_CURL tambien vale =D
    // Se salta 3 elementos --> (0, 1, 2) 3 4 5 6 7 8 9

    int x;
    while (!feof(f)){
        fseek(f, 1 * sizeof(int), SEEK_CUR);
        fread(&x, sizeof(int), 1, f );
        if (!feof(f)) printf("%i\t", x);
    }

    if (fclose(f) != 0) {
        perror("Problemas de nuevo para cerrar");
    }
}