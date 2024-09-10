#include<stdio.h>
#include<stdlib.h>

struct element {
    char id;
    struct element *next;
};

struct element *addAsFirst (struct element *list, char id){
    if(!list){
        list = malloc(sizeof(struct element));
        list->id = id;
        list->next = NULL;
    }
    
    struct element *aux;
    aux = malloc(sizeof(struct element));
    list->id = id;
    list->next = list;
    return aux;
}

void showList (struct element *list){
    
}

int main(){
    struct element *list;
    list = NULL;
    //int id;
    printf("\nWhat do u wanna do? ");
    list = addAsFirst(list, 'A');
    showList(list);
    //scanf("%d", id);
}