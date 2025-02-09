#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct Node{
    char naziv[100];
    char autor[100];
    int brStranica;
    float ocena;
    struct Node* left;
    struct Node* right;
}Node;

Node* createNode(char* naziv, char* autor, int brStranica, float ocena){
    Node* newNode = malloc(sizeof(Node));
    newNode->left = NULL;
    newNode->right = NULL;
    strcpy(newNode->naziv, naziv);
    strcpy(newNode->autor, autor);
    newNode->brStranica = brStranica;
    newNode->ocena = ocena;
    return newNode;
}

Node* insertNode(Node* root, Node* newNode){

    if(root == NULL)
        return newNode;

    if(strcmp(root->naziv, newNode->naziv) > 0){
        root->left = insertNode(root->left, newNode);
    } else {
        root->right = insertNode(root->right, newNode);
    }
    return root;
}

void printTree(Node* root){

    if(root == NULL)
        return;

    printTree(root->left);
    printf("%s, %s, %d, %.1f\n", root->naziv, root->autor, root->brStranica, root->ocena);
    printTree(root->right);
    return;
}

void maxStranica(Node* root, Node** max){
    if(root == NULL)
        return;

    if(root->brStranica > (*max)->brStranica){
        (*max) = root;
    }
    maxStranica(root->left, max);
    maxStranica(root->right, max);
    return;
}

void minStranica(Node* root, Node** min){
    if(root == NULL)
        return;

    if(root->brStranica < (*min)->brStranica){
        *min = root;
    }
    minStranica(root->left, min);
    minStranica(root->right, min);
    return;
}

Node* sortByRating(Node* root, Node* newNode){
    if(root == NULL)
        return newNode;

    if(root->ocena < newNode->ocena){
        root->left = sortByRating(root->left, newNode);
    } else {
        root->right = sortByRating(root->right, newNode);
    }
    return root;
}

void newTree(Node* oldRoot, Node** newRoot, float ocena){

    if(oldRoot == NULL)
        return;

    if(oldRoot->ocena > ocena){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->ocena = oldRoot->ocena;
        newNode->brStranica = oldRoot->brStranica;
        strcpy(newNode->naziv, oldRoot->naziv);
        strcpy(newNode->autor, oldRoot->autor);
        newNode->left = NULL;
        newNode->right = NULL;

        *newRoot = sortByRating(*newRoot, newNode);
    }

    newTree(oldRoot->left, newRoot, ocena);
    newTree(oldRoot->right, newRoot, ocena);
}

Node* deleteTree(Node* root){

    if(root != NULL){
        deleteTree(root->left);
        deleteTree(root->right);
        free(root);
    }
    return NULL;
}

int main(){

    Node* root = NULL;
    char* token;
    Node* rootSort = NULL;

    int option;
    while(1){
        printf("Odaberite opciju:\n");
        printf("1)Ucitavanje podataka\n2)Ispis svih knjiga\n3)ispis najtanje i najdeblje knjige\n4)Ispis o njigama sa korisnickom ocenom iznad odredjene vrednost\n5)Izlaz i brisanje stabla\n");
        scanf("%d", &option);
        //getchar();

        if(option == 1){
            FILE* fp = fopen("knjige.txt", "r");
            if(fp == NULL){
                printf("greska pri otvaranju fajla");
                return 0;
            }

            char line[1000];
            while(fgets(line, 1000, fp) != NULL){
                char naziv[100];
                char autor[100];
                int brStranica;
                float ocena;
                line[strlen(line)-1] = 0;

                token = strtok(line, ",");
                strcpy(naziv, token);
                token = strtok(NULL, ",");
                strcpy(autor, token);
                token = strtok(NULL, ",");
                brStranica = atoi(token);
                token = strtok(NULL, ",");
                ocena = atof(token);
                root = insertNode(root, createNode(naziv, autor, brStranica, ocena));
            }
            printf("Uspesno ucitan fajl\n");
        } else if(option == 2){
            printf("Sortirano\n\n");
            printTree(root);
        } else if(option == 3){
            Node* maxNode = root;
            Node* minNode = root;
            maxStranica(root, &maxNode);
            minStranica(root, &minNode);
            printf("Knjiga sa najvise stranica:%s, %s, %d, %.1f\n", maxNode->naziv, maxNode->autor, maxNode->brStranica, maxNode->ocena);
            printf("Knjiga sa najmanje stranica:%s, %s, %d, %.1f\n", minNode->naziv, minNode->autor, minNode->brStranica, minNode->ocena);
        } else if(option == 4){

            float ocena;
            scanf("%f", &ocena);
            newTree(root, &rootSort, ocena);
            printTree(rootSort);

        } else if(option == 5){
            root = deleteTree(root);
            break;
        }
    }
    return 0;
}
