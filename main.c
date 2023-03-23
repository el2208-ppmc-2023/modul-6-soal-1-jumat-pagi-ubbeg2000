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
    int nomor;
    struct node* next;
};
  
// Pointer last pada circular linked list
struct node* last = NULL;

// Fungsi untuk menambahkan input pada akhir linked list
// Fungsi untuk menambahkan input pada akhir linked list
void insert(int data)
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
    // Baca Input: Lengkapi dengan fungsi insert yang telah disediakan
    

    // Melakukan proses berhitung dan eliminasi
}
