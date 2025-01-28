#ifndef LISTADT_H
#define LISTADT_H
#define MAX 250

typedef struct ListADTArray_struct {
	int items[MAX];
	int size;
} ListADTArray;

/**
 * @brief creates a new ListADTArray
 * @return a new empty ListADTArray
 */
ListADTArray createList();

/**
 * @brief adds an item to the start of the list
 * @param L the list to add to
 * @param X the value to add to the start
 * @return 1 if successful, 0 if not
 */
int append(ListADTArray* L, int X);

/**
 * @brief adds an item to the end of the list
 * @param L the list to add to
 * @param X the value to add to the end
 * @return 1 if successful, 0 if not
 */
int prepend(ListADTArray* L, int X);

int insertAfter(ListADTArray* L, int W, int X);

int removeItem(ListADTArray* L, int X);

int linearSearch(ListADTArray L, int X);

int binarySearch(ListADTArray L, int X);

int isEmpty(ListADTArray L);

int getLength(ListADTArray L);

void print(ListADTArray L);

void printReverse(ListADTArray L);

void sort(ListADTArray* L);

#endif // listADT_H