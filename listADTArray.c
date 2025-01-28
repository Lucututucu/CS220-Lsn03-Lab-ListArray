#include <stdio.h>
#include "listADTArray.h"


ListADTArray createList() {
	ListADTArray L;
	L.size = 0;
	return L;
}

int append(ListADTArray *L, int X) {
	//Check if list is full
	if (L->size == MAX) {
		return 0;
	}

	//Add new item to end
	L->items[L->size] = X;
	L->size += 1;
	return 1;
}

int prepend(ListADTArray *L, int X) {
	//Check if list is full
	if (L->size == MAX) {
		return 0;
	}

	//Move all elements over
	int i = 0;
	for (i = L->size; i > 0; i--) {
		L->items[i] = L->items[i-1];
	}

	//Add new element to start
	L->items[0] = X;
	L->size += 1;
	return 1;
}

int isEmpty(ListADTArray L) {
	return L.size == 0;
}

int getLength(ListADTArray L) {
	return 0;
}

int insertAfter(ListADTArray* L, int W, int X) {
	return 0;
}

int removeItem(ListADTArray* L, int X) {
	int removed = 0;
	for (int i = 0; i < L->size; i++) {
		if (removed && (i < L->size - 1)) {
			 L->items[i] = L->items[i + 1];
		}
		if (L->items[i] == X) {
			removed = 1;
		}
	}
	return removed;
}

int linearSearch(ListADTArray L, int X) {
	return 0;
}

int binarySearch(ListADTArray L, int X) {
	return 0;
}

void print(ListADTArray L) {
	printf("List Contents: ");
	for (int i = 0; i < L.size; i++)
		printf("%d ", L.items[i]);
	printf("\n");
}

void printReverse(ListADTArray L) {
	printf("List Contents (In Reverse): ");
	for (int i = L.size-1; i >=0; i--)
		printf("%d ", L.items[i]);
	printf("\n");
}

void sort(ListADTArray* L) {
	int swap;
	for (int i=0; i<L->size-1; i++)
		for (int j = 0; j < L->size - i - 1; j++) 
			if(L->items[j]>L->items[j+1]){
				swap = L->items[j];
				L->items[j] = L->items[j + 1];
				L->items[j + 1] = swap;
			}
}