#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int vetor[11];
	for (int i = 0;i < 11; i++)
        vetor [i] = i;
    for (int i = 0;i < 11; i++)
        cout << vetor[i]<<endl;
	return 0;
}
