#include "functions.h"
int GetAge(struct animal* a) {
	return a->age;
}
void Construct_Dog(struct dog* d) {
	d->D_Vtable = Dog_Vtable;
	printf("Enter the age of dog\n");
	scanf("%d", &d->age);
	printf("Enter the weight of dog\n");
	scanf("%lf", &d->weight);
}
void Dog_Speak(struct animal* d) {
	printf("Meow! I weigh: %lf", ((struct dog*) d)->weight);
	printf(" pounds \n");
}
double Dog_GetCost(struct animal* d) {
	return ((struct dog*) d)->weight/3 * 7.5;
}
void Construct_Cat(struct cat* c) {
	c->C_Vtable = Cat_Vtable;
	printf("Enter the age of cat\n");
	scanf_s("%d", &c->age);
	printf("Enter the Number of lives for cat\n");
	scanf_s("%d", &c->numOfLives);
}
void Cat_Speak(struct animal* c) {
	printf("Woof! I have: %d", ((struct cat*) c)->numOfLives);
	printf(" lives \n");
}
double Cat_GetCost(struct animal* c) {
	return 100 + 5.5 * c->age;
}
void Construct_Lion(struct lion* l) {
	l->L_Vtable = Lion_Vtable;
	printf("Enter the age of lion\n");
	scanf_s("%d", &l->age);
	printf("Enter the Number of lives for lion\n");
	scanf_s("%d", &l->numOfLives);
	printf("Enter the weight of lion\n");
	scanf_s("%lf", &l->weight);
}
void Lion_Speak(struct animal* l) {
	printf("ROAR! I weigh: %lf", ((struct lion*) l)->weight);
	printf(" pounds \n");
}
