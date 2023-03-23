/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>
  
// Deklarasi node
struct node {
    int info;
    struct node* next;
};
  
// Pointer last dan node pada linked list
struct node* last = NULL;

// Fungsi untuk menambahkan input pada akhir linked list
void insertAtLast(int data)
{
    // Initialize a new node
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
  
    // If the new node is the only node in the list
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
  
    // Else last node contains the
    // reference of the new node and
    // new node contains the reference
    // of the previous first node
    else {
        temp->info = data;
        temp->next = last->next;
  
        // last node now has reference
        // of the new node temp
        last->next = temp;
        last = temp;
    }
}

int main()
{
    // Baca input
    int N;
    scanf("%d", &N);

    for(int i=0;i<N;i++) {
        int input;
        scanf("%d",&input);
        insertAtLast(input);
    }
    
    // Deletion
    struct node* previous;

    int nextKill = last->next->info;

    for(int i=0;i<N-1;i++) {
        for(int j=0;j<nextKill;j++) {
            previous=last;
            last=last->next;
        }
        // Change nextKill Variable
        nextKill=last->info;

        // Delete current last
        previous->next = last->next;
        free(last);
        last = previous;
    }

    // Print list
    printf("Pemenang: %d\n",last->info);
  
    return 0;
}
