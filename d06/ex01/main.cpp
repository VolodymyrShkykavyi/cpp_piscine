#include <iostream>

struct Data { std::string s1; int n; std::string s2; };
struct AllocData { char s1[8]; int n; char s2[8]; };

void * serialize( void )
{
	AllocData *data = new AllocData;
	char	rand_alpha[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	len = sizeof(rand_alpha) - 1;

	srand(clock());
	for (int i = 0; i < 8; i++)
	{
		data->s1[i] = rand_alpha[rand() % len];
		data->s2[i] = rand_alpha[rand() % len];
	}
	data->n = rand();
	return reinterpret_cast<void*>(data);
}

Data * deserialize( void * raw )
{
	Data	*data = new Data;
	char	*s1 = reinterpret_cast<char*>(raw);
	char	*s2 = s1 + 8 * sizeof(char) + sizeof(int);
	data->n = *reinterpret_cast<int*>(s1 + 8 * sizeof(char));
	data->s1 = std::string(s1);
	data->s1.resize(8);
	data->s2 = std::string(s2);
	data->s2.resize(8);

	return data;
}

int main( void )
{
	Data *t;
	void *r;

	srand(std::time(0));
	r = serialize();
	t = deserialize(r);
	std::cout << "s1: <" << t->s1 << ">" << std::endl;
	std::cout << "n:  <" << t->n << ">" << std::endl;
	std::cout << "s2: <" << t->s2 << ">" << std::endl;
}
