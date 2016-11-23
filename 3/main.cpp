#include <iostream>
#include "stdkarlanc.hpp"

using namespace std;

/**
 *3. Egy bemeneti karakterlánc (állományból olvassuk be) szóközökkel elválasztott bináris számokat tartalmaz. Tölt­sünk fel egy másik láncot, amelyben szóközzel elválasztva megőrizzük azon bináris számok tízes számrendszerbeli alakját, amelyek bináris alakja páros számú egyeseket tartalmaz!

Példa: '10010 1101 10001 111 1000 1100'  '18 17 12'

 */
int bintodec(int a);
int flip(int a);

int main()
{
	char t[CHAR_STAR_SIZE],words[CHAR_STAR_SIZE];
	cin.getline(t,CHAR_STAR_SIZE);
	int i=0,j;
    t[strlen(t)+1]=0;
    t[strlen(t)]=' ';

	while(i<strlen(t)){
		j=strchr(t+i,' ')-t;
		strncpy(words,t+i,j);
		cout<<bintodec(atoi(words))<<' ';
		i=j;
	}
}

int bintodec(int a){
    int n=0,m=flip(a*10+2);
	while(m!=2){
		n=n*2+m%10;
		m/=10;
	}
    return n;
}

int flip(int a){
	int n=0;
	while(a){
		n=n*10+a%10;
		a/=10;
	}
	return n;
}
