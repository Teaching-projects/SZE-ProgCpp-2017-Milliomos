#ifndef LISTA_H
#define LISTA_H
using namespace std;
#include <iostream>
#include <string>

struct node {
	int nehez; std::string kerdes; std::string a; std::string b; std::string c; std::string d; std::string valasz; std::string kategoria;
	node *next;
};

void cserel(struct node *a, struct node *b);

void rendezes(struct node *start);


int bekerell(string s);
#endif