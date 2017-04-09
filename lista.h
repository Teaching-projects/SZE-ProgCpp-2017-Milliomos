using namespace std;

struct node {
	int nehez; std::string kerdes; std::string a; std::string b; std::string c; std::string d; std::string valasz; std::string kategoria;
	node *next;
};

void cserel(struct node *a, struct node *b)
{
	int temp;
	std::string temp2;
    temp = a->nehez;
    a->nehez = b->nehez;
    b->nehez = temp;
	temp2=a->kerdes;
	a->kerdes=b->kerdes;
	b->kerdes=temp2;
	temp2=a->a;
	a->a=b->a;
	b->a=temp2;
	temp2=a->b;
	a->b=b->b;
	b->b,temp2;
	temp2=a->c;
	a->c=b->c;
	b->c=temp2;
	temp2=a->d;
	a->d=b->d;
	b->d=temp2;
	temp2=a->kategoria;
	a->kategoria=b->kategoria;
	b->kategoria=temp2;
	temp2=a->valasz;
	a->valasz=b->valasz;
	b->valasz=temp2;
}

void rendezes(struct node *start)
{
	int cserelt;
	struct node *ptr1;
	struct node *lptr = NULL;

	do
	{
		cserelt = 0;
		ptr1 = start;

		while (ptr1->next != lptr)
		{
			if (ptr1->nehez > ptr1->next->nehez)
			{
				cserel(ptr1, ptr1->next);
				cserelt = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	} while (cserelt);
}


int bekerell(string s){
int nehezseg;
string token;
size_t cur_token = 0, next_token, hanyadik = 0;


do {
	next_token = s.find_first_of(";", cur_token);
	token = s.substr(cur_token, next_token - cur_token);

	if (hanyadik == 0) {
		try {
			nehezseg = stoi(token);
			if (nehezseg<1 || nehezseg>15) { return 0; }
		}
		catch(std::exception){
			cout << "Nehézségnek csak számot adhat meg!\n";
		}
		
	}
	else if (hanyadik >=1 && hanyadik < 6) {
		if (token.empty()) { return 0; }
	}
	else if (hanyadik == 6) {
		if ((token.compare("A") != 0) && (token.compare("B") != 0) && (token.compare("C") != 0) && (token.compare("D") != 0)) { return 0; }
	}
	else if (hanyadik == 7) {
		if (token.empty()) { return 0; }
	}

	if (next_token != string::npos) {
		cur_token = next_token + 1;
	}
		hanyadik++;
} while (next_token != string::npos);
	if (hanyadik != 8 && hanyadik != 9) { return 0; }
		return 1;
}