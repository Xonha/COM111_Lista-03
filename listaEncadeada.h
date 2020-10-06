// TAD para Lista Dinâmica Encadeada baseado no livro "Estrutura de dados descomplicada em lingugem C (André Backes)"

#ifndef _LISTA_ENCADEADA
#define _LISTA_ENCADEADA

//typedef struct elemento* Lista;
typedef struct elemento Elemento;
typedef struct aluno Aluno;
typedef Elemento *Lista;

int criar_dado(int *dado);
Aluno *criar_aluno(void);

// funções para alocar e desalocar memória
Lista *criar_lista(void);
int liberar_lista(Lista *li);

// funções para obter informações da lista
int tamanho_lista(Lista *li);
int lista_vazia(Lista *li);

// funções para inserção de elementos da lista
int inserir_lista_inicio(Lista *li, Aluno dado);
int inserir_lista_final(Lista *li, Aluno al);
int inserir_lista_ordenada(Lista *li, Aluno al);

// funções para remoção de elementos da lista
int remover_lista_inicio(Lista *li);
int remover_lista_final(Lista *li);
int remover_lista_matricula(Lista *li, Aluno al);

// funções para buscar elementos na lista
int buscar_lista_posicao(Lista *li, int pos, Aluno *al);
int buscar_lista_dado(Lista *li, Aluno al, int *pos);

int imprimir_lista(Lista *li);

#endif
