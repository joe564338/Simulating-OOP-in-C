#pragma once
#include <stdio.h>
#include <stdlib.h>
#ifndef __FUNCTIONS_H
#define __FUNCTIONS_H
int GetAge(struct animal*);
void Dog_Speak(struct animal*);
double Dog_GetCost(struct animal*);
void Cat_Speak(struct animal*);
double Cat_GetCost(struct animal*);
void Construct_Dog(struct dog*);
void Construct_Cat(struct cat*);
void Lion_Speak(struct animal*);
void Construct_Lion(struct lion*);
static void* Dog_Vtable[2] = { Dog_Speak, Dog_GetCost };
static void* Cat_Vtable[2] = { Cat_Speak, Cat_GetCost };
static void* Lion_Vtable[2] = { Lion_Speak, Cat_GetCost };
struct animal {
	void** A_Vtable; 

	int age;
};
struct dog {
	void** D_Vtable;
	int age;
	double weight;
};
struct cat {
	void** C_Vtable;
	int age;
	int numOfLives;
};
struct lion {
	void** L_Vtable;
	int age;
	int numOfLives;
	double weight;
};
#endif


