#include "functions.h"
int main() {
	struct animal* animal1;
	printf("What animal do you want?\n");
	printf("1. Dog \n2. Cat \n3.Lion \nEnter A number 1-3 \n");
	int animalSelect;
	scanf_s("%d", &animalSelect);
	switch (animalSelect) {
		case 1:
			animal1 = (struct animal*) malloc(sizeof(struct dog));
			Construct_Dog((struct dog*) animal1);
			((void(*)(struct animal*))Dog_Vtable[0])((struct animal*) animal1);
			printf("\nCost: %lf\n", ((double(*)(struct animal*))Dog_Vtable[1])((struct animal*) animal1));
			break;
		case 2:
			animal1 = (struct animal*) malloc(sizeof(struct cat));
			Construct_Cat((struct cat*) animal1);
			((void(*)(struct animal*))Cat_Vtable[0])((struct animal*) animal1);
			printf("\nCost: %lf\n", ((double(*)(struct animal*))Cat_Vtable[1])((struct animal*) animal1));
			break;
		case 3:
			animal1 = (struct animal*) malloc(sizeof(struct lion));
			Construct_Lion((struct lion*) animal1);
			((void(*)(struct animal*))Lion_Vtable[0])((struct animal*) animal1);
			printf("\nCost: %lf\n", ((double(*)(struct animal*))Lion_Vtable[1])((struct animal*) animal1));
			break;
	}
	return 0;
}