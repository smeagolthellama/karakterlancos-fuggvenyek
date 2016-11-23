#include "stdkarlanc.hpp"

using namespace std;

/**
 *1. Adott két karakterlánc, határozd meg, hogy anagrammái-e egymásnak (tehát minden karakter az első karakterlánból előfordul-e a második karakterláncba, csak más sorrendben).

 */

int main()
{
	char t1[CHAR_STAR_SIZE];
	char t2[CHAR_STAR_SIZE];
	cin.getline(t1,CHAR_STAR_SIZE);
	cin.getline(t2,CHAR_STAR_SIZE);
	int i=0;
	while(strchr(t2,t1[i++])!=NULL){
		if(i==strlen(t2)){
			cout<<"anagramma."<<endl;
			return 0;
		}
	}
	cout<<"nem anagramma";
    return 0;
}
